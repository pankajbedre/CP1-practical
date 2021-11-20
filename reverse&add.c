#include <stdio.h>

int main()
{
    int num, rev=0, pal=1, temp;
    
    scanf("%d", &num);
    
    while(pal) {
        
        while(temp!=0){
            rev = (rev*10) + temp%10;
            temp = temp/10;
        }
        
        if(!(num == rev)){
            num = num + rev;
        } else {
            pal=0;
        }
    }
    printf("%d",num);
    
}
