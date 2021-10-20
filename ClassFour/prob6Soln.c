//৬। একটি ফাংশন লিখ যেটি একটি ক্যারেক্টার(+,-,*,/) এবং দুটি সংখ্যা রিসিভ করে। এবং ক্যারেক্টার + হলে যোগফল , - হলে বিয়োগফল , * হলে গুণফল এবং / হলে ভাগফল প্রিন্ট কর।

#include<stdio.h>

void function(char ch,int num1,int num2){
  int result;
  switch(ch){
    case '+':
    result = num1+num2;
    break;
    case '-':
    result = num1-num2;
    break;
    case '*':
    result = num1*num2;
    break;
    case '/':
    result = num1/num2;
    break;
  }
  printf("The result is %d\n",result);
}

int main(){
    
    function('+',3,5);
    function('-',12,4);
    function('*', 3, 2);
    function('/', 50, 5);

    return 0;
}