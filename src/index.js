import dotenv from "dotenv"
import connectDB from "./db/index.js"
import { app } from "./app.js";

dotenv.config({
    path: './env'
})
var PORT = process.env.PORT;

connectDB()
.then(() => {
    app.listen(PORT || 8000, () =>{
        console.log(`Server is running at : ${PORT}`)
    })
})
.catch((err) => {
    console.log("MONGODB connection failed !!!", err);
})
