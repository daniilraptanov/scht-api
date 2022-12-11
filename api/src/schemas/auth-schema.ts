const Joi = require("joi");

export const loginSchema = Joi.object({
    chatName: Joi.string().max(30).required()
});
