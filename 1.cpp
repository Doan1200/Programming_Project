// Ví dụ 3: Viết chương trình nhập vào 2 số nguyên a, b. Tìm và in ra số lớn nhất sd if(2)


#include<stdio.h>

int main()
{
    int a, b, max;
    printf("Nhap vao bien a: ");
    scanf("%d", &a);
    printf("Nhap vao bien b: ");
    scanf("%d", &b);
    if(a>b)
    {
        max = a;
        printf("Max = %d", max);
    }
    else
    {
        max = b;
        printf("Max = %d", max);
    }
}