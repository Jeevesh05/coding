let count = 0;
let arr = [3,4,5,6,7];
let resultOne = arr.every(value =>{
    if(value>6){
        count++;
        return true;
    }
    return false;
});

let resultTwo = arr.some(value=>{
    if(value>6){
        count++;
        return false;
    }
    return true;
});
console.log(resultOne);
console.log(resultTwo);
console.log(count);