import './Post.css';

function Post(props) {
    const { tt } = props;

    // Check if tt is defined before accessing its properties
    if (!tt) {
        return <div className="post">Invalid Post</div>;
    }

    return (
        <div className="post">
            <div className="post-bg" />
            <div className="post-content">
                <img src={tt.thumbnailUrl} />
                <h4>{tt.title}</h4>
            </div>
        </div>
    );
}

export default Post;
