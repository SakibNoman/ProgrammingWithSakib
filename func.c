

#include<stdio.h>


void summation(int x,int y,int z){
    int sum;
    sum = x+y+z;
    printf("%d\n",sum);
}

int main(){
    summation(1,2,3);

    summation(4,5,6);

    summation(34,5,2);

    summation(5,3,2);
    return 0;
}
