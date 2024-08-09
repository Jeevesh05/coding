//run this file in js in browser
"use strict";
//meaning of this keyword is different when used in different context

//this in global
console.log(this);//globalObject for browser is window object
//there can be various js engines like in browser,in node js, in an electronic device therefore globalObject can vary


//this inside function
//this works differently in strict mode and in non strict mode
//to use strict mode write "use strict" on top of the file
function x(){
    console.log(this);
}
/*
this substitution - (inside non strict mode)
if the value of this keyword is undefined or null this keyword 
will be replaced with globalObject only in non strict mode
*/


//value of this also depends how it is called
x(); //undefined in strict mode
window.x();// window object in strict mode


//this inside and object
const obj = {
    a:10,
    //function inside an object is called a method
    x : function(){
        console.log(this);
        //console.log(a); // not defined
        console.log(this.a);
        console.log(this.x);
    }
}
obj.x();
