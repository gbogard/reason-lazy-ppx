open Migrate_parsetree;
open Ast_406;
open Ast_mapper;

let mapper = (_, _) => default_mapper;

Driver.register(~name="lazy", Versions.ocaml_406, mapper);
