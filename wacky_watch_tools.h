#ifndef wacky_watch_tools
#define wacky_watch_tools

    char _local_messages[3][60] = { "Ingrese su opcion aqui", "|| ERROR ||" , "Ingrese nuevamente la opcion acorde al mensaje en pantalla"};

    void _watch_integers_numbers(int _buffer_size);
    int _watch_integers_numbers_into_range(int _buffer_size, int max, int min);
    void _watch_doubles_numbers(int _buffer_size);
    float _watch_doubles_numbers_into_range(int _buffer_size, float max, float min);
    void _watch_string_ALL_NORMALCHARS(int _buffer_size);
    void _watch_string_NOTNUMBERS(int _buffer_size);

#endif