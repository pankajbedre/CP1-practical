
#include <stdio.h>
#include <math.h>

int main()
{
    int N, R, E = 0, lN =0 , lR= 0, tempN, tempR, i, j, check =1;
    
    scanf("%d", &N);
    tempN = N;
    while(tempN!=0)  
    {  
       tempN=tempN/10;  
       lN++;  
    }  
   while(check) {
       R = pow(2,E);
       tempR = R;
       while(tempR!=0)  
       {  
         tempR=tempR/10;  
         lR++;  
        } 
        for( j = 1; j<= (lR-lN); j++){
            R = R/10;
        }
        // printf("%d %d", N, R);
        // check = 0;
        if(R == N){
            printf("%d",E);
            check = 0;
        }
         E++;
        
   }
//   printf("%d, %d", lN, R);
}
