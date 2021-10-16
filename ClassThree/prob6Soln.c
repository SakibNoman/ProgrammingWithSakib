
#include<stdio.h>

int main()
{

    int array[50] = {1,8,6,8,9};
    int pawageche = 0;

    for(int i=0;i<=4;i++){

        if(array[i]==5){
            printf("Yes\n");
            pawageche=1;
            break;
        }
    }

    if(pawageche==0){
    printf("No");
    }

    return 0;
}
