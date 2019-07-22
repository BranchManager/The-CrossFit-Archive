console.log("testing1")

  // Your web app's Firebase configuration
  //import * as firebase from 'firebase'
  

  //var database = firebase.database()
  //var ipc = require('electron').ipcRenderer;
  //var elec = require("./main")

//module.exports = { 
    hello = function(){
        var firebase = require('firebase/app')
        //require('firebase/firestore')
        require('firebase/database')
        require('firebase/auth')
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
            console.log("testing exports")
    }
    tes = function(){
        console.log("double test")
    }
//};

module.exports = {hello}

hello()






///////////////////////////
firebase.auth().onAuthStateChanged(user =>{
    if(user){
        console.log(user.email)
        console.log("we in there")
        window.location.replace("shop.html")
    }else{
        console.log("not signed in")
    }
})

signin.addEventListener('click', function(){
    var email = document.getElementById('usersignin').value;
    var password = document.getElementById('passwordsignin').value;

    console.log('signing in')
    console.log(email)
    console.log(password)

    firebase.auth().signInWithEmailAndPassword(email,password)
    .then(
        function(dauser){
            console.log("aye bobby!")
        })
    .catch(
        function(error) {
            console.log("ERROR BIH")
        })
        /*.catch(function(error) {
            var ec = error.code
            console.log("there was an error")
            console.log(ec)
            console.log(error.message)
        }).then((user)=>{console.log("gotemm"); console.log(user.email)})*/

    firebase.auth().onAuthStateChanged(user =>{
        if(user){
            console.log(user.email)
            console.log("we in there")
            window.location.replace("shop.html")
        }else{
            console.log("not signed in")
        }
    })

const signin = document.getElementById('signin')
})