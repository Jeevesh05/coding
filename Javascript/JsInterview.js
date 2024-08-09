/*
Advantages and disadvantages of closures
*/

//advanatges of closures
//moudule CanvasPattern, function curry, higher order functions: one, buns, data hiding and encapsulation

//How data hiding is done in js(also called data encapsulation)
function counter(){
    var count = 0;
    return function incrementCounter(){
        count++;
        console.log(count);
    }
}
var counter1 = counter();
counter1();
counter1();
//entirely fresh counter will be created, new independent copy will be maintained
var counter2 = counter();
counter2();

//is the above code scable?
// NO, use constructor function to separately increase and decrease counter
function NumCounter(){
    var count = 0;
    this.incrementCounter = function(){
        count++;
        console.log(count);
    }
    this.decrementCounter = function(){
        count--;
        console.log(count);
    }
}
var counter3 = new NumCounter();
counter3.incrementCounter();
counter3.incrementCounter();
counter3.decrementCounter();


//disadvantages of closures
//closure of inner function will not let x be removed from the memory 
//or garbage collector does not free up the space taken due to closures which could lead to freezing of browsers
function outer(){
    var x = 5;
    var y = 10;
    return function inner(){
        console.log(x);
    }
}
//smart garbage collector(used in chrome, V8 engine) will remove varibales like y which are not being used in inner
//fucntions thus saving memory