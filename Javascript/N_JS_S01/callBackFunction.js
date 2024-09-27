

/* Need of Asynchronous
Many operations, such as network requests (AJAX calls), reading from files, or database queries, can take a 
significant amount of time to complete. If these operations were synchronous, they would block the execution of the
entire script until they complete, making the application unresponsive. Asynchronous functions allow the main thread
 to continue executing other code while waiting for these operations to complete.
*/


function attachEventListeners(){
    let count = 0;
    document.getElementById("clickMe").addEventListener("click",function xyz(){
        console.log("Button clicked",++count);
    })
}
attachEventListeners();

// Garbage collection and remoneEventListeners()
// it is imp to remove event listerners as they consume a lot of memory due to closures making our website slow