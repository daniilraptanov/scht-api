import { IUserDTO } from "../domain/dto/user-dto";
import { IUserMapper } from "../domain/mappers/user-mapper";
import { IUser } from "../domain/models/user";
import { UserModelImpl } from "../models/user-model";
import { AuthServiceImpl } from "../services/auth-service";
import { UserServiceImpl } from "../services/user-service";


export class UserMapperImpl implements IUserMapper {
    createModel(dto: IUserDTO): IUser {
        const entity = new UserModelImpl(
            new AuthServiceImpl(), 
            new UserServiceImpl(),
        );
        entity.assignData(dto);

        return entity;
    }

    convertToDTO(user: IUser): IUserDTO {
        return {
            id: user.id,
            last_entry: user.last_entry,
            email: user.email,
            login: user.login,
        }
    }
}
