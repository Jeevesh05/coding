const cart = ["shoes","jeans","shirt","socks"];

// createOrder, proceedToPayment, shoeOrderSummary, updateWallet

createOrder(cart)
.then(function (orderId){
    console.log(orderId);
    return orderId;
})
.then(function(orderId){
    return proceedToPayment(orderId);
})
.then(function (paymentInfo){
    console.log(paymentInfo);
    return showOrderSummary(paymentInfo);
})
.catch(function (err){
    console.log(err.message);
})
.then(function(){
    console.log("catch catches all the errors above it in the promise chain But Any function below it, will execute as usual")
})

function createOrder(cart){
    // to create a promise, use new keyword to call the Promise class constructor
    const pr = new Promise(function(resolve,reject){
        //create order
        //validate cart
        //orderId
        if(!validateCart(cart)){
            const err = new Error("cart is not valid");
            reject(err);
        }
        //logic for createOrder
        const orderId = "12345";
        //to replicate time req to create order
        if(orderId){
            setTimeout(function (){
                resolve(orderId);
            },5000);
        }
    });
    return pr;
}
function validateCart(cart){
    //logic for validating cart
    return true;
}
function proceedToPayment(orderId){
    //payment logic
    return new Promise(function(resolve,reject){
        resolve("Payment successful");
    })
}
function showOrderSummary(paymentInfo){
    return new Promise(function(resolve,reject){
        process.stdout.write("products ordered : ");
        cart.forEach(element => {
            process.stdout.write(element + ", ");
        });
        console.log();
        resolve("order summary shown");
    })
}