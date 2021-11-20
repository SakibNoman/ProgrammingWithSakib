#include<stdio.h>

int main()
{

    int count=0;
    int array[50] = {1,8,6,8,9};

    for(int i=0;i<=4;i++){

        if(array[i]>=5){
            count++;
        }
    }



    printf("%d",count);

    return 0;
}


