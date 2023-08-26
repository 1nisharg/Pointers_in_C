/* A variable that stores the memory address of another variable.

In pointers, '*' is value of address operator.

Syntax:-
int age = 22;
int *ptr = &age;
int _age = *ptr;


Declaring Pointers:
(1)int *ptr;
(2)char *ptr;
(3)float *ptr;


Format Specifiers:
(1) printf("%p", &age);
(2) printf("%p", ptr); --> this will print pointer
(3) printf("%p", &ptr); --> this will print pointer's address
%p --> hexadecimal value(pointer address), %u --> unsigned integer
*/ 

# include <stdio.h>

int main(){
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;
    printf("the value of _age is: %d", _age);

    //address
    printf("%p", &age);
    printf("%u", &age);


    printf("%u", ptr);
    printf("%u", &ptr);


    //value
    printf("%d\n", *ptr);
    printf("%d\n", *(&age));  //&age is address of age and * is value of that adress which is 22.
     
    return 0;
}



