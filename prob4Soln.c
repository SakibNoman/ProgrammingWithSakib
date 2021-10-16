
#include<stdio.h>

int main()
{

    int num1,sum=0;
    scanf("%d",&num1);

    while(num1!=0)
    {

        int lastD = num1%10;

        sum = sum+lastD;

        num1 = num1/10;

    }

    printf("%d",sum);


    return 0;
}


