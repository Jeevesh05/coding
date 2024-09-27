import './App.css'
import MusicPlayer from "./components/musicPlayer"

function App() {

  return (
    <>
      <h1 className='text-3xl' font-bold> Hello World</h1> 
      <MusicPlayer name='Tum he Ho'/>
      <MusicPlayer describe='no song'/>
    </>
  )
}

export default App
