import { Request, Response, NextFunction } from "express";
import { StatusCodes } from "http-status-codes";
import { AnySchema } from "joi";
import { apiSchemasBadRequest } from "../errors/http-errors";

export class ParamsValidator {
    static validateJoiSchema(schema: AnySchema) {
        return function (req: Request, res: Response, next: NextFunction) {
            try {
                const data = req.body;
                const { error } = schema.validate(data);
          
                if (error) {
                  return apiSchemasBadRequest(error, res);
                }
          
                return next();
              } catch (err) {
                console.log(err);
                res.status(StatusCodes.INTERNAL_SERVER_ERROR).send("Server Error");
              }
        }
    }
}