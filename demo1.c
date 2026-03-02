//    write a program to accept two number and display divison of the two number. check divide by zero error if divisor is zero then display errormsg




# include <stdio.h>

int main ()
{

    float num1,num2,result;

    printf ( " enter first number:");

   scanf("%f",&num1);

   printf (" enter second number:");
   scanf ("%f",&num2);

   if (num2==0)
   {

       printf("error! divison by zero is not allowed.");
       }

       else {

           result = num1 / num2;
           printf ("divison =%2f",result);

       }

       return 0;

   }



