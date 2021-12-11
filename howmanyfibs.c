
#include <stdio.h>
#include <math.h>

int main()
{
   long n1 = 0, n2 = 1, n3, a, b, count = 0;
   scanf("%ld %ld", &a, &b);
   
   while(1){
       n3= n1+ n2;
       n1 = n2;
       n2 = n3;
       if(a == 0 && b == 0){
           break;
       }
       if(n3 >= a && n3 <= b) {
           count++;
       }
        
        if(n3 > b) {
            break;
        }
   }
   printf("%ld", count);
}
