#include <stdio.h>
#include <conio.h>

int main( void )
{
    int min, max, i, j, count = 0;
    printf("Enter Your First Number\n");
    scanf("%d", &min);
    printf("Enter Your Last Number\n");
    scanf("%d", &max);

    for(i=min; i<=max; i++)
    {
        // Was for(j=1; j<=i; j++)
        for(j=2; j<i; j++)
        {
            if(i % j == 0)
            {
                //Was count++;
                break;
            }
        }

        //Was if(count==2)
        if(j == i)
        {
            printf("%d\t",i);
        }
    }
    getch();

    return 0;
}