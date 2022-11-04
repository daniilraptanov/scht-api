import { StatusCodes } from "http-status-codes";
import { IBaseModel } from "../domain/models/base-model";

export class BaseModelImpl implements IBaseModel {
    errorObject: {
        status: StatusCodes,
        message: string,
    };

    protected setError(status: StatusCodes, message: string) {
        this.errorObject = {
            status: status, message: message
        };
    }
}
