#include <stdio.h>


int main()
{
    int i,input,nr;
    nr=0;
    i=3;

        printf("This is the James Blunt loop maker.Please introduce a number from 1 to 10:\n");
        scanf("%d",&input);

    if(input>10)
        {
        printf("\n%d is an invalid number. Please choose one from 1 to 10.\n",input);
        }

    else if(input==1)
        {
        printf("\n\nJames Blunt thinks you're beautiful once!\n");
        }

    else if(input==2)
        {
        printf("\n\nJames Blunt thinks you're beautiful twice!\n");
        }

    else
    {
    printf("James Blunt thinks you're beautiful once!\n");
    printf("James Blunt thinks you're beautiful twice!\n");

    for(i=3; i<=input; i++)
        {
            printf("James Blunt thinks you're beautiful %d times!.\n",i);
        }
    printf("\n . . .");
    printf("But is time to face the truth, he will never be with you... ;(( \n");
    }

    return 0;
}
