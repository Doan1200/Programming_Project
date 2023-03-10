#include<stdio.h>

int  h, p, s, n, scong;

int main()
{
    printf("Nhap vao gio: ");
    scanf("%d", &h);
    printf("Nhap vao phut: ");
    scanf("%d", &p);
    printf("Nhap vao giay: ");
    scanf("%d", &s);
    printf("Nhap vao so giay cong them: ");
    scanf("%d", &n);
    scong = h*3600+p*60+s+n;
    h = scong/3600;
    p = scong%3600/60;
    s = scong%3600%60;
    printf("%.2d:%.2d:%.2d", h, p, s);

}