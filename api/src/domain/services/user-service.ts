import { IUserDTO } from "../dto/user-dto";

export interface IUserService {
    getUserByEmail(email: string): Promise<IUserDTO>;
    createOrUpdateUser(user: IUserDTO): Promise<boolean>;
    removeUserById(id: string): Promise<boolean>;
}
