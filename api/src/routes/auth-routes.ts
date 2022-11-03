import { Router } from "express";
import { UserController } from "../controllers/user-controller";
import { ParamsValidator } from "../middleware/params-validator";
import { loginSchema, registerSchema } from "../schemas/auth-schema";

const router = Router();

router.post(
    "/login",
    ParamsValidator.validateJoiSchema(loginSchema),
    UserController.login
);

router.post(
    "/register",
    ParamsValidator.validateJoiSchema(registerSchema),
    UserController.register
);

module.exports = router;