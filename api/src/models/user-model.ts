import { Response } from "express";
import { StatusCodes } from "http-status-codes";
import { ILogin, IUser } from "../domain/models/user";
import { IAuthService } from "../domain/services/auth-service";
import { IUserService } from "../domain/services/user-service";
import { BaseModelImpl } from "./base-model";

export class UserModelImpl extends BaseModelImpl implements IUser {
    id: string;
    last_entry: Date;
    
    email: string;
    password: string;
    login: string;

    private authService: IAuthService;
    private userService: IUserService;

    protected constructor(authServiceImpl: IAuthService, userServiceImpl: IUserService) {
        super();

        this.authService = authServiceImpl;
        this.userService = userServiceImpl;
    }

    async loginUser(): Promise<ILogin> {
        const dto = await this.userService.getUserByEmail(this.email);
        if (!dto) {
            this.setError(StatusCodes.BAD_REQUEST, "User does not exist");
        }
    
        const isCorrectPassword = await this.authService.checkPasswordHash(this.email, this.password);
        if (!isCorrectPassword) {
            this.setError(StatusCodes.BAD_REQUEST, "Password does not correct");
        }

        const token = this.authService.createToken(this.id);
    
        if (!token) {
            this.setError(StatusCodes.INTERNAL_SERVER_ERROR, "Token does not created");
        }
    
        return { 
            token: token,
            user: this
        };
    }
}
