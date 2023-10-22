import Nav from "../../components/navbar";
import './home.css';
import Dropdown from 'react-bootstrap/Dropdown';
function Home() {
    return (
        <div className="Home">
            <Nav />
            <div className="box">
                <Dropdown>
                    <Dropdown.Toggle  variant="" className="root">
                        Root Of Equation
                    </Dropdown.Toggle>

                    <Dropdown.Menu>
                        <Dropdown.Item href="/Graphical">Graphical methods</Dropdown.Item>
                        <Dropdown.Item href="#/action-2">Bisection serch</Dropdown.Item>
                        <Dropdown.Item href="#/action-3">False Position methods</Dropdown.Item>
                        <Dropdown.Item href="#/action-3">One Point Iteration methods</Dropdown.Item>
                        <Dropdown.Item href="#/action-3">Newton Raphson methods</Dropdown.Item>
                        <Dropdown.Item href="#/action-3">Secant methods</Dropdown.Item>
                    </Dropdown.Menu>
                </Dropdown>
                <Dropdown>
                    <Dropdown.Toggle variant="" className="root">
                        Linear Algebra Equation
                    </Dropdown.Toggle>

                    <Dropdown.Menu>
                        <Dropdown.Item href="#/action-1">Cramer'a rule</Dropdown.Item>
                        <Dropdown.Item href="#/action-2">Guass Elimination</Dropdown.Item>
                        <Dropdown.Item href="#/action-3">Guass Jordan Elimination</Dropdown.Item>
                        <Dropdown.Item href="#/action-3">Metrix Inversion</Dropdown.Item>
                        <Dropdown.Item href="#/action-3">Jacobi Iteration methods</Dropdown.Item>
                        <Dropdown.Item href="#/action-3">Conjugate Gradient methods</Dropdown.Item>
                    </Dropdown.Menu>
                </Dropdown>
                <Dropdown>
                    <Dropdown.Toggle variant="" className="root">
                        Interpolation
                    </Dropdown.Toggle>

                    <Dropdown.Menu>
                        <Dropdown.Item href="#/action-1">Newton Divided Differences</Dropdown.Item>
                        <Dropdown.Item href="#/action-2">Lagrange Interpolation</Dropdown.Item>
                        <Dropdown.Item href="#/action-3">Spline Interpolation</Dropdown.Item>
                    </Dropdown.Menu>
                </Dropdown>
                <Dropdown>
                    <Dropdown.Toggle variant="" className="root">
                        Extrapolation
                    </Dropdown.Toggle>

                    <Dropdown.Menu>
                        <Dropdown.Item href="#/action-1">Simple Regression</Dropdown.Item>
                        <Dropdown.Item href="#/action-2">Mutiple Regression</Dropdown.Item>
                    </Dropdown.Menu>
                </Dropdown>
                <Dropdown>
                    <Dropdown.Toggle variant="" className="root">
                        Integration
                    </Dropdown.Toggle>

                    <Dropdown.Menu>
                        <Dropdown.Item href="#/action-1">Trapezoidal Rule</Dropdown.Item>
                        <Dropdown.Item href="#/action-2">Composite Trapezoidal Rule</Dropdown.Item>
                        <Dropdown.Item href="#/action-3">Simpson Rule</Dropdown.Item>
                        <Dropdown.Item href="#/action-3">Composite Simpson Rule</Dropdown.Item>
                    </Dropdown.Menu>
                </Dropdown>
            </div>
        </div>
    );
}

export default Home;
