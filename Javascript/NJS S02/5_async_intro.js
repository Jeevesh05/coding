/*
what is async?
what is await?
How async await works behind the scene?
examples of using async/await
error handling
interviews
async await vs Promise.then/.catch
*/

//async await are used to handle promises
//async always returns a promise
//if u return a non promise value then it will wrap that value in a promise and then return it
//else if u return a promise then it will not re-wrap it in an another, it will simplt return the exisiting promise as it is
async function getData(){
    return "namaste";
}

const dataPromise = getData();

dataPromise.then((res) => console.log(res));
//await can only be used inside an async function