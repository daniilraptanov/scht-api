import { IUserDTO } from "../dto/user-dto";
import { IBaseModel } from "./base-model";

export interface IUser extends IBaseModel, IUserDTO {
    loginUser(): Promise<boolean>;
}
