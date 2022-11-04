import { Request, Response } from "express";
import { StatusCodes } from "http-status-codes";
import { ILogin, IUser } from "../domain/models/user";


export class UserController {
    static async login(req: Request, res: Response) {
        try {
            const userMapper = new UserMapperImpl();

            const user: IUser = userMapper.createModel(req.body);
            const result: ILogin = await user.loginUser();
            if (result.user.errorObject) {
                return res.status(result.user.errorObject.status).send(result.user.errorObject.message);
            } 

            res.status(StatusCodes.OK).json({
                token: result.token,
                user: userMapper.convertToLoginDTO(result.user)
            });
        } catch (err) {
            console.log(err);
            res.status(StatusCodes.INTERNAL_SERVER_ERROR);
        }
    }

    static async register(req: Request, res: Response) {
        try {
            
        } catch (err) {
            console.log(err);
            res.status(StatusCodes.INTERNAL_SERVER_ERROR);
        }
    }
}
