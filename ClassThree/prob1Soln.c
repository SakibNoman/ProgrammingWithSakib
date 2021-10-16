/*১। একটা সি প্রোগ্রাম লিখতে হবে, তিনটা  ইনপুট  নিতে হবে, প্রথম ও ২য় টা নাম্বার ৩য় টা লেটার।
২য় নাম্বার এর সমান সংখ্যক ডিজিট ১ম নাম্বার থেকে কেটে নেওয়া।। লেটার f হলে ১ম থেকে কাটবে আর লেটার l হলে শেষ থেকে কাটবে।
যেমন: ইনপুট ২৩৪ ১ f হলে আউটপুট হবে ২, ৭৬৫ ২ l ইনপুট হলে আউটপুট হবে ৬৫।*/

#include<stdio.h>
#include<math.h>

int main()
{
    int num1=2342,num2=2,countDigit=0;
    int num1ForCount = num1;
    char ch='f';
    float div;
 //   scanf("%d %d %c",&num1,&num2,&ch);

    while(num1ForCount)
    {
        countDigit++;
        num1ForCount = num1ForCount/10;
    }

    if(ch=='l')
    {
        div = pow(10,num2);
       // int divint = (int)div;
        printf("%d",num1%(int)div);
    }
    else
    {
        div = pow(10,countDigit-num2);
        printf("%d",num1/(int)div);
    }

    return 0;
}

