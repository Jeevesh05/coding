const name1 = {
    firstName : "Rohit",
    lastName : "Sharma"
}
const name2 = {
    firstName : "Virat",
    lastName : "Kohli"
}
let printFullName = function(hometown,state){
    console.log(this.firstName + " " + this.lastName + " from " + hometown + " ," +state);
}
//call take arguments
printFullName.call(name1,"mumbai","maharastra");

//apply take an array of variables
printFullName.apply(name2,["rohini","delhi"]);

// bind method returns a function with the passed arguments
let printMyName  = printFullName.bind(name2,"rohini","delhi");
console.log(printMyName);
printMyName();