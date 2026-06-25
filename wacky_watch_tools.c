/*Bibliotecas estandar C*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*Biblioteca ctype.h*/
#include <ctype.h>
/*encabezados*/
#include "wacky_watch_tools.h"

void _watch_integers_numbers(){

    char buffer[20];
    int number;
    char *ptr = NULL;

    do
    {
        
        printf(" (%s) >>>>> ", _local_messages[0]);
        fgets(buffer, sizeof(buffer), stdin);

        if (buffer[0] == '\0' || buffer[0] == '\n')
        {
            printf("%s : El programa no admite espacios en blanco\n", _local_messages[1]);
            printf("%s", _local_messages[2]);

            continue;
        }

        number = strtol(buffer, &ptr, 10);

        if(ptr == NULL)
        {
            printf("%s : El programa no admite letras\n", _local_messages[1]);
            printf("%s", _local_messages[2]);
            continue;
            
        }else if (*ptr != '\0' || *ptr != '\0')
        {
            printf("%s : Recuerda que solo lee numeros enteros\n", _local_messages[1]);
            printf("%s", _local_messages[2]);

        }

        


        


    } while (buffer < 0);


}