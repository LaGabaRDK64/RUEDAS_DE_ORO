#ifndef cars_default
#define cars_default

typedef struct Cars_OG
{
    int _ID_Only_Number;
    int _is_sold_or_not;
    char _brand[50];
    char _pattern[50];
    int _year;
    char type[30];
    float price;
    
}Cars_OG;

void register_vehicle();
void list_vehicle();
void find_vehicle();
void modyfing_car();
void eliminate_car_list();

#endif 