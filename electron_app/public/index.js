
console.log("testing7")

// Your web app's Firebase configuration
//var firebase = require("firebase/app")

//var ipc = require('electron').ipcRenderer;
//var elec = require("./main")
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
  //firebase.initializeApp(firebaseConfig);
  //var database = firebase.database()
const signin = document.getElementById('auth')

signin.addEventListener('click', function(){
    var e = document.getElementById('user').value;
    var b = document.getElementById('passwrd').value;

    console.log(e)
    console.log(b)

    firebase.auth().createUserWithEmailAndPassword(e, b)
      .catch(function(error) {
      // Handle Errors here.
      var errorCode = error.code;
      var errorMessage = error.message;
      console.log("error message")
      console.log(errorMessage)
      // ...
    })
    .then((user)=>{console.log(user)});

    
    
})
document.addEventListener("DOMContentLoaded", event =>{
  const app =firebase.app();
  console.log(app)
})
 

console.log("testing")