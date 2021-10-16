
#include<stdio.h>

int main(){

int num1,num2,count=0;
scanf("%d %d",&num1,&num2);



while(num1!=0){

if(num1%10==num2){

    count++;
}

num1 = num1/10;

}

printf("%d",count);

return 0;
}


