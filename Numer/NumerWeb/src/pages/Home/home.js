import Nav from "../../components/navbar";
import './home.css';
import Dropdown from 'react-bootstrap/Dropdown';
function Home() {
    return (
        <div className="Home">
            <Nav />
            <div className="box">
                <Dropdown>
                    <Dropdown.Toggle  variant="" className="method">
                        Root Of Equation
                    </Dropdown.Toggle>

                    <Dropdown.Menu>
                        <Dropdown.Item href="/Graphical">Graphical methods</Dropdown.Item>
                        <Dropdown.Item href="/Bisection">Bisection search</Dropdown.Item>
                        <Dropdown.Item href="/FalsePosition">False Position methods</Dropdown.Item>
                        <Dropdown.Item href="/OnePoint">One Point Iteration methods</Dropdown.Item>
                        <Dropdown.Item href="/Newton">Newton Raphson methods</Dropdown.Item>
                        <Dropdown.Item href="/Secant">Secant methods</Dropdown.Item>
                    </Dropdown.Menu>
                </Dropdown>
                <Dropdown>
                    <Dropdown.Toggle variant="" className="method">
                        Linear Algebra Equation
                    </Dropdown.Toggle>

                    <Dropdown.Menu>
                        <Dropdown.Item href="/Cramer">Cramer'a rule</Dropdown.Item>
                        <Dropdown.Item href="/GuassEli">Guass Elimination</Dropdown.Item>
                        <Dropdown.Item href="/GuassJordan">Guass Jordan Elimination</Dropdown.Item>
                        <Dropdown.Item href="/Inversion">Metrix Inversion</Dropdown.Item>
                        <Dropdown.Item href="/Jacobi">Jacobi Iteration methods</Dropdown.Item>
                        <Dropdown.Item href="/Conjugate">Conjugate Gradient methods</Dropdown.Item>
                    </Dropdown.Menu>
                </Dropdown>
                <Dropdown>
                    <Dropdown.Toggle variant="" className="method">
                        Interpolation
                    </Dropdown.Toggle>

                    <Dropdown.Menu>
                        <Dropdown.Item href="/NewtonDi">Newton Divided Differences</Dropdown.Item>
                        <Dropdown.Item href="/Lagrange">Lagrange Interpolation</Dropdown.Item>
                        <Dropdown.Item href="/Spline">Spline Interpolation</Dropdown.Item>
                    </Dropdown.Menu>
                </Dropdown>
                <Dropdown>
                    <Dropdown.Toggle variant="" className="method">
                        Extrapolation
                    </Dropdown.Toggle>

                    <Dropdown.Menu>
                        <Dropdown.Item href="/Simple">Simple Regression</Dropdown.Item>
                        <Dropdown.Item href="/Multiple">Mutiple Regression</Dropdown.Item>
                    </Dropdown.Menu>
                </Dropdown>
                <Dropdown>
                    <Dropdown.Toggle variant="" className="method">
                        Integration
                    </Dropdown.Toggle>

                    <Dropdown.Menu>
                        <Dropdown.Item href="/Trapezoidal">Trapezoidal Rule</Dropdown.Item>
                        <Dropdown.Item href="/ComTrape">Composite Trapezoidal Rule</Dropdown.Item>
                        <Dropdown.Item href="/Simpson">Simpson Rule</Dropdown.Item>
                        <Dropdown.Item href="/ComSim">Composite Simpson Rule</Dropdown.Item>
                    </Dropdown.Menu>
                </Dropdown>
                <Dropdown>
                    <Dropdown.Toggle variant="" className="method">
                        Differentiation
                    </Dropdown.Toggle>

                    <Dropdown.Menu>
                        <Dropdown.Item href="/">Trapezoidal Rule</Dropdown.Item>
                        <Dropdown.Item href="/">Composite Trapezoidal Rule</Dropdown.Item>
                        <Dropdown.Item href="/">Simpson Rule</Dropdown.Item>
                        <Dropdown.Item href="/">Composite Simpson Rule</Dropdown.Item>
                    </Dropdown.Menu>
                </Dropdown>
            </div>
        </div>
    );
}

export default Home;
