import './Item.css';

function Item(props)
{
  const{name}=props;
    return(
        <div className="item">
          <img src={name.thumbnalUrl}/>
          <h4>{name.title}</h4>
        </div>
    );
}
export default Item;