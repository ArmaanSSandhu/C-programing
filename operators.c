#include <stdio.h>

int main(){
    int a = 20;
    int b = 10;
    int sum = a + b;
    int difference = a - b;
    int multiply = a*b;
    int divide = a/b;
    printf("a is %d \n", a);
    printf("b is %d \n", b);
    printf("The sum is %d \n", sum);
    printf("the difference is %d \n", difference);
    printf("The product is %d \n", multiply);
    printf("The division is %d \n", divide);
    printf("------------switching variables-------------\n");
    a = a +b;
    b = a - b;
    a = a - b;
    printf("a is now %d \n" ,a);
    printf("b is now %d \n",b);
    return 0;
}