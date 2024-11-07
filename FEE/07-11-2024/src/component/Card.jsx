import { YuseContext } from "../context/Context";

function Card(params) {
    const {name, setName} = YuseContext();
    return (
        <h1>{name}</h1>
    );
}

export default Card;