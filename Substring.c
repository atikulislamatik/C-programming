#include<stdio.h>
int main()
{
    char ch[100];

    while(1)
    {
    printf("Enter the main string : ");
    scanf("%s",&ch);

    int len = strlen(ch);
    int n, i,j;

    printf("Enter divider : ");
    scanf("%d",&n);

    printf("Your Entered String  Sub-String : ");
    for(i=0; i<len; i++)
        {
            for(j=i; j<n; j++)
            {

                if(n>len)
                {
                    break;
                }
                else
                    printf("%c",ch[j]);
            }
            n++;

            printf(" ");
        }
         printf("\n");

    printf("\n");
    }



}
