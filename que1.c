# include <stdio.h>

int main() {
int x;
int *ptr;

ptr = &x;
*ptr = 0;

*ptr += 5; // x = x+5, adding 5 to value of x and storing it back to the same x.   

printf("the value of x is : %d \n", x); // 0
printf("the value of *ptr : %d \n", *ptr); // 0 

printf("x = %d \n", x); //5
printf("*ptr = %d\n", *ptr); //5 

(*ptr)++; // *ptr is 5 so adding 1 to it.. so, 6
printf("x = %d \n", x);
printf("*ptr = %d \n", *ptr);

return 0;
}