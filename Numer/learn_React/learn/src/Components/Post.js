import './Post.css';
function Post(props)
{
    const{tt} = props;
    return(
        <div className="post">
            <div className="post-bg" />
            <div className="post-content">
                <img src={tt.thumbnalUrl} />
                <h4>{tt.title}</h4>
            </div>
        </div>
    );
}
export default Post;