// Promise : it is an object that represents eventual completion of an async operation
/*
const cart = ["shoes","shirt","gloves"];
const promise = createOrder(cart);
// {data : orderDetails}
promise.then(function(orderId){
    proceedToPayment(orderId);
});
*/ 
// imp of promise : 
// as soon as we have data inside promise,there is gurantee that our fn will be called and once only 
// promise when resolved becomes an immutable object

// creating a promise using github api
const GITHU_API ="https://api.github.com/users/Jeevesh05";

const user = fetch(GITHU_API);

console.log(user);
// promise has 3 states : pending, fulfilled and rejected
//when console.log was executed, promise was in a pending state so <pending> was printed
//but if u open up the promise object, it will show fullfilled state beause it is showing the 
//current state of the promise and not the state when the console.log was executed



//Promise channing : returning one promise object to another
/*
creatOrder(cart)
.then(function(orderId){
    return proceedToPayment(orderId);
})
.then(function(paymentInfo){
    return showOrderSummary(paymentInfo);
})
.then(function(paymentInfo){
    return updateWalletBalance(paymentInfo);
})
        OR using arrow fns

creatOrder(cart)
.then((orderId) => proceedToPayment(orderId))
.then((paymentInfo)=> showOrderSummary(paymentInfo))
.then((paymentInfo)=> updateWalletBalance(paymentInfo))

*/
