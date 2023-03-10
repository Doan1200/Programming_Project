#include<stdio.h>
int a, b, c, d;
int hamNhap(int &a, int &b, int &c, int &d)
{
    printf("Nhap vao bien a: ");
    scanf("%d", &a);
    printf("Nhap vao bien b: ");
    scanf("%d", &b);
    printf("Nhap vao bien c: ");
    scanf("%d", &c);
    printf("Nhap vao bien d: ");
    scanf("%d", &d);
}


int main()
{
    hamNhap(a, b, c, d);
    int max1, max2;
    if(a>b)
    {
        max1 = a;
    }
    else 
    {
        max1 = b;
    }
    if(c>d)
    {
        max2 = c;
    }
    else
    {
        max2 = d;
    }
    if(max1>max2)
    {
        printf("So nguyen lon nhat = %d", max1);
    }
    else
    {
        printf("So nguyen lon nhat = %d", max2);
    }
}
