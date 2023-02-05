# C-Libraries

I tried to implement C libraries myself. It helps to understand how they work.
And you can customize everything for your needs.
<br/>

Everything is named with prefix "y", that stands for Yespa :)
In PDF files are my handwritten notes for the project


### String:
string.h library implementation


* The main datatype is ystring. It has two fields in it: a) data - the main string, b) the length of the string (don't forget about '\0')

###### Functions: 
    init_string, free_string, print_string, string_length, string_compare, string_copy, string_concatenate

* string_compare:
    Pass two strings to compare. The function returns 1 if first string is greater, -1 if second one is greater, and 0 if the strings are equal
    Runtime complexity will be O(1) in most cases

* string_copy: 
    Pass a string and the function will return the copy of it

Note that there are other functions in the code but they are not purposed to be used outside of the file.
