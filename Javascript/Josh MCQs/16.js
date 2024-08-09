var array = [5,4,3,2,1];
for(let i =0; i<array.length;i++){
    setTimeout(()=>{
        console.log(array[i])
    },1000);
}