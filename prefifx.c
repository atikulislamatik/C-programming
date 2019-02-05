#include<stdio.h>
int main()
{
    char ch[100];

    while(1)
    {
        printf("Enter the Main String : ");
        scanf("%s",&ch);

        int len=strlen(ch);


        int i,j;

        printf("Your Entered String Prefix are given bellow : \n");

        for (i=0;i<len;i++)
        {
            for(j=0;j<=i;j++)
            {
                printf("%c",ch[j]);
            }
            printf("\n");
        }
         printf("\n");


         printf("Your Entered String Proper Prefix are given bellow : \n");
         for(i=0; i<len-1; i++)
        {
            for(j=0; j<=i; j++)
            {
               printf("%c",ch[j]);

            }
                 printf("\n");

            }

                printf("\n");




    }

}
