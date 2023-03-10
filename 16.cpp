#include<stdio.h>

int main()
{
    int Toan, Ly, Hoa;
    printf("Enter the Toan: ");
    scanf("%d", &Toan);
    printf("Enter the Ly: ");
    scanf("%d", &Ly);
    printf("Enter the Hoa: ");
    scanf("%d", &Hoa);
    float TBC;
    TBC = Toan + Ly + Hoa;
    if(TBC>=15)
    {
        if(Toan>5 && Ly>5 && Hoa>5)
        {
            printf("Hoc deu cac mon!");
        }
        else if(Toan>=4 && Ly>=4 && Hoa>=4)
        {
            printf("Thi dau!\n");
        }

        else 
            printf("Thi hong!");
    }
    else
        printf("Thi hong!");
}