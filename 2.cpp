// Ví dụ 11: Viết chương trình nhập vào 3 số nguyên a, b, c. Tìm và in ra số lớn nhất. if(2)
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

    // Su dung if loai 1
    int max =a;
    if(a>b)
    {
        if(a>c)
        {
            max  = a;
            printf("Max = %d", max);
        }
        else
        {
            max  = c;
            printf("Max = %d", max);
        }
    }
    else // a<b
    {
        if(b>c)
        {
            max  = b;
            printf("Max = %d", max);
        }
        else
        {
            max  = c;
            printf("Max = %d", max);
        }
    }
}