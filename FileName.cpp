#define _CRT_SECURE_NO_WARNINGS 1
//键盘输入一个字符串，编写代码获取字符串的长度并输出，要求使用字符指针实现。
#include "stdio.h"
int main()
{
    char ch[50] = { 0 };
    gets_s(ch);
    char* p = &ch[0];
    char* pa = &ch[0];
    int i = 0;
    while (ch[i] != '\0')
    {
        pa++;
        i++;
    }
    int c = pa - p;
    printf("%d", c);
    return 0;
}

