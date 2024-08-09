let a = 1;
setInterval(()=>{
    console.log("interval = ",a);
    a= 10;
},2000);

setInterval(()=>{
    console.log(a);
},2000);