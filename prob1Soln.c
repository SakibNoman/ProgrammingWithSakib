//১) একটা লেটার বড় হাতের নাকি ছোট হাতের তা নির্ণয় করার প্রোগ্রাম ।

#include<stdio.h>

int main()
{
    char ch = 'a';
    if(ch>='A'&&ch<='Z')
    {
        printf("Capital");
    }
    else
    {
        printf("Small");
    }
    return 0;
}
