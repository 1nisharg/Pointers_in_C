// A variable that stores the memory address of another pointer

/*
Syntax:- 

int **pptr;
char **pptr;
float **pptr;
*/

# include <stdio.h>

int main() {
    // float price = 100.00;
   // float *ptr = &price;
   // float **pptr = &ptr;

 //Que: Print the value of 'i' from its pointer to pointer
    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;
    printf("**pptr = %d \n", **pptr);
}



