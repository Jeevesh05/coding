const p1 = new Promise((resolve,reject)=>{
    setTimeout(()=>{
        resolve("promise resolved value!!");
    },10000)
});

const p2 = new Promise((resolve,reject)=>{
    setTimeout(()=>{
        resolve("promise resolved value!!");
    },5000)
});

async function handlePromise(){
    console.log()
    const val1 = await p1;
    console.log("namaste JS 1");

    
    console.log(val1);
    
    const val2 = await p2;
    console.log("Namaste js 2");
    console.log(val2);
}
handlePromise();

/*
Note : async await is a syntactical suagr over promise meaning behind the scenes js treats async await as promises only
async await is just for us for better understanding of the code, to prevent promise channing and easy to dubug
*/