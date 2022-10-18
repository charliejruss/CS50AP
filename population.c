#include <cs50.h>
#include <stdio.h>

int main (void)
{
   // TODO: Prompt for start size
   int n;
   do
   {
           n=get_int("start population: ");
   }
   while (n<9);
   // TODO: Prompt for end size
       int a;
   do
   {
       a=get_int("end size: ");
   }

   while (n>a);
   int i=0;
   while(a > n)
   {
       n = n + (n/3) - (n/4);
       i++;
   }
       //print years
       printf("years %i\n",i);
}
