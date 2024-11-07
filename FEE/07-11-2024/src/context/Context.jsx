import { createContext, useContext, useState } from "react";

const appContext = createContext();

function Context({children}) {
    const [name, setName] = useState("Donald Trump 🇺🇸");
    return (
        <appContext.Provider value={{name, setName}}>
            {children}
        </appContext.Provider>
    );
}

function YuseContext() {
    const context = useContext(appContext);

    return context
}

export {Context, YuseContext};