#include <stdio.h>

using namespace std;

int main(){
    
    int hrs;
    scanf("%d", &hrs);
    int mins = hrs*60;
    int sec = hrs*3600;
    printf("Minutes %d \n", mins);
    printf("seconds %d \n", sec);
    
    return 0;
}