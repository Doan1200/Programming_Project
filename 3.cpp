// Ví dụ 11: Viết chương trình nhập vào 3 số nguyên a, b, c. Tìm và in ra số lớn nhất. if(1)
#include<stdio.h>

int main()
{
    int a, b, c;
    printf("Nhap vao bien a: ");
    scanf("%d", &a);
    printf("Nhap vao bien b: ");
    scanf("%d", &b);
    printf("Nhap vao bien c: ");
    scanf("%d", &c);
    if(a>b && a>c)
        printf("max = %d", a);
    if(b>a && b>c)
        printf("max = %d", b);
    if(c>a && c>b)
        printf("max = %d", c);
}