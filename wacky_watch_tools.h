#ifndef wacky_watch_tools
#define wacky_watch_tools

    char _local_messages[3][30] = { "Ingrese su opcion aqui", "|| ERROR ||" , "Ingrese su opcion de nuevo"};

    void _watch_integers_numbers();
    int _watch_integers_numbers_into_range(int max, int min);
    void _watch_doubles_numbers();
    float _watch_doubles_numbers_into_range(float max, float min);
    void _watch_string_ALL_NORMALCHARS();
    void _watch_string_NOTNUMBERS();

#endif