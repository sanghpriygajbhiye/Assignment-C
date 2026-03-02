//   leap year   assign-2 question 7 th 



# include <stdio.h>

int main ()

{

    int year ;

    printf (" enter year :");
    scanf ("%d",&year);

    if (year % 400 ==0)
     { 
        printf ("leap year-366 days");
     }   
     else if ( year % 100 ==0)
            {
                printf (" not leap year-365 days ");
            }
     else if ( year % 4 ==0)
            {
                printf (" leap year-366 days ");
            }
      else  {
                 printf ( " not leap year - 365 days ");
             }
                return 0;

}
