import React, { useState } from 'react'
import Nav from '../../../components/navbar'
import { Container, Form } from 'react-bootstrap'
import './Graphical.css'
import { evaluate } from 'mathjs'
function Graphical() 
{
    const CalGraphical = (xl,xr,error) =>
    {
        var scope,nextfxl;
        scope = 
        {
            x:i
        }
        fxl = evaluate(Fx,scope)
        fxl++;
        for(let i=1;i<xr;i++)
        {
            scope = 
            {
                x:i
            }
            nextfxl = evaluate(Fx,scope)
            if(fxl*nextfxl>=0)
            {
                fxl = nextfxl;
            }
            xr = i
        }
        // var x, y, z;
        // var a; 
        // var r[100];
        // for (let i = xl; i <= xr; i++)
        // {
        //     r[i] = 43 * i - 180;
        // }

        // for (int i = 0; i < 10; i++)
        // {
        //     if (r[i] * r[i + 1] < 0)
        //     {
        //         y = i;
        //         z = i + 1;
        //         break;
        //     }
        // }
        // x = y;
        // while (y <= x && x <= z)
        // {
        //     x = x + 0.000001;
        //     a = 43 * x - 180;
        //     if (abs(a) < 0.0001)
        //     {
        //         cout << x;
        //         break;

        //     }
        // }
        // cout << y <<endl<< z;
        // 4.18605

    }
    const [Fx,setFx] = useState();
    const [Xl,setXl] = useState(0);
    const [Xr,setXr] = useState(0);
    const [Error,setError] = useState(0.0001);

    const inputFx = (event) => {setFx(event.target.value)}
    const inputXl = (event) => {setXl(event.target.value)}
    const inputXr = (event) => {setXr(event.target.value)}
    const inputError = (event) => {setError(event.target.value)}

    const calculate = () =>
    {
        const xl = parseFloat(Xl);
        const xr = parseFloat(Xr);
        const error = parseFloat(Error);
        CalGraphical(xl,xr,error);
    }



























    return (
        <div className='body'>
            <Nav />
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
                        <h5>ANSWER = </h5>
                    </Form>
                </Container>
            </div>
        </div>
    )
}
export default Graphical