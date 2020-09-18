#include <stdio.h>

using namespace std;

int main(){
    float c1;
    printf("Dist to city 1 from start ");
    scanf("%d", &c1);
    float c2;
    printf("Dist to city 2 from start");
    scanf("%e", &c2);
    float diff;
    
    diff = (c2-c1);
    float mtrs = diff/1000.0;
    printf("%d", mtrs);
    
    return 0;
}