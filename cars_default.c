/*Bibliotecas estandar C*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*Biblioteca ctype.h*/
#include <ctype.h>
/*encabezados*/
#include "cars_default.h"
#include "wacky_watch_tools.h"

void register_vehicle(int pos){
    Cars_OG _is_car_default;

    printf("\nOPCION SELECIONADA: Agregar Auto al inventario\n\n");

    printf("||| Ingrese el ID del carro que desea ingresar (RECOMENDACION: Solo un numero pequeño) |||\n");
    _is_car_default._ID_Only_Number = _watch_integers_numbers();
    
    printf("||| Ingrese la marca del carro que desea ingresar |||\n");
    _watch_string_NOTNUMBERS(_is_car_default._brand);
    printf("||| Ingrese la marca del carro que desea ingresar |||\n");


}
