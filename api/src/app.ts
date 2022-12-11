import express from "express";
import { AuthValidator } from "./middleware/auth-validator";

const cors = require("cors");
require('dotenv-safe').config();

const port = process.env.PORT;

const app = express();

app.use(cors());
app.use(express.json());

app.use(AuthValidator.auth);
app.use("/api/v1", require("./routes/auth-routes"));


app.listen(port, async () => {
    try {
        return console.log(`Server is listening on ${port}`);
    } catch (err) {
        console.log(err);
        return console.error(`Server error (on ${port})`);
    }
});
