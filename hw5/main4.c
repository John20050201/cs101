#include <stdio.h>

int main()
{
    int i=12345;
    int a=i%10;
    int A;
    if(i/1000==0){
        A=0;
    }
    else{
        A=i/1000-i/10000*10;
    }
    i=i-a-A*1000;
    i=i+A+a*1000;
    printf("%d",i);
    
    return 0;
}
