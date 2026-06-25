/*Bibliotecas estandar C*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*Biblioteca ctype.h*/
#include <ctype.h>
/*encabezados*/
#include "wacky_watch_tools.h"

/* >>>> VALIDACIONES CON LETRAS */

void _watch_string_ALL_NORMALCH(char _my_text[50]){
    
    while (1)
    {
        printf(" %s >>>>> ", _local_messages[0]);
        fgets(_my_text,50, stdin);

        _my_text[strcspn(_my_text , "\n")] = '\0';
        
        if ((strlen(_my_text) == 0))
        {
            printf(" %s : El programa no admite espacios en blanco", _local_messages[1]);
            continue;
        }else{
            break;
        }
        
    }

}

void _watch_string_NOTNUMBERS(char _my_text[50]){
    
    char *ptr = NULL;
    int _is_just_verify_number = 0;

    while (1)
    {
        _is_just_verify_number = 0;
        ptr = NULL;

        printf(" %s >>>>> ", _local_messages[0]);
        fgets(_my_text,50, stdin);

        _my_text[strcspn(_my_text , "\n")] = '\0';
        
        if ((strlen(_my_text) == 0))
        {
            printf(" %s : El programa no admite espacios en blanco", _local_messages[1]);
            continue;
        }

        for (int i = 0; _my_text[i] != '\0' ; i++)
        {
            if (isdigit(_my_text[i]))
            {
                _is_just_verify_number = 1;
                break;
            }
            
        }
        
        if (_is_just_verify_number)
        {
            printf(" %s : El programa no admite numeros ", _local_messages[1]);
            continue;
        }
        

        break;
    }
}

/* >>>> VALIDACIONES CON NUMEROS */

int _watch_integers_numbers(){

    char buffer[20];
    int number;
    char *ptr = NULL;

    while(1)
    {
        ptr = NULL;
        printf(" (%s) >>>>> ", _local_messages[0]);
        fgets(buffer, sizeof(buffer), stdin);
        buffer[strcspn(buffer, "\n")] = '\0';

        if (buffer[0] == '\0')
        {
            printf("%s : El programa no admite espacios en blanco\n", _local_messages[1]);
            printf("%s\n", _local_messages[2]);

            continue;
        }

        number = strtol(buffer, &ptr, 10);

        if(ptr == buffer)
        {
            printf("%s : El programa no admite letras\n", _local_messages[1]);
            printf("%s\n", _local_messages[2]);

            continue;

        }else if (*ptr != '\0')
        {
            printf("%s : Recuerda que solo lee numeros enteros\n", _local_messages[1]);
            printf("%s\n", _local_messages[2]);

            continue;

        }else if (number < 0)
        {
            printf("%s : El programa no admite numeros negativos\n", _local_messages[1]);
            printf("%s\n", _local_messages[2]);

            continue;
        }

        
        printf(" %s ", _local_messages[4]);

        break;

    };

    return number;
}

int _watch_integers_numbers_into_range(int max, int min){
    
    char buffer[20];
    int number;
    char *ptr = NULL;

    while(1)
    {
        
        printf(" (%s) >>>>> ", _local_messages[0]);
        fgets(buffer, sizeof(buffer), stdin);
        buffer[strcspn(buffer, "\n")] = '\0';

        if (buffer[0] == '\0')
        {
            printf("%s : El programa no admite espacios en blanco\n", _local_messages[1]);
            printf("%s\n", _local_messages[2]);

            continue;
        }

        number = strtol(buffer, &ptr, 10);

        if(ptr == buffer)
        {
            printf("%s : El programa no admite letras\n", _local_messages[1]);
            printf("%s\n", _local_messages[2]);

            continue;

        }else if (*ptr != '\0')
        {
            printf("%s : Recuerda que solo lee numeros enteros\n", _local_messages[1]);
            printf("%s\n", _local_messages[2]);

            continue;

        }else if (number < min)
        {
            printf("%s : El programa no admite numeros menores a %d \n", _local_messages[1], min);
            printf("%s\n", _local_messages[2]);

            continue;

        }else if (number > max)
        {
            printf("%s : El programa no admite numeros mayores a %d \n", _local_messages[1], max);
            printf("%s\n", _local_messages[2]);

            continue;
        }

        printf(" %s ", _local_messages[3]);

        break;

    };

    return number;
}

float _watch_doubles_numbers(){
    
    char buffer[20];
    float number;
    char *ptr = NULL;

    while(1)
    {
        ptr = NULL;
        printf(" (%s) >>>>> ", _local_messages[0]);
        fgets(buffer, sizeof(buffer), stdin);
        buffer[strcspn(buffer, "\n")] = '\0';

        if (buffer[0] == '\0')
        {
            printf("%s : El programa no admite espacios en blanco\n", _local_messages[1]);
            printf("%s\n", _local_messages[2]);

            continue;
        }

        number = strtof(buffer, &ptr);

        if(ptr == buffer)
        {
            printf("%s : El programa no admite letras\n", _local_messages[1]);
            printf("%s\n", _local_messages[2]);

            continue;

        }else if (number < 0)
        {
            printf("%s : El programa no admite numeros negativos\n", _local_messages[1]);
            printf("%s\n", _local_messages[2]);

            continue;
        }

        
        printf(" %s ", _local_messages[3]);

        break;

    };

    return number;

}

float _watch_doubles_numbers_into_range(float max, float min){
    
    char buffer[20];
    float number;
    char *ptr = NULL;

    while(1)
    {
        ptr = NULL;
        printf(" (%s) >>>>> ", _local_messages[0]);
        fgets(buffer, sizeof(buffer), stdin);
        buffer[strcspn(buffer, "\n")] = '\0';

        if (buffer[0] == '\0')
        {
            printf("%s : El programa no admite espacios en blanco\n", _local_messages[1]);
            printf("%s\n", _local_messages[2]);

            continue;
        }

        number = strtof(buffer, &ptr);

        if(ptr == buffer)
        {
            printf("%s : El programa no admite letras\n", _local_messages[1]);
            printf("%s\n", _local_messages[2]);

            continue;

        }else if (number < min)
        {
            printf("%s : El programa no admite numeros menores a %f \n", _local_messages[1], min);
            printf("%s\n", _local_messages[2]);

            continue;
        }else if (number > max)
        {
            printf("%s : El programa no admite numeros menores a %f \n", _local_messages[1], max);
            printf("%s\n", _local_messages[2]);

            continue;
        }
        
        printf(" %s ", _local_messages[3]);

        break;

    };

    return number;
}