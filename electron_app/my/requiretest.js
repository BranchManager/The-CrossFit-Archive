var firebase = require('firebase/app')
  //require('firebase/firestore')
require('firebase/database')
require('firebase/auth')

var test = require('./my/signin')


test.hello()
//test.tes()

// ///////////////////////////
// firebase.auth().onAuthStateChanged(user =>{
//     if(user){
//         console.log(user.email)
//         console.log("we in there")
//         window.location.replace("shop.html")
//     }else{
//         console.log("not signed in")
//     }
// })

// signin.addEventListener('click', function(){
//     var email = document.getElementById('usersignin').value;
//     var password = document.getElementById('passwordsignin').value;

//     console.log('signing in')
//     console.log(email)
//     console.log(password)

//     firebase.auth().signInWithEmailAndPassword(email,password)
//     .then(
//         function(dauser){
//             console.log("aye bobby!")
//         })
//     .catch(
//         function(error) {
//             console.log("ERROR BIH")
//         })
//         /*.catch(function(error) {
//             var ec = error.code
//             console.log("there was an error")
//             console.log(ec)
//             console.log(error.message)
//         }).then((user)=>{console.log("gotemm"); console.log(user.email)})*/

//     firebase.auth().onAuthStateChanged(user =>{
//         if(user){
//             console.log(user.email)
//             console.log("we in there")
//             window.location.replace("shop.html")
//         }else{
//             console.log("not signed in")
//         }
//     })

// const signin = document.getElementById('signin')
// })