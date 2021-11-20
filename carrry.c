
#include <stdio.h>

int main()
{
   int a, b, carry=0, newA, newB, check=1;
   
   scanf("%d", &a);
   scanf("%d", &b);
   
   while(check) {
       if((a%10+b%10)>9) {
           carry++;
       }
       a = a/10;
       b = b/10;
       if(a<=0||b<=0){
           check = 0;
       }
   }
   if(carry){
       printf("%d carry opretions", carry);
   } else {
       printf("No carry operation");
   }
}
