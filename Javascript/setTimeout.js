/*
 while waiting, the setTimeout function’s callback is stored in the Web APIs environment.After the specified
 delay, it is moved to the message queue and eventually executed by the event loop when the call stack is clear.
*/
function x1(){
    var i = 1;
    setTimeout(function (){
        console.log(i);
    },3000);
    console.log("hello");
}
//Q. Print nums from 1 to 5 after every sec
//wrong ans reaseon :  var stores variable in global scope,so only one copy of i is being maintained and it is being pointed to
//for loop will not wait for setTimeout function and move on thus value of i increases and loop breaks at i = 6
//now when 1 sec is passed function inside the setTimeout fn will look for value of i which is now 6 and so 6 will be printed
function x2(){
    for(var i = 0;i<=5; i++){
        setTimeout(function (){
            console.log(i);
        },1000);    
    }
}
//x2();

//using let
//let is blocked scope so a new copy for each function call will be made
function x3(){
    for(let i = 0;i<=5; i++){
        setTimeout(function (){
            console.log(i);
        },1000);    
    }
}
//x3();

//without using let
//num variable is function scoped which means a new copy will be mainted each time the printNums fn is called
function x4(){
    for(var i =1; i<=5; i++){
        function printNums(num){
            setTimeout(function (){
                console.log(num);
            },num*1000);
        }       
        printNums(i);
    }
}
    
x4();