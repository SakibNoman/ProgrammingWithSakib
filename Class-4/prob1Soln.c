//১। একটি লেটার Vowel নাকি Consonant তা নির্ণয় করার জন্য একটি ফাংশন লিখ।

#include<stdio.h>


void function(char ch){
  if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
    printf("%c is Vowel\n",ch);
  }
  else{
    printf("%c is Consonent\n",ch);
  }
}

int main(){
    function('a');
    function('v');
    function('Y');
    return 0;
}