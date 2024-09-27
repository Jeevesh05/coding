//suppose you are making an ecommerece website

const cart = ["shoes","shirt","gloves"];

api.createOrders(cart,function(){
    api.proceedToPayment(function(){
        api.showOrderSummary();
    })
})
//too  many nested callback functions causes pyramid of doom

/*
Drawbacks of callbacks
1. callback hell : leading to more compplexity and difficult to maintain
2. Inversion of Control : By writing multiple nested callback function we are giving the control of
 calling our function to an another function which makes the code risky as we don't know for sure whether
  that function is properly written or not, will is call our function or not, or it can also call our 
  function multiple times. 

*/