import React, { useState } from 'react'
import Nav from '../../../components/navbar'
import { Container, Form } from 'react-bootstrap'
import './Newton.css'
import { evaluate,derivative } from 'mathjs'


function Newton() 
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

    const func = (Fx,x) =>
    {
        var fx,scope
        scope = 
        {
            x:x
        }
        fx = evaluate(Fx,scope)
        return fx;
    }

    const difffunc = (Fx,x) =>
    {
        var d,dFx,scope
        d = derivative(Fx, 'x').toString();
        scope = 
        {
            x:x
        }
        dFx = evaluate(d,scope)
        return dFx;
    }

    const XN = (x,Fx,dFx) => 
    {
        var xn
        xn = x - (Fx/dFx);
        return xn
    }

    const CalNewton = (x0,err) => 
    {
        var xnew,xold,p_xold,ea=0,iter=0
        var obj = {}
        ea = error(x0,x0)
        obj = 
        {
            iteration:iter,
            Xi:x0,
            EA:ea.toFixed(6)
        }
        iter++
        data.push(obj)
        xold = XN(x0,func(Fx,x0),difffunc(Fx,x0))
        ea = error(x0,xold)
        obj = 
        {
            iteration:iter,
            Xi:xold,
            EA:ea.toFixed(6)
        }
        iter++
        data.push(obj)
        do
        {
            p_xold = xold
            xnew = XN(xold,func(Fx,xold),difffunc(Fx,xold))
            xold = xnew
            ea = error(p_xold,xnew)
            obj = 
            {
                iteration:iter,
                Xi:xnew,
                EA:ea.toFixed(6)
            }
            iter++
            data.push(obj)
        }while(ea>err)
        setX(xnew.toFixed(6))
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
        CalNewton(x0,error);
        setHtml(print());
    }

    return (
        <div className='body'>
            <Nav />
            <div className='Newton'>
                <h2>Newton Raphson methods</h2>
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
export default Newton