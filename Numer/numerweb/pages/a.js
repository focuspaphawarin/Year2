import { useState } from 'react'
export default function Button() 
{
    console.log("Hello")
    const [a, setA] = useState(0);
    
    return <div>
        <p style={{marginLeft: '155px'}}> {a} </p>
        <button onClick = {()=>console.log(setA(0))} id = "x" style = {{color:'White',marginLeft: '50px'}}>Reset</button>
        <button onClick = {()=>console.log(setA(a-1))} id = "x" style = {{color:'red',marginLeft: '50px',marginRight: '50px'}}>Delete</button>
        <button onClick = {()=>console.log(setA(a+1))} id = "x" style = {{color:'Green',marginRight: '50px'}}>Add</button>
    </div>

}