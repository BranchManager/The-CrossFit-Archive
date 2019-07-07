//fire = require('./index')

console.log("testing1")

  // Your web app's Firebase configuration
  //import * as firebase from 'firebase'
  var firebase = require('firebase/app')
  //require('firebase/firestore')
  require('firebase/database')
  require('firebase/auth')

  //var database = firebase.database()
  //var ipc = require('electron').ipcRenderer;
  //var elec = require("./main")
if(firebase.apps.length ===0){
  var firebaseConfig = {
      apiKey: "AIzaSyAu7LfoTi5W2O7c_xAM49-dGN4_ZYf4ROk",
      authDomain: "wodiver.firebaseapp.com",
      databaseURL: "https://wodiver.firebaseio.com",
      projectId: "wodiver",
      storageBucket: "wodiver.appspot.com",
      messagingSenderId: "1009484581983",
      appId: "1:1009484581983:web:f8e0afe03d0490de"
    };
    // Initialize Firebase
  firebase.initializeApp(firebaseConfig);
}

function setupdatabase(user,FN){
    console.log("we tried but nothing seems to be happeneing")
    //console.log(typeof userID)
    //console.log(userID)
    var ID = user.uid//.toString();
    var em = user.email//.toString()
    //var FN = user.FirstName//.toString();
    console.log(user.uid)
    console.log(FN)
    console.log("no fn")
    var postData = {
  
      uid : ID,
      email: em,
      FirstName :FN
  
    };
    var userRef = firebase.database().ref('users/' + ID );
    userRef.set(postData, ()=> {
        window.location.replace("main.html")
    })
    console.log("why")
  
    return 
    /*var newPostKey = firebase.database().ref().child('posts').push().key;
    console.log("well made it this far")
    // Write the new post's data simultaneously in the posts list and the user's post list.
    var updates = {};
    updates['/posts/' + newPostKey] = postData; 
    console.log("well made it this far 1");
    updates['/user-posts/' + ID + '/' + newPostKey] = postData; console.log("well made it this far 1");
  
    console.log("we tried a 2nd time but nothing seems to be happeneing")
    return firebase.database().ref().update(updates);*/
}
    /*console.log("setterup")
    console.log(userID)
    console.log(email)
    /*var newinfo = {
      Firstname: name,
      email: email
    }
    firebase.database().ref('users/' + userId).set({
      FirstName: name,
      email: email,
      
    });*/
  
  
  
  const signin = document.getElementById('auth')
  ///////////////////////////
  
  
  signin.addEventListener('click', function(){
      var email = document.getElementById('email').value;
      var password = document.getElementById('passwrdsignup').value;
      var Firstname = document.getElementById('FN').value;
      var LastName = document.getElementById('Lastname')
      var gym = document.getElementById('gym')
  
      console.log(email)
      console.log(password)
      console.log(Firstname)
  
      firebase.auth().createUserWithEmailAndPassword(email, password)
        .catch(function(error) {
        // Handle Errors here.
        var errorCode = error.code;
        var errorMessage = error.message;
        console.log('you have an error')
        console.log("error message")
        console.log(errorMessage)
        // ...
      })
      /*.then((user)=>{
        console.log(user)
        setupdatabase(user)
      });*/
      firebase.auth().onAuthStateChanged(DaUserInfo =>{
        if(DaUserInfo){
          console.log(DaUserInfo.email)
          console.log(Firstname)
          setupdatabase(DaUserInfo,Firstname)
        }else{
          console.log("WE NOT IN")
        }
      })
      
  })
  
  
  
  
  
  /*var user = fire.firebase.auth().currentUser;
  
  if (user) {
    // User is signed in.
    console.log(user.email)
  } else {
    // No user is signed in.
    console.log("again he aint signed in")
  }*/
  
  
  document.addEventListener("DOMContentLoaded", event =>{
    const app =firebase.app();
    console.log(app)
  })
   
  
  
  console.log("testing")
   
  
  console.log("testing")