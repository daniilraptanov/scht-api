export interface IRegisterDTO {
    email: string;
    password: string;
    login: string;
}

export interface IUserDTO extends IRegisterDTO {
    id: string;
    last_entry: Date;
}
