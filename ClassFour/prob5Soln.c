// ৫। একটি সংখ্যার সব গুলো ডিজিট গুণ করার প্রোগ্রাম লিখ। যেমন : ১২৩৪ একটা সংখ্যা হলে, আউটপুট হবে , ২৪।

#include<stdio.h>

int main(){

    int num = 12345;
    int mult = 1;
    while(num!=0){
      mult*=num%10;  // mult = mult*num%10(Multiplying each number)
      num/=10;   //num=num/10 (eleminating last digit)
    }
    printf("%d\n",mult);

    return 0;
}