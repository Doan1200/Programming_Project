#include<stdio.h>

int main()
{
    char chon, chon1;
    printf("Nhap lua chon cua ban: ");
    scanf("%s", &chon);
    if(chon == 'k' || chon == 'K')
    {
        printf("Ban chon KEO.\n");
        printf("Lua chon cua may: ");
        scanf("%s", &chon1);
        if(chon1 == 'b' || chon1 == 'B')
        {
            printf("May chon BUA. \n\tBAN THUA!");
        }
        else if(chon1 == 'k' || chon1 == 'K')
        {
            printf("May chon KEO. \n\tHOA!");
        }
        else if(chon1 == 'g' || chon1 == 'G')
        {
            printf("May chon BAO. \n\tBAN THANG!");
        }
      
    }
     if(chon == 'b' || chon == 'B')
    {
        printf("Ban chon BUA.\n");
        printf("Lua chon cua may: ");
        scanf("%s", &chon1);
        if(chon1 == 'b' || chon1 == 'B')
        {
            printf("May chon BUA. \n\tHOA!");
        }
        else if(chon1 == 'k' || chon1 == 'K')
        {
            printf("May chon KEO. \n\tBAN THANG!");
        }
        else if(chon1 == 'g' || chon1 == 'G')
        {
            printf("May chon BAO. \n\tBAN THUA!");
        }
      
    } 
    if(chon == 'g' || chon == 'G')
    {
        printf("Ban chon BAO.\n");
        printf("Lua chon cua may: ");
        scanf("%s", &chon1);
        if(chon1 == 'b' || chon1 == 'B')
        {
            printf("May chon BUA. \n\tBAN THANG!");
        }
        else if(chon1 == 'k' || chon1 == 'K')
        {
            printf("May chon KEO. \n\tBAN THUA!");
        }
        else if(chon1 == 'g' || chon1 == 'G')
        {
            printf("May chon BAO. \n\tHOA!");
        }
      
    }
}