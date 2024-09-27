import { useState } from 'react'
import './App.css'

/*
@1
In React, state updates made with setState (or setCounter in your case) are asynchronous. 
This means that if you call setCounter multiple times in quick succession within the same function, 
React may batch these updates together to optimize performance. As a result, when you invoke addValue, 
the setCounter calls are not using the most up-to-date state value. Instead, they all see the same initial
value of counter at the start of the function.

@2
prevCounter ensures that each setCounter call works with the most recent state value, allowing 
the counter to correctly increment by 4.
*/

function App() {
  let [counter, setCounter] = useState(10)
  //let counter = 15; 
  const addValue = ()=>{
    //counter = counter + 1
    if(counter < 20){
      //@1 reason
      setCounter(counter+1);
      setCounter(counter+1);
      setCounter(counter+1);
      setCounter(counter+1);
      //@2 reason
      // setCounter((prevCounter)=>prevCounter+1)
      // setCounter((prevCounter)=>prevCounter+1)
      // setCounter((prevCounter)=>prevCounter+1)
      // setCounter((prevCounter)=>prevCounter+1)
    }
  }
  const subValue = ()=>{
    if(counter>0){
      setCounter(counter-1)
    }
    //counter = counter - 1
  }
  return (
    <>
      <h2>This is a project to make a counter which uses useState hook</h2>
      <p>counter : {counter}</p>
      <button onClick={addValue}> Add value {counter}</button>
      <button onClick={subValue}> Sub value {counter} </button>
    </>
  )
}

export default App
