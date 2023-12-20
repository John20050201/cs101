#include <stdio.h>

int main()
{
    int a=10000;
    float pi=400000.0f;
    int i=1;
    for(float j=1; j<a; j++){
        if(i%2){
            pi-=(400000/((2*i)+1));
        }
        else{
            pi+=(400000/((2*i)+1));
        }
        i++;
    }
    printf("%.5f",pi/100000);

    return 0;
}
