#include<stdio.h>
#include<math.h>

#define Delta (float)b*b-4*a*c

int a, b, c;
float x1, x2;

void hamNhap(int &a, int &b, int &c)
{
    printf("Nhap vao a: ");
    scanf("%d", &a);
    printf("Nhap vao b: ");
    scanf("%d", &b);
    printf("Nhap vao c: ");
    scanf("%d", &c);
}

int hamTinh(int a, int b, int c)
{
    printf("%f\n", Delta);
    if(Delta<0)
        printf("Phuong trinh vo nghiem!");
    else if(Delta == 0)
    {
        x1 = (float)-b/(2*a);
        printf("Phuong trinh co nghiem kep = %f",x1);
    }
    else
    {
        x1 = (-b-sqrt(Delta))/(2*a);
        x2 = (-b+sqrt(Delta))/(2*a);
        printf("Nghiem x1 = %f\n",x1);
        printf("Nghiem x2 = %f\n",x2);
    }
}
int main()
{
    hamNhap(a, b, c);
    hamTinh(a, b, c);
}