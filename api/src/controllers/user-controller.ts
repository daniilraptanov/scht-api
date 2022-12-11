import { Request, Response } from "express";
import { StatusCodes } from "http-status-codes";
import { IUserDTO } from "../domain/dto/user-dto";
import { UserModelImpl } from "../models/user-model";
import { UserServiceImpl } from "../services/user-service";


export class UserController {
    static async login(req: Request, res: Response) {
        try {
            const data: IUserDTO = req.body;
            const user = new UserModelImpl(UserServiceImpl);
            user.assignData(data);

            const result = await user.loginUser();
            if (!result) {
                return res.status(user.errorObject.status).send(user.errorObject.message);
            }

            res.status(StatusCodes.OK).json({
                status: result
            });
        } catch (err) {
            console.log(err);
            res.status(StatusCodes.INTERNAL_SERVER_ERROR);
        }
    }
}
