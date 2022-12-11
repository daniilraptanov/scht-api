import { Router } from "express";
import { UserController } from "../controllers/user-controller";
import { ParamsValidator } from "../middleware/params-validator";
import { loginSchema } from "../schemas/auth-schema";

const router = Router();

router.post(
    "/login",
    ParamsValidator.validateJoiSchema(loginSchema),
    UserController.login
);

module.exports = router;