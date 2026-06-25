#ifndef wacky_watch_tools
#define wacky_watch_tools

    char _local_messages[4][60] = { 
                                "Ingrese su opcion aqui", 
                                "|| ERROR ||" , 
                                "Ingrese nuevamente la opcion acorde al mensaje en pantalla", 
                                "Presione ENTER para continuar"};

    int _watch_integers_numbers();
    int _watch_integers_numbers_into_range(int max, int min);
    float _watch_doubles_numbers();
    float _watch_doubles_numbers_into_range(float max, float min);
    void _watch_string_ALL_NORMALCHARS(char _your_text[50]);
    void _watch_string_NOTNUMBERS(char _your_text[50]);

#endif