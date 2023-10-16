import './App.css';
import AppHeader from './Components/AppHeader';
import Item from './Components/Item';
import Post from './Components/Post';
function App() {
  const textInput = <input type="text"/>
  const okButton = 
  (
  <button>
    OK
  </button>
  );
  return (
    <div className="App">
      <AppHeader /> {/*component ใส่function ในรูปแบบของ <บลาๆๆๆๆ /> ได้*/}
      <div className="app-grid">
        <Item title="BMO" thumbnalUrl="/image/bmo.jpeg" />
        <Item title="RABBIT" thumbnalUrl="/image/katai.png" />
        <Item title="KUROMI" thumbnalUrl="/image/kuromi.png" />
        <Item title="BOOOOOOO~" thumbnalUrl="/image/phee.png" />
{/*         
        <div className="item">
          <img src="/image/katai.png" width="200px" />
          <h4>RABBIT</h4>
        </div>
        <div className="item">
          <img src="/image/kuromi.png" width="200px"/>
          <h4>KUROMI</h4>
        </div>
        <div className="item">
          <img src="/image/phee.png" width="200px"/>
          <h4>BOOOOOO~</h4>
        </div> */}
        {/* <Post /> */}
        
      </div>
    </div>
  );
}

export default App;
