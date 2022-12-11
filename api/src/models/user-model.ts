import { IUserDTO } from "../domain/dto/user-dto";
import { IUser } from "../domain/models/user";
import { IUserService } from "../domain/services/user-service";
import { BaseModelImpl } from "./base-model";

export class UserModelImpl extends BaseModelImpl<IUserDTO> implements IUser {
    id: string;
    chatName: string;

    private userService: IUserService;

    constructor(userServiceImpl: IUserService) {
        super();
        this.userService = userServiceImpl;
    }

    async loginUser(): Promise<boolean> {
        
    }
}
