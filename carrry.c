
#include <stdio.h>

int main()
{
   int a, b, carry=0, carN = 0, check=1;
   
   scanf("%d", &a);
   scanf("%d", &b);
   
   while(check) {
       carN = (a%10+b%10)/10;
       if((a%10+b%10+carN)>9) {
           carry++;
       }
       a = a/10 + carN;
       b = b/10 ;
       if(a<=0||b<=0){
           check = 0;
       }
       carN = 0;
   }
   if(carry){
       printf("%d carry opretions", carry);
   } else {
       printf("No carry operation");
   }
}
