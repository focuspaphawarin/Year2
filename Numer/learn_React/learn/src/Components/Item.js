import './Item.css';

function Item(props)
{
  const{title,thumbnaiUrl}=props;
    return(
        <div className="item">
          <img src={thumbnaiUrl}/>
          <h4>{title}</h4>
        </div>
    );
}
export default Item;