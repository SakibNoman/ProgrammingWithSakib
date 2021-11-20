//২। একটি সংখ্যা জোড় নাকি বিজোড় তা নির্ণয়ের ফাংশন লিখ

#include<stdio.h>

void function(int num){
  if(num%2==0){
    printf("Even\n");
  }
  else{
    printf("Odd\n");
  }
}

int main(){
    function(33);
    function(34);
    function(54);
    return 0;
}