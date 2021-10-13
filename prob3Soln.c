//৩) ৪ ডিজিটের একটা সংখ্যা ইনপুট নিতে হবে আর আউটপুট হবে সংখ্যাটির ১ম ২ ডিজিট আর শেষ ২ ডিজিট এর যোগফল । যেমন : ১২২১ ইনপুট হলে আউটপুট হবে ১২+২১═৩৩।


#include<stdio.h>
int main()
{
    int num,firstTwo,lastTwo,sum;
    scanf("%d",&num);
    firstTwo = num/100;
    lastTwo = num%100;
    sum = firstTwo+lastTwo;
    printf("%d+%d=%d",firstTwo,lastTwo,sum);
    return 0;
}
