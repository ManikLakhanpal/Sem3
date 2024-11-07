import { YuseContext } from "../context/Context";

function InputField() {
    const { name, setName } = YuseContext();
    return (
        <>
            <h1>Enter</h1>
            <input 
                type="text" 
                placeholder="Enter the name"
                name={name} // ! ~Lol
                onChange={(e) => setName(e.target.value)}
            />
        </>
    );
}

export default InputField;
