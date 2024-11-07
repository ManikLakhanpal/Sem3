import { Routes, Route } from 'react-router-dom'
import Home from './containers/Home'
import Wow from './containers/Wow'
import { Context } from './context/Context'
import './App.css'

function App() {

  return (
    <Context>
      <Routes>
        <Route path="/" element={<Home />} />
        <Route path="/home" element={<Wow />} />
      </Routes>
    </Context>
  )
}

export default App
