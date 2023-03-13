#include <stdio.h>
#include <stdlib.h>
#include "ystring.h"



// Get length of a string (char *)
int len(char str[]){
    int i = 0;
    char c = str[0];
    while(c!='\0') {
        i++;
        c = str[i];
    }
    return i;
}

void string_duplicate(char* source, char* destination, int size) {
    for (int i=0;i<size;i++) {
        destination[i] = source[i];
    }
}


// Allocate memory for ystring
ystring* create_string(int size) {
    ystring* str = (ystring *)malloc(sizeof(ystring));
    
    if (str!=NULL){
        str->length = size;
        str->data = (char *)malloc(size*sizeof(char));

    }

    return str;
}


// Initialize string with data
ystring* init_string(char string[]) {
    int length = len(string);
    ystring* str = create_string(length);

    string_duplicate(string, str->data, length);
    return str;
}


// Function to free ystring (because it uses dynamic memory)
void free_string(ystring* str) {
    free(str->data);
    free(str);
}


// Print function for ystring datatype
void print_string(ystring* str){ 
    int length = str->length;
    for(int i=0;i<length;i++) {
        printf("%c", str->data[i]);
    }
}

// In case you want to work with default (char *) datatype
char* get_string(ystring* str) {
    return str->data;
}


// Just for the API :)
int string_length(ystring* str) { 
    return str->length;
}


// Compare two strings
short int string_compare(ystring* str1, ystring* str2){ 
    if (str1->length > str2->length)
        return 1;
    else if (str1->length < str2->length)
        return -1;
    else {
        for (int i=0;i<str1->length; i++) {
            if (str1->data[i] > str2->data[i])
                return 1;
            if (str1->data[i] < str2->data[i])
                return -1;
        }
    }
    return 0;
}


ystring* string_copy(ystring* str) {
    ystring* copy = create_string(str->length);
    copy->length = str->length;
    
    string_duplicate(str->data, copy->data, str->length);

    return copy;
}


ystring* string_concatenate(ystring* left, ystring* right){ 
    int l_length = left->length;
    int r_length = right->length;
    int length = l_length + r_length;
    ystring* result = create_string(length);
    string_duplicate(left->data, result->data, l_length);
    string_duplicate(right->data, result->data + l_length, r_length); // using pointers' arithmetic

    return result;
}

