/*
Call by value - We pass value of variable as arrgument.

Call by reference - We pass address of variable as argument. 
*/


# include <stdio.h>

void square(int n);
void _square(int* n); //pointer including... we are giving address of any variable.
int main(){
    int number=4;
    square(number);
    printf("number = %d \n", number);

    _square(&number);
    printf("number = %d \n", number);
    return 0;
    
}

//Call by value
void square(int n) {
    n = n*n;
    printf("%d \n", n);
}


void _square(int* n) {
      *n = (*n)*(*n); // 4X4=16
    printf("%d \n", *n);
}