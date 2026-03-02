//  maximux of three number assign-2 question-5


# include <stdio.h>


int main ()

{

    int a,b,c;

    printf ("enter three number");
    scanf ("%d%d%d",&a,&b,&c);

    if (a>b && a>c)


        printf ("max=%d",a);
        

        else if (b>c)
            printf ("max =%d",b);

            else
                printf("max = %d",c);

                return 0;

    }



