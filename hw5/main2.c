#include <stdio.h>

int main()
{
    int a=1;
    float pi=400000.0f;
    int i=1;
    while(a<500000){
        if(i%2){
            pi-=(400000/((2*i)+1));
        }
        else{
            pi+=(400000/((2*i)+1));
        }
        i++;
        if(pi=314159){
            break;
        }
    }
    printf("%.5f",pi/100000);

    return 0;
}
