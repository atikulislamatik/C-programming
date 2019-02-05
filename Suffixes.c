#include<stdio.h>
int main()
{
    char ch[100];

    while(1)
    {
        printf("Enter the Main String : ");
        scanf("%s",&ch);

        int len=strlen(ch);
        int temp=len;
        int n=len;

        int i,j;

        printf("Your Entered String Suffix are given bellow : \n");

        for (i=0;i<temp;i++)
        {
            for(j=len-1;j<=temp-1;j++)
            {
                printf("%c",ch[j]);
            }
            len--;
            printf("\n");
        }
         printf("\n");



        printf("Your Entered String Proper Suffix are given bellow : \n");

        for(i=0; i<temp-1; i++)
        {
            for(j=n-1; j<temp; j++)
            {
                printf("%c",ch[j]);
            }
             n--;
             printf("\n");
        }

         printf("\n");
    }


    }
