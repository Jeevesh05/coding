
const p = new Promise(function(resolve,reject){
    setTimeout(()=>{
        resolve("Promise Resolved successful");
    },4000);
});

//old way of calling promises
// function getData(){
//     p.then((res)=> console.log(res));
//     console.log("Namaste JS");
// }
// getData();
// console.log("outside");// means js does not wait for promise to settle and goes forward not only in fn but further as well


//using async and await
//await is a keyword which can only be used inside async function
async function handlePromise() {
    const val =  await p;
    console.log(val);
    console.log("moved forward");     
}
handlePromise();
console.log("outside");


// Q : if js does not wait for none then how await works?
// ans : when js encounters await, it removes the fnction from the call stack so that it wont get blocked by the promise
// and when the proise is settled it puts the promise back into the call stack and start the exection from where it left earlier
