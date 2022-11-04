import { StatusCodes } from "http-status-codes"

export interface IBaseModel {
    readonly errorObject: {
        status: StatusCodes,
        message: string,
    }
}
