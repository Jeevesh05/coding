const button = document.querySelector('button');
const div = document.querySelector("div");

// button.addEventListener("click",function(){
//     console.log("button is clicked")
// })

div.addEventListener('click',function(event){
    const target = event.target
    //console.log(target);
    if(target.tagName == 'BUTTON'){
        console.log("button is clicked");
        console.log(event.type)
    }
    else{
        console.log("only div was clicked")
    }
})


/*
Having too many event listeners in a web application can lead to several issues, impacting both performance and maintainability. Here are some of the main problems:

1. Performance Degradation
Memory Consumption: Each event listener occupies memory. If you have too many event listeners, especially on a large number of DOM elements, it can increase memory usage, potentially causing memory leaks if they are not properly removed.
CPU Overhead: Each time an event occurs, the browser must trigger all associated event listeners. With too many event listeners, this can increase CPU usage, leading to slower page performance and unresponsiveness.
DOM Manipulation Lag: Excessive event listeners on frequently triggered events (like scroll, resize, mousemove, etc.) can cause noticeable lag because they trigger many times per second, increasing the load on the browser's rendering engine.
2. Event Propagation Issues
Event Bubbling and Capturing: Multiple event listeners can lead to unexpected behaviors, especially when events propagate (bubble up or capture down) through the DOM hierarchy. If multiple listeners are attached to parent and child elements, it may become difficult to manage and predict how events will be handled.
Redundant Listeners: Often, developers accidentally attach multiple event listeners to the same event on the same element, leading to redundant function calls, which can negatively impact performance.
3. Increased Complexity and Maintenance Issues
Difficult to Debug: Managing a large number of event listeners can make it harder to debug and maintain the code. You may struggle to track down which listener is responsible for a certain behavior, especially if listeners are attached dynamically or conditionally.
Potential for Memory Leaks: If event listeners are not properly removed when they are no longer needed (e.g., after an element is removed from the DOM), it can lead to memory leaks, causing the application to use more memory than necessary.
Conflicts and Unintended Behavior: Multiple listeners attached to the same event or element can lead to conflicts or unintended behavior. For instance, one listener might prevent the default action of an event, affecting another listener that relies on that action.
4. Impact on User Experience
Laggy Interface: An excessive number of event listeners, especially on elements that the user interacts with frequently (like buttons, inputs, or scrolling), can result in a laggy or unresponsive user interface, frustrating users.
Delayed Response: When too many event listeners are triggered simultaneously, users may experience delays between their actions and the system's response, degrading the user experience.
5. Unintended Consequences in Asynchronous Code
Race Conditions: If multiple event listeners are added asynchronously (e.g., inside a callback or promise), it may be challenging to manage them correctly, leading to race conditions where the wrong event listener is triggered at the wrong time.


Best Practices to Mitigate These Problems:
Delegate Event Handling: Use event delegation where appropriate by attaching a single event listener to a parent element, and handle events for child elements within that listener. This reduces the number of listeners and improves performance.
Throttling and Debouncing: For frequently triggered events like scroll, resize, or mousemove, use throttling or debouncing techniques to limit how often the event handler is executed.
Remove Unnecessary Listeners: Always remove event listeners when they are no longer needed, especially if elements are removed from the DOM. Use removeEventListener() to clean up.
Batch Event Handling: Combine event handling logic where possible to reduce the number of separate listeners.
Use Modern JavaScript Features: Modern JavaScript frameworks and libraries (like React, Vue, or Angular) help manage event listeners efficiently by abstracting event handling and ensuring proper cleanup.
*/