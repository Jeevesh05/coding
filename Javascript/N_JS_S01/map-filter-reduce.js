const arr = [5,3,6,1,4,2];

//converts num into binary
const map1 = arr.map((x) => x.toString(2));
//returns the square of all numbers
const map2 = arr.map((x) => x*x);
//console.log(map1,map2);

//odd no.s
const filter1 = arr.filter((x) => x%2);
//console.log(filter1);

//example to find sum or max of all nums
const reduce1 = arr.reduce(function(accumelator,current){
    accumelator = accumelator + current;
    return accumelator; 
},0)
//console.log(reduce1);

 



const users = [
    {first:"akshay",lastname : "saini", age : 26},
    {first:"jeevesh",lastname : "kumar", age : 6},
    {first:"rohit",lastname : "sharma", age : 46},
    {first:"virat",lastname : "kohli", age : 26}
]

//list of full names
const o1 = users.map((x) => x.first + " " + x.lastname);
console.log(o1);

// frequency of age
const o2 = users.reduce(function(acc,curr){
    if(acc[curr.age]){
        acc[curr.age] = ++acc[curr.age];
    }
    else{
        acc[curr.age] = 1;
    }
    return acc;
},{})
console.log(o2);


//chaning of functions
//aim : to obtain an arry with first names of people with age<30;
const o3 = users.filter((x) => x.age<30).map((x) => x.first);
console.log(o3);

//HW can be done using reduce
