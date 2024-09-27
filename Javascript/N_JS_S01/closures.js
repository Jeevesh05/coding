//The closure allows inner to access b when inner is executed, 
//but b is not a property of the inner function object. Therefore, f.b is undefined.
function outer(){
    var b = 100;
    function inner(){
        console.log(a);
    }
    var a = 10;
    return inner;
}
//outer()();
var f = outer();
f();
//console.log(f.b);