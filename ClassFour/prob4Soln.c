//৪। একটি ফাংশন লিখ যেটা একটি ইন্টেজার রিসিভ করে, এবং যত রিসিভ করবে ততটি স্টার প্রিন্ট করবে।। যেমন , ১০ রিসিভ করলে ১০ টা স্টার প্রিন্ট করবে।।

#include<stdio.h>

void function(int num){
  for(int i=1;i<=num;i++){
    printf("* ");
  }
  printf("\n");
}

int main(){
    
    function(5);
    function(12);

    return 0;
}