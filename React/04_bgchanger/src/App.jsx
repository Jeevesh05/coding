import './App.css'
import { useState } from 'react'  

function App() {
  const [color,setColor] = useState('violet')

  function handleColorChange(event){
    const newColor = event.target.getAttribute('dataColor');
    if(newColor){
      setColor(newColor);
    }
    
  }
    return (
    <>
      <div>
        <h1>Background Changer</h1>
        <div className='w-full h-screen duration-200'
        style={{backgroundColor : color}}
        >
          <div className='fixed flex flex-wrap justify-center
          bottom-12 insert-x-0 px-2'></div>
          <div className='inline-flex flex-wrap justify-center gap-3
          shadow-xl bg-white px-3 py-2 rounded-3xl w-auto' onClick={handleColorChange}>
            <button className='outline-none px-4 py-1 rounded-full text-white bg-red-600'  dataColor = 'red'>Red</button>
            <button className='outline-none px-4 py-1 rounded-full text-white bg-blue-600' dataColor = 'blue'>blue</button>
            <button className='outline-none px-4 py-1 rounded-full text-white bg-green-600' dataColor = 'green'>green</button>
          </div>
        </div>
        </div>     
    </>
  )
}

export default App
