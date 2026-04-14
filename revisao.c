#include <stdio.h>
int main(){
    float c11, c12, c13, c21, c22, c23;
    scanf("%f %f %f", &c11, &c12, &c13);
    scanf("%f %f %f", &c21, &c22, &c23);
    if((c11/c21) == (c12/c22) && (c11/c21) == (c13/c23)){
        printf("LD");
    }
    else{
        printf("LI");
    }
}