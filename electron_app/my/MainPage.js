
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

if(firebase.apps.length === 0){
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
//var uid = firebase.auth().currentUser.uid;
//document.getElementById("Name").innerHTML = "hello bob"
//document.write("hello")
var userid
var X
firebase.auth().onAuthStateChanged(DaUserInfo =>{
  if(DaUserInfo){
    console.log(DaUserInfo.email)
    //console.log(Firstname)
    //setupdatabase(DaUserInfo,Firstname)
    userid = DaUserInfo.uid
    console.log(userid)
    var b = callem()
    console.log(b)
   // document.getElementById("Name").innerHTML = X
  }else{
    console.log("WE NOT IN")
  }
})


function callem(){
  var X
  firebase.database().ref('users/' + userid).on('value', function(snap){
    var eh = snap.val()
    //key = Object.keys(eh)
    console.log(eh.FirstName)
    X = eh.FirstName
    //return X
    //CAPITAL matter in the name
   document.getElementById("Name").innerHTML = eh.FirstName

  })
  return X
}


//Sign out button begin here
const signout = document.getElementById('out')
  ///////////////////////////
  
  
signout.addEventListener('click', function(){
  firebase.auth().signOut().catch(function(error) {
    // An error happened.
    
    console.log(error)
  });

  firebase.auth().onAuthStateChanged(DaUserInfo =>{
    if(DaUserInfo){
      console.log(DaUserInfo.email)
    }else{
      console.log("we outchea!")
      window.location.replace("signin.html")
    }


  })

})
//document.getElementById("Name").innerHTML = "hello bob"

/////////////old Code BELOW/////////////////////
/*const signin = document.getElementById('auth')
/////////////////////////




signin.addEventListener('click', function(){
    var e = document.getElementById('user').value;
    console.log(e)
})
*/




/*function setupdatabase(user,FN){
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
  var userRef = firebase.database().ref('users/' + ID + '');
  userRef.set(postData)
  console.log("why")

  window.location.replace("main.html")
  return 
  
}
  



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





var user = firebase.auth().currentUser;

if (user) {
  // User is signed in.
  console.log(user.email)
} else {
  // No user is signed in.
  console.log("again he aint signed in")
}


document.addEventListener("DOMContentLoaded", event =>{
  const app =firebase.app();
  console.log(app)
})
 


console.log("testing")
 

console.log("testing")*/