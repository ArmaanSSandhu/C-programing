#include <stdio.h>

using namespace std;

int main(){
    
    float mth;
    float phy;
    float chem;
    printf("input math, physics and chemistry marks out of 100 ");
    scanf("%d %e %f", &mth, &phy, &chem);
    //printf("inpur physics marks out of 100 ");
    //scanf("%d", &phy);
    //printf("input chemistry marks out of 100 ");
    //scanf("%d", &chem);
    float ans;
    ans = ((mth + chem + phy)/300.0)*100.0;
    printf("Percentage is %d", ans);
    return 0;
}