#include <stdio.h>
#include <stdlib.h>


// ystring = Yespa's string :)
typedef struct  {
    char* data;
    int length;
}ystring;

void string_duplicate(char*, char*, int);
ystring* init_string(char string[]);
void free_string(ystring*);
void print_string(ystring* str);
char* get_string(ystring*);
int string_length(ystring*);
short int string_compare(ystring*, ystring*);
ystring* string_copy(ystring*);
ystring* string_concatenate(ystring*, ystring*);
