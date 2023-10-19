import './App.css';
import AppHeader from './Components/AppHeader';
import Item from './Components/Item';
import Post from './Components/Post';
import pics from './Data/pics';
import React, { useState } from 'react';

function App() {
  const [selected,setSelected] = useState(pics[1]); 
  /* text = ข้อมูลที่สามารถนำไปใช้ต่อในApp setText = setข้อมูลใหม่ให้text */

  /* input */
  const textInput = <input type="text"/>

  /* button */
  // const okButton = 
  // (
  // <button>
  //   OK
  // </button>
  // );
  const Elements = pics.map((pics,index) => 
  {
    return <Item key={index} name={pics} />
  }
  )
  let post = null;
  if(!!selected) /* if null = false ถ้าไม่null = true จะเข้าเงื่อนไข */
  {
    post = <Post />
  }
  return (
    <div className="App">
      <AppHeader /> {/*component ใส่function ในรูปแบบของ <บลาๆๆๆๆ /> ได้*/}
      
      <div className="app-grid">
        {Elements}
      </div>
      <Post />
    </div>
  );
}

export default App;
