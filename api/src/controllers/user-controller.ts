import { Request, Response, NextFunction } from "express";
import { StatusCodes } from "http-status-codes";

export class UserController {
    static async login(req: Request, res: Response) {
        try {

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
