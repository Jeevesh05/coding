//function statement aka fn declaration
function a(){
    console.log("function statement");
}

//function expression
var b = function(){
    console.log("function assigned to a variable is function exp");
}

//difference btw fn statement and fn exp
//hoisting
// a();
// b();
// functions called before declaration: a will execute,b will display - b is not a function
//this is because before fn expression is executed b will act as a variable only

// Anonymous Function
// can be used in fn expressions else give error as name of fn is must
// function (){
//     console.log("will not run and give error");
// }

//named function exp
var p = function abc(){
    console.log(abc);
}
// abc() called globally will give reference error as it is not defiend globally and 
//can only be used in the that scope only


// Differenece btw parameters and arguments
function demo (param1,param2){
    console.log(param1,param2);
}
argument1 = "hello";
argument2 = "world"
demo(argyment1,argument2);



// First Class Function or First class Citizens
// The ability to use a function to be passed as argument inside an another function as well as return a function from a function
var b = function(param1){
    return function xyz(){
        //demo code
    }
}



// Arrow Functions