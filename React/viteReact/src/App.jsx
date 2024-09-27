import Demo from './Demo'

function App() {
  //can only use evaluated expressions, i can not run js code in {}
  //reason : every element is converted into a object and object has a syntax
  //how js code will be treated or accomodated in a object
  const userName = "Rohit Sharma";
  return (
    <>
      <h1>Hello</h1>
    <p>how are u? {userName}</p>
      <Demo/>
    </>

  )
}

export default App
