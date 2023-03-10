#include<stdio.h>
char b, k, g, chon, chon1;
int main()
{
    printf("Lua chon cua ban: ");
    scanf("%s", &chon);
    switch(chon)
    {
        case 'b':
                printf("Bua!\n");
                printf("Lua chon cua may: ");
                scanf("%s", &chon1);
                switch(chon1)
                {
                    case 'b':   
                            printf("HOA!");
                            break;
                    case 'k':
                            printf("THANG!");
                            break;
                    case 'g': 
                            printf("THUA!");
                            break; 
                }
        break;
        case 'k':
                printf("Keo!\n");
                printf("Lua chon cua may: ");
                scanf("%s", &chon1);
                switch(chon1)
                {
                    case 'b':   
                            printf("THUA!");
                            break;
                    case 'k':
                            printf("HOA!");
                            break;
                    case 'g': 
                            printf("THANG!");
                            break; 
                }
        break;
        case 'g':
                printf("Bao!\n");
                printf("Lua chon cua may: ");
                scanf("%s", &chon1);
                switch(chon1)
                {
                    case 'b':   
                            printf("THANG!");
                            break;
                    case 'k':
                            printf("THUA!");
                            break;
                    case 'g': 
                            printf("HOA!");
                }
    }
}