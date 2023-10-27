import React, { useState } from 'react'
import Nav from '../../../components/navbar'
import { Container, Form } from 'react-bootstrap'
import './OnePoint.css'
import { evaluate } from 'mathjs'
function OnePoint() {
    const print = () => 
    {
        console.log(data)
        return(
            <table>
                <thead>
                    <tr>
                        <th>Iteration</th>
                        <th>Xi</th>
                        <th>%ERROR</th>
                    </tr>
                </thead>
                <tbody>
                    {data.map((item, index) => 
                    (
                        <tr>
                            <td>{item.iteration}</td>
                            <td>{item.Xi}</td>
                            <td>{item.EA}%</td>
                        </tr>
                    ))}
                </tbody>
            </table>
        )
    }

    const error =(xold, xnew)=> Math.abs((xnew-xold)/xnew)*100;

    const CalOnePoint = (x0,err) =>
    {
        var xnew,xold,p_old,ea=0,scope,iter = 0
        var obj = {}
        ea = error(x0,x0)
        obj = {iteration:iter,Xi:x0,EA:ea.toFixed(6)}
        iter++
        data.push(obj)
        scope = {x:x0} 
        xold = evaluate(Fx,scope)
        ea = error(x0,xold)
        obj = {iteration:iter,Xi:xold,EA:ea.toFixed(6)}
        iter++
        data.push(obj)
        do
        {
            p_old = xold
            scope = 
            {
                x:xold
            }
            xnew = evaluate(Fx,scope)
            xold = xnew
            ea = error(p_old,xnew)
            obj = {iteration:iter,Xi:xnew,EA:ea.toFixed(6)}
            iter++
            data.push(obj)
        }while(ea>err)
        setX(xnew.toPrecision(6))

    }

    const data = [] ;
    const [html,setHtml] = useState(null);
    const [Fx,setFx] = useState();
    const [X0,setX0] = useState(0);
    const [X,setX] = useState(null);
    const [Error,setError] = useState(0.00001);

    const inputFx = (event) => {setFx(event.target.value)}
    const inputX0 = (event) => {setX0(event.target.value)}
    const checkError = (event) => {setError(event.target.value)}

    const calculate = () =>
    {
        const x0 = parseFloat(X0);
        const error = parseFloat(Error);
        CalOnePoint(x0,error);
        setHtml(print());
    }
    return (
        <div className='body'>
            <Nav />
            <div className='Graphical'>
                <h2>One Point Iteration methods</h2>
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
                                    Xi+1 :
                                </label> 
                                <input type="text" id="inpfx" onChange={inputFx}/>
                            </div>
                            <div className='x'>
                                <label for="labx0">
                                    X0 :
                                </label> 
                                <input type="text" id="inpx0" onChange={inputX0}/>
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
export default OnePoint