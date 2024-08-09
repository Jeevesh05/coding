const iPromise = ()=> Promise.resolve('Promise is resolved');

function myFirstFunction(){
    iPromise().then(res =>console.log(res));
    console.log('first');
}
async function mySecondFunction(){
    console.log(await iPromise());
    console.log('second');
}
mySecondFunction();
myFirstFunction();