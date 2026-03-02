//  write a program to accept an integer value and print its table assign-1 6th no question





# include <stdio.h>

int main ()


{

    int num,i;

    printf ("enter a number:");

    scanf ("%d",&num);

    for (i=1; i<=10; i++)

        {
            printf("%d x %d=%d\n", num,i,num * i);
        }


        return 0;

}


