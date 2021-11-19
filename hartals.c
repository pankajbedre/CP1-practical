#include <stdlib.h>
#include <stdio.h>

int main(void) {
  int cases, days, parties;
  int hartal[100];
  int lost, lost_day;
  int c, i, j;
  
  scanf("%d", &cases);
  
  for (c=0; c<cases; c++) {
  	scanf("%d", &days);
  	scanf("%d", &parties);
  	
  	for (i=0; i<parties; i++) {
  	    scanf("%d", &hartal[i]);
  	}
  	
  	lost_day = 0; 
  	for (i=1; i<=days; i++) { 
  	  if (i%7!=6 && i%7!=0) { 
  	    lost = 0;
  	    for (j=0; j<parties; j++) {
  	        lost = lost || (i%hartal[j]==0);
  	    }
  	    lost_day = lost_day + lost; 
	  }	
	}	
	printf("%d\n", lost_day); 
  }
  return 0;
}
