import { IUserDTO } from "../domain/dto/user-dto";
import { IUserService } from "../domain/services/user-service";

export class UserServiceImpl implements IUserService {
    getUserByEmail(email: string): Promise<IUserDTO> {
        
    }

    createOrUpdateUser(user: IUserDTO): Promise<boolean> {
        
    }

    removeUserById(id: string): Promise<boolean> {
        
    }
}
