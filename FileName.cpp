#define _CRT_SECURE_NO_WARNINGS 1
//��������һ���ַ�������д�����ȡ�ַ����ĳ��Ȳ������Ҫ��ʹ���ַ�ָ��ʵ�֡�
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

