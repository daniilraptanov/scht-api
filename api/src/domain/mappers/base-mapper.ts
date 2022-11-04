export interface IBaseMapper<Model, DTO> {
    createModel(dto: DTO): Model;
}
