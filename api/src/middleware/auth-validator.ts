import { Request, Response, NextFunction } from "express";
import { StatusCodes } from "http-status-codes";
import { apiSchemasBadRequest } from "../errors/http-errors";


const jwt = require("jsonwebtoken");
require("dotenv-safe").config();


export class AuthValidator {
  static async auth(req: Request, res: Response, next: NextFunction) {
    if (req.method === "OPTIONS") {
      return next();
    }

    try {
      const token = req.headers.authorization.split(" ")[1];
      if (!token) {
        return res.status(StatusCodes.UNAUTHORIZED).send("Authorization Error");
      }

      req.body.id = jwt.verify(token, process.env.JWT_SECRET_KEY).id;
      next();
    } catch {
      return res.status(StatusCodes.UNAUTHORIZED).send("Authorization Error");
    }
  }
}
