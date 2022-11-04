import { IUserDTO } from "../dto/user-dto";
import { IUser } from "../models/user";
import { IBaseMapper } from "./base-mapper";

export interface IUserMapper extends IBaseMapper<IUser, IUserDTO> {
    convertToDTO(user: IUser): IUserDTO;
}
