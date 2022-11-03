import { IUser } from "../models/user";

export interface IUserService {
    getUserByEmail(email: string): Promise<IUser>;
    createOrUpdateUser(user: IUser): Promise<boolean>;
    removeUserById(id: string): Promise<boolean>;
}
