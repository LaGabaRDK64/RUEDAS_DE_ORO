/*Bibliotecas estandar C*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*Biblioteca ctype.h*/
#include <ctype.h>
/*encabezados*/
#include "wacky_watch_tools.h"

void _watch_integers_numbers(int _buffer_size){

    int _number_len = _buffer_size;
    char buffer[20];

    do
    {
        printf(" (%s) >>>>> ", _local_messages[1]);
        fgets(buffer, _number_len, stdin);
        

    } while (buffer < 0);


}