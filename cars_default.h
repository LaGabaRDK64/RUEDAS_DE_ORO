#ifndef cars_default
#define cars_default

typedef struct Cars_OG
{
    int _ID_Only_Number;
    int _is_sold_or_not; /* 0 = NO VENDIDO | 1 = SI VENDIDO */
    char _brand[50];
    char _model[50];
    int _year;
    int _kilometers;
    char _type[30];
    float _price;
    
}Cars_OG;

void register_vehicle(int pos);
int list_vehicle();
void find_vehicle();
void modyfing_car();
void eliminate_car_list();

#endif 