

#include<stdio.h>
int main()
{
char ch1,ch2;
scanf("%c %c",&ch1,&ch2);

for(char i=ch1;i>=ch2;i--){
    printf("%c\n",i);
}

return 0;
}
