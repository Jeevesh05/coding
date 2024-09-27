// you should know how fetch api works in js
//google : api.github.com
const validURL = "https://api.github.com/users/Jeevesh05";
const invalidURL = "invalidURL";

async function handlePromise1() {
    //fetch returns a promise, if gets resolved it gives a response object
    const data = await fetch(validURL);
    
    //if u want to convert response object to JSON which is also a promise
    const jsonValue = await data.json()
    console.log(jsonValue);

    //or
    //fetch().then(res=>res.json()).then(res=>console.log(res));

}

// fetch() => response.json() => jsonValue

//handling errors
// way 1
async function handlePromise2() {
    try{
        const data = await fetch(invalidURL);
        const jsonValue = await data.json()
        console.log(jsonValue);
    }
    catch(err){
        console.log("url is invalid");// or may be i can redirect the user to some Other page
    }

}
//way 2
//handlePromise().catch((err) =>console.log(err));

handlePromise1();
handlePromise2();