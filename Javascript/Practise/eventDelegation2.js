// Task : there are 3 buttons and whenever a button is pressed the respective button no needs to be consoled onto the log

// 1st method : to create separate event listeners for each button
// const buttons = document.querySelectorAll('button');

// buttons.forEach((button)=>{
//     button.addEventListener('click',(event)=>{
//         console.log(event.target.innerText);
//     })
// })

// 2nd way, Event delegation
const div = document.querySelector('div')
div.addEventListener('click',(event)=>{
    let target = event.target;
    
    //console.log("event = ",event);
    console.log("target = ",target);
    if(target.tagName === "BUTTON"){
        console.log(target.innerText);
    }
})