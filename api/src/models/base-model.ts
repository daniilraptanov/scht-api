import { StatusCodes } from "http-status-codes";
import { IBaseModel } from "../domain/models/base-model";

export class BaseModelImpl<DTO> implements IBaseModel {
    errorObject: {
        status: StatusCodes,
        message: string,
    };

    protected setError(status: StatusCodes, message: string) {
        this.errorObject = {
            status: status, message: message
        };
    }

    assignData(dto: DTO): void {
        Object.assign(this, dto);
    }
}
