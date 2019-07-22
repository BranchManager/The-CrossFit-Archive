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
    newInput.name = "addmeName"

    newdiv.id = 'newdiv1'
    //add classes tot he div element    
    newdiv.classList.add("col-md-65","mb-3")
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
    newWeight.id = "addme2"
    
    newdivWeight.id = 'newdiv2'
    newdivWeight.classList.add('col-md-6','mb-3')

    parent.insertBefore(newdivWeight,em)
    newdivWeight.appendChild(newWeight)

    console.log(parent)
   // divpar.insertBefore(newdiv,newInput)

    
    //newItem.classList.add("col-md-65")
    //document.write("<p>hello world</p>")



}
 rm_movement = function(){
    console.log('removing')
    var ele = document.getElementById('addme2');
    var ele2 = document.getElementById('addme');
    var ele3 = document.getElementById('newdiv1');
    var ele4 = document.getElementById('newdiv2');

    ele.parentNode.removeChild(ele);
    ele2.parentNode.removeChild(ele2);
    ele3.parentNode.removeChild(ele3);
    ele4.parentNode.removeChild(ele4);
}

module.exports = {
    Ad_movement,
    rm_movement
}