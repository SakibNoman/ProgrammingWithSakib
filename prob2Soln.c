//২) দুই বা এর বেশি অক্ষরের একটা সংখ্যা ইনপুট নিতে হবে আর আউটপুট দেখাতে হবে শুধুমাত্র শেষ ডিজিট। যেমন : 123 ইনপুট হলে আউটপুট হবে 3, 245 হলে 5।

#include<stdio.h>

int main()
{

    int num,lastD;
    scanf("%d",&num);
    lastD = num%10;
    printf("%d",lastD);
    return 0;
}
