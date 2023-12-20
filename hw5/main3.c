#include <stdio.h>

int main()
{
    for(int x=1,y=1;y<10;x++){
        printf("%d*%d=%d\t",x,y,x*y);
        if(x>=9){
            x=0;
            y+=1;
            printf("\n");
        }
    }

    return 0;
}
