import { createRoot } from 'react-dom/client'
import App from './App.jsx'
import React from 'react'

const element = (
    <a href="https://google.com" target='_blank'>click me</a>
)
const reactEl = React.createElement(
    'a',
    {href:"https://google.com",target:"_blank"},
    "do click me to reach google"
)

createRoot(document.getElementById('root')).render(
    <App/>
)
