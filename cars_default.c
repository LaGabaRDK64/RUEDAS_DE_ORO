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

    _is_car_default._ID_Only_Number = list_vehicle();
    printf("||| Ingrese la marca del carro con ID %d |||\n", _is_car_default._ID_Only_Number);
    _watch_string_NOTNUMBERS(_is_car_default._brand);
    printf("||| Ingrese el modelo del carro con ID %d |||\n",  _is_car_default._ID_Only_Number);
    _watch_string_ALL_NORMALCHARS(_is_car_default._model);
    printf("||| Ingrese el año del carro con ID %d |||\n",  _is_car_default._ID_Only_Number);
    _is_car_default._year = _watch_integers_numbers_into_range(2026,1900);
    printf("||| Ingrese el precio del carro con ID %d |||\n",  _is_car_default._ID_Only_Number);
    _is_car_default._price = _watch_doubles_numbers();
    _is_car_default._is_sold_or_not = 0;

    FILE *CARS_DATA;

    CARS_DATA = fopen("DATA_BIN/cars_tab.dat", "ab");

    if (CARS_DATA == NULL)
    {
        printf(" %s : No se pudo abrir el archivo ", _local_messages[1]);
        return;
    }

    fwrite(&_is_car_default, sizeof(Cars_OG), 1, CARS_DATA);

    fclose(CARS_DATA);

    printf("\n| | | DATOS REGISTRADOS CORRECTAMENTE | | |\n");  
    printf("Presione Enter para continuar");
    getchar();

}

void find_vehicle(){

    FILE *CARS_DATA;

    Cars_OG Cars_list_default;

    int ID_SEARCH;
    int Found = 0;

}

int list_vehicle(){ 

    FILE *CARS_DATA;
    Cars_OG Cars_list_default;

    int _is_zero = 0;

    CARS_DATA = fopen("DATA_BIN/cars_tab.dat", "rb");

    if (CARS_DATA == NULL)
    {
        return 1;
    }
    while (fread(&Cars_list_default, sizeof(Cars_OG), 1, CARS_DATA))
    {
        if (Cars_list_default._ID_Only_Number > _is_zero )
        {
            _is_zero = Cars_list_default._ID_Only_Number;
        }
        
    }
    
    fclose(CARS_DATA);

    return _is_zero + 1;

}

void find_vehicle()
{

    FILE *CARS_DATA;
    Cars_OG vehicle;

    int id_search;
    int found = 0;

    printf("\nIngrese ID del vehículo:\n");

    id_search =
    _watch_integers_numbers_into_range(999999,1);
    CARS_DATA =
    fopen("DATA_BIN/cars_tab.dat","rb");

    if(CARS_DATA == NULL)
    {
        printf("Archivo inexistente\n");
        return;
    }

    while(fread(&vehicle,sizeof(Cars_OG),1,CARS_DATA))
    {
        if(vehicle._ID_Only_Number == id_search)
        {
            printf("\nVehículo encontrado\n");
            printf("Marca: %s\n",
            vehicle._brand);
            printf("Modelo: %s\n",
            vehicle._model);
            printf("Precio: %.2f\n",
            vehicle._price);

            found = 1;

            break;

        }


    }

    fclose(CARS_DATA);



    if(found == 0)

        printf("No existe ese vehículo\n");


}

void modyfing_car()
{

    FILE *CARS_DATA;
    Cars_OG _is_car_default;

    int id_modify;
    int found = 0;

    printf("\nIngrese ID del vehículo a modificar:\n");
    id_modify = _watch_integers_numbers_into_range(999999,1);
    CARS_DATA = fopen("DATA_BIN/cars_tab.dat","rb+");

    if(CARS_DATA == NULL)
    {
        printf(" %s : Archivo no encontrado \n", _local_messages[1]);
        return;
    }

    while(fread(&_is_car_default,sizeof(Cars_OG),1,CARS_DATA))
    {
        if(_is_car_default._ID_Only_Number == id_modify)
        {
            _is_car_default._ID_Only_Number = list_vehicle();
            printf("||| Ingrese la marca del carro con ID %d |||\n", _is_car_default._ID_Only_Number);
            _watch_string_NOTNUMBERS(_is_car_default._brand);
            printf("||| Ingrese el modelo del carro con ID %d |||\n",  _is_car_default._ID_Only_Number);
            _watch_string_ALL_NORMALCHARS(_is_car_default._model);
            printf("||| Ingrese el año del carro con ID %d |||\n",  _is_car_default._ID_Only_Number);
            _is_car_default._year = _watch_integers_numbers_into_range(2026,1900);
            printf("||| Ingrese el precio del carro con ID %d |||\n",  _is_car_default._ID_Only_Number);
            _is_car_default._price = _watch_doubles_numbers();
            _is_car_default._is_sold_or_not = 0;

            fseek(CARS_DATA,-sizeof(Cars_OG),SEEK_CUR);
            fwrite(&_is_car_default,sizeof(Cars_OG),1,CARS_DATA);
            found = 1;

            break;

        }

    }
    fclose(CARS_DATA);

    if(found){
        printf("Vehículo actualizado\n");
    }else{
        printf("Vehículo no encontrado\n");
    }
}

void eliminate_car_list()
{

    FILE *old_file;
    FILE *new_file;
    Cars_OG vehicle;
    int id_delete;
    int deleted = 0;
    printf("\nID del vehículo a eliminar:\n");
    id_delete =_watch_integers_numbers_into_range(999999,1);
    old_file = fopen("DATA_BIN/cars_tab.dat","rb");
    new_file = fopen("DATA_BIN/temp.dat","wb");

    if(old_file == NULL)
    {
        printf("No existe archivo\n");
        return;
    }

    while(fread(&vehicle,sizeof(Cars_OG),1,old_file))
    {
        if(vehicle._ID_Only_Number == id_delete)
        {
            deleted = 1;
            continue;
        }

        fwrite(&vehicle,sizeof(Cars_OG),1,new_file);
    }

    fclose(old_file);
    fclose(new_file);

    remove("DATA_BIN/cars_tab.dat");
    rename("DATA_BIN/temp.dat","DATA_BIN/cars_tab.dat");

    if(deleted){

        printf("Vehículo eliminado correctamente\n");

    }else{

        printf("No se encontró vehículo\n");
    }
}