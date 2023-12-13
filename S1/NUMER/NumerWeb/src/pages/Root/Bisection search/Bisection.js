import React, { useState } from 'react'
import Nav from '../../../components/navbar'
import { Container, Form } from 'react-bootstrap'
import './Bisection.css'
import { evaluate } from 'mathjs'
function Bisection() 
{
    const print = () => 
    {
        console.log(data)
        return(
            <table>
                <thead>
                    <tr>
                        <th>Iteration</th>
                        <th>XL</th>
                        <th>XM</th>
                        <th>XR</th>
                        <th>%ERROR</th>
                    </tr>
                </thead>
                <tbody>
                    {data.map((item, index) => 
                    (
                        <tr>
                            <td>{item.iteration}</td>
                            <td>{item.Xl}</td>
                            <td>{item.Xm}</td>
                            <td>{item.Xr}</td>
                            <td>{item.EA}%</td>
                        </tr>
                    ))}
                </tbody>
            </table>
        )
    }

    const error =(xold, xnew)=> Math.abs((xnew-xold)/xnew)*100;

    const CalBisection = (xl,xr,err) => 
    {
        var xm,fXm,fXr,ea,scope;
        var iter = 0;
        var MAX = 50;
        var obj={};
        do
        {
            xm = (xl+xr)/2.0;
            scope = 
            {
                x:xr,
            }
            fXr = evaluate(Fx, scope)
            scope = 
            {
                x:xm,
            }
            fXm = evaluate(Fx, scope)

            iter ++;
            if (fXm*fXr > 0)
            {
                ea = error(xr, xm);
                obj = {
                    iteration:iter,
                    Xl:xl,
                    Xm:xm,
                    Xr:xr,
                    EA:ea.toFixed(6)
                }
                data.push(obj)
                xr = xm;
            }
            else if (fXm*fXr < 0)
            {
                ea = error(xl, xm);
                obj = 
                {
                    iteration:iter,
                    Xl:xl,
                    Xm:xm,
                    Xr:xr,
                    EA:ea.toFixed(6)
                }
                data.push(obj)
                xl = xm;
            }
        }while(ea>err && iter<MAX)
        setX(xm.toFixed(6))
    }

    const data = [] ;
    const [html,setHtml] = useState(null);
    const [Fx,setFx] = useState();
    const [Xl,setXl] = useState(0);
    const [Xr,setXr] = useState(0);
    const [X,setX] = useState(null);
    const [Error,setError] = useState(0.00001);

    const inputFx = (event) => {setFx(event.target.value)}
    const inputXl = (event) => {setXl(event.target.value)}
    const inputXr = (event) => {setXr(event.target.value)}
    const checkError = (event) => {setError(event.target.value)}

    const calculate = () =>
    {
        const xl = parseFloat(Xl);
        const xr = parseFloat(Xr);
        const error = parseFloat(Error);
        CalBisection(xl,xr,error);
        setHtml(print());
    }
    return (
        <div className='body'>
            <Nav />
            <div className= 'Bisection'>
                <h2>Bisection search</h2>
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
export default Bisection