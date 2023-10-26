import React, { useState } from 'react'
import Nav from '../../../components/navbar'
import { Container, Form } from 'react-bootstrap'
import './Graphical.css'
import { evaluate } from 'mathjs'
function Graphical() 
{
    const print = () => 
    {
        console.log(data)
        return(
            <table>
                <thead>
                    <tr>
                        <th>Iteration</th>
                        <th>Xi</th>
                        <th>F(xi)</th>
                    </tr>
                </thead>
                <tbody>
                    {data.map((item, index) => 
                    (
                        <tr>
                            <td>{item.iteration}</td>
                            <td>{item.Xi}</td>
                            <td>{item.Fxi}</td>
                        </tr>
                    ))}
                </tbody>
            </table>
        )
    }
    const CalGraphical = (xl,xr,error) =>
    {
        var Fxl = 0 ,NextFxl = 0,iter = 0,scope;
        var obj = {};
        scope = 
        {
            x:xl
        }
        NextFxl = evaluate(Fx,scope)
        for(let i=xl+1;i<=xr;i++)
        {
            if(Fxl*NextFxl >= 0)
            {
                Fxl = NextFxl
                scope = 
                {
                    x:i
                }
                NextFxl = evaluate(Fx,scope)
                obj = 
                {
                    iteration:iter,
                    Xi:i,
                    Fxi:NextFxl,
                }
                iter++
                data.push(obj)
            }
            else
            {
                xl = i-2
                xr = i-1
                break;
            }
        }
        let count = 0
        if(xl<=xr)
        {
            do
            { 
                xl += 0.000001
                scope = 
                {
                    x:xl
                }
                Fxl = evaluate(Fx,scope)
                count++
            }
            while(Math.abs(Fxl)>error)
            obj = 
            {
                iteration:iter,
                Xi:xl,
                Fxi:NextFxl,
            }
            iter++
            data.push(obj)
        }
        setX(xl.toPrecision(6))
        console.log("X = ",xl)
    }

    const data = [] ;
    const [html,setHtml] = useState(null);
    const [Fx,setFx] = useState();
    const [Xl,setXl] = useState(0);
    const [Xr,setXr] = useState(0);
    const [X,setX] = useState(null);
    const [Error,setError] = useState(0.0001);

    const inputFx = (event) => {setFx(event.target.value)}
    const inputXl = (event) => {setXl(event.target.value)}
    const inputXr = (event) => {setXr(event.target.value)}
    const checkError = (event) => {setError(event.target.value)}

    const calculate = () =>
    {
        const xl = parseFloat(Xl);
        const xr = parseFloat(Xr);
        const error = parseFloat(Error);
        CalGraphical(xl,xr,error);
        setHtml(print());
    }
    return (
        <div className='body'>
            <Nav />
            <div className='Graphical'>
                <h2>Graphical methods</h2>
            </div>
            <div >
                <Container>
                    <Form>
                        <div className='input'>
                            <div className='textinp'>
                                <label>INPUT</label>
                            </div>
                            <div className='fx'>
                                <label for="labfx">
                                    F(x) :
                                </label> 
                                <input type="text" id="inpfx" onChange={inputFx}/>
                            </div>
                            <div className='x'>
                                <label for="labxl">
                                    XL :
                                </label> 
                                <input type="text" id="inpxl" onChange={inputXl}/>
                                <label for="labxr">
                                    XR :
                                </label> 
                                <input type="text" id="inpxr" onChange={inputXr}/>
                            </div>
                            <div className='err'>
                                <label for="err">
                                    CHECK ERROR 
                                </label> <br/>
                                <input type="text" id="checkerr" onChange={checkError}/>
                            </div>
                        </div>
                        <div className='bt'>
                            <button type='button'onClick={calculate}>
                                CALCULATE
                            </button>
                        </div>
                        <br></br>
                        <h5>ANSWER = {X}</h5>
                    </Form>
                    {html}
                </Container>
            </div>
        </div>
    )
}
export default Graphical