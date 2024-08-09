console.log("start");

setTimeout(function cb(){
    console.log("call back");
},5000);

console.log("end");

//code snippet that will take 10 secs to execute
let startTime = new Date().getTime();
let endTime = startTime;
while(endTime <= startTime + 10000){
    endTime = new Date().getTime();
}
console.log("while loop ends");



// what if seTimeout is 0
console.log("start");
setTimeout(function cb(){
    console.log("call back");
},0);
console.log("end");
//still ans will be
//start
//end
//cb , because cb function will still be taken out of call stack,use timer and be pushed into callBack Queue