var divArr1 = [];
var divArr2 = [];

Ad_movement = function(){
    var em = document.getElementById("addiv") //The element to insert before
    var parent = document.getElementById("addiv").parentNode
        //.parent node gets parent of current element so
        //in this case parent of document
    var newdiv = document.createElement("div")
    var newInput = document.createElement("input")
    //var divpar = newInput.parentNode
    newInput.type = "text" //add type class and id to the input elemetn
    newInput.className = "form-control"
    newInput.name = "addme"

    newdiv.name = 'newdiv1'
    //add classes tot he div element    
    newdiv.classList.add("col-md-65","mb-3")

    divArr1.push(newdiv)

    //insert in parent node (i.e. parent.insertBefore()) before em
    parent.insertBefore(newdiv,em)
    //insert element as child of the newdiv
    newdiv.appendChild(newInput)
    //parent.insertBefore(newInput,em)


    /////////////////////////**************************////////////////////////
    var newdivWeight = document.createElement('div')
    var newWeight = document.createElement('input')

    newWeight.type = "text" //add type class and id to the input elemetn
    newWeight.className = "form-control"
    newWeight.name = "addme2"
    
    newdivWeight.name = 'newdiv2'
    newdivWeight.classList.add('col-md-6','mb-3')

    divArr2.push(newdivWeight)

    parent.insertBefore(newdivWeight,em)
    newdivWeight.appendChild(newWeight)

    console.log(parent)
    console.log(newdivWeight)
    console.log(newWeight)
   // divpar.insertBefore(newdiv,newInput)

    
    //newItem.classList.add("col-md-65")
    //document.write("<p>hello world</p>")



}
 rm_movement = function(){
    console.log('removing')
    var ele = document.getElementsByName('addme2');
    var ele2 = document.getElementsByName('addme');
    var ele3 = document.getElementsByName('newdiv1');
    var ele4 = document.getElementsByName('newdiv2');

    //ele.le
    if(divArr1.length > 0){
        console.log(divArr1.length)
        ele[ele.length - 1].parentNode.removeChild(ele[ele.length - 1]);
        ele2[ele2.length - 1].parentNode.removeChild(ele2[ele2.length - 1]);

        divArr1[divArr1.length-1].parentNode.removeChild(divArr1[divArr1.length - 1]);
        divArr2[divArr2.length-1].parentNode.removeChild(divArr2[divArr2.length - 1]);
        divArr2.pop()
        divArr1.pop()
    }
}

module.exports = {
    Ad_movement, 
    rm_movement
}