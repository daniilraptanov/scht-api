import { IUserDTO } from "../dto/user-dto";
import { IBaseModel } from "./base-model";

export interface ILogin {
    token: string;
    user: IUser;
}

export interface IUser extends IBaseModel, IUserDTO {
    loginUser(): Promise<ILogin>;
}
