//suppose i have two objects

const student1 = {
    name : "Rohit",
    printName : function(){
        console.log(this.name);
    }
}
const student2 = {
    name : "Virat"
}

student1.printName();
//student2.printName(); gives error as printName function is defiend in student1 and not in student2
// but can i achieve it?

// yes, by overriding the value if this
student1.printName.call(student2); 



// this inside arrow fn
// arrow functions dont provide their own this binding(it retains the this value of the enclosing lexical context)
const obj = {
    a:10,
    x : ()=>{
        console.log(this);// if the file runs in browser then it will print the window obj  
    }
}
obj.x(); 

// what exactly enclosing lexical context mean
console.log("last function")
const obj2 = {
    a:10,
    x : function(){
        const y = ()=>{
            console.log(this);
        }
        y();
    } 
}
obj2.x();


//this inside DOM elements => reference to HTML element(eg in fetch.html)

//this keyword has different meaning in classes(not covered)