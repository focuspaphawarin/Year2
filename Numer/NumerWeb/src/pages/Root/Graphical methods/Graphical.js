import React from 'react'
import Nav from '../../../components/navbar'
import { Container, Form } from 'react-bootstrap'
import './Graphical.css'
function Graphical() {
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
                                <input type="text" id="inpfx"/>
                            </div>
                            <div className='x'>
                                <label for="labxl">
                                    XL :
                                </label> 
                                <input type="text" id="inpxl"/>
                                <label for="labxr">
                                    XR :
                                </label> 
                                <input type="text" id="inpxr"/>
                            </div>
                            <div className='err'>
                                <label for="err">
                                    CHECK ERROR 
                                </label> <br/>
                                <input type="text" id="checkerr"/>
                            </div>
                        </div>
                        <div className='bt'>
                            <button type='button'>
                                CALCULATE
                            </button>
                        </div>
                    </Form>
                </Container>
            </div>
        </div>
    )
}
export default Graphical