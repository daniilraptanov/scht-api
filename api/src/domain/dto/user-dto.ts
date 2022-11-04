export interface IRegisterDTO {
    email: string;
    login: string;
    password?: string;
}

export interface IUserDTO extends IRegisterDTO {
    id: string;
    last_entry: Date;
}
