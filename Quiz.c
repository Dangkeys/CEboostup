#include<stdio.h>

int main()
{
    int a = 2;
    int b = 3;
    int c = 4;
    int d = 5;
    int e = 6;
    int f = 7;
    int x;
    printf("This is answer\n");
    x = a + e / f * c;
    printf("%d\n",x);
    x = (f - e) * (c/a);
    printf("%d\n",x);
    x = a * d / a + e /b;
    printf("%d\n",x);
    x = a *(d /(a + e)) / b;
    printf("%d\n",x);
    x = a * b - c + e * d;
    printf("%d\n",x);


}