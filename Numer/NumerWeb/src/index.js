import React from 'react';
import ReactDOM from 'react-dom/client';
import './index.css';
import App from './App';
import reportWebVitals from './reportWebVitals';
import 'bootstrap/dist/css/bootstrap.min.css';
import Graphical from './pages/Root/Graphical methods/Graphical';
import Bisection from './pages/Root/Bisection search/Bisection';
import FalsePosition from './pages/Root/False position methods/FalsePosition';
import OnePoint from './pages/Root/One point iteration methods/OnePoint';
import Newton from './pages/Root/Newton raphson methods/Newton';
import Secant from './pages/Root/Secant methods/Secant';
import {
  createBrowserRouter,
  RouterProvider,
} from "react-router-dom";
import Cramer from './pages/Linear/Cramer\'s rule/Cramer';
import GuassEli from './pages/Linear/Guass elimination/GuassEli';
import GuassJordan from './pages/Linear/Guass jordan/GuassJordan';
import Inversion from './pages/Linear/Metrix inversion/Inversion';
import Jacobi from './pages/Linear/Jacobi iteration methods/Jacobi';
import Conjugate from './pages/Linear/Conjugate gradient methods/Conjugate';
const router = createBrowserRouter([
  {
    path: "/",
    element: <App/>,
  },
  {
    path: "Graphical",
    element: <Graphical/>,
  },
  {
    path: "Bisection",
    element: <Bisection/>,
  },
  {
    path: "FalsePosition",
    element: <FalsePosition/>,
  },
  {
    path: "OnePoint",
    element: <OnePoint/>,
  },
  {
    path: "Newton",
    element: <Newton/>,
  },
  {
    path: "Secant",
    element: <Secant/>,
  },
  {
    path: "Cramer",
    element: <Cramer/>,
  },
  {
    path: "GuassEli",
    element: <GuassEli/>,
  },
  {
    path: "GuassJordan",
    element: <GuassJordan/>,
  },
  {
    path: "Inversion",
    element: <Inversion/>,
  },
  {
    path: "Jacobi",
    element: <Jacobi/>,
  },
  {
    path: "Conjugate",
    element: <Conjugate/>,
  },
]);
const root = ReactDOM.createRoot(document.getElementById('root'));
root.render(
  <RouterProvider router={router} />
  // <React.StrictMode>
  //   <App />
  // </React.StrictMode>
);

// If you want to start measuring performance in your app, pass a function
// to log results (for example: reportWebVitals(console.log))
// or send to an analytics endpoint. Learn more: https://bit.ly/CRA-vitals
reportWebVitals();
