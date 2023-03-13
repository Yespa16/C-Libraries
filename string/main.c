#include "ystring.h"


int main(void){
    ystring* name = init_string("Yespa\0");
    print_string(name);
    free_string(name);
    return 0;
}