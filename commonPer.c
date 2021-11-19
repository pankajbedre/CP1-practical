#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  char a[1001], b[1001]; // Strings a and b have no more than 1000 letters.
  char x[1001];
  char temp;
  int common_length; // The length of common permutation.
  int i, j; // Loop variables.
  
  while (scanf("%s %s", &a, &b)==2) {
  	// Sort the letters of string a in ascending order.
  	for (i=strlen(a)-1; i>0; i--)
  	  for (j=1; j<=i; j++) { 
  	    if (a[j-1]>a[j]) { // compare and swap letters a[j-1] and a[j].
  	  	  temp = a[j - 1];
  	  	  a[j - 1] = a[j];
  	  	  a[j] = temp;
		}
	  }
  	// Sort the letters of string b in ascending order.
  	for (i=strlen(b)-1; i>0; i--)
  	  for (j=1; j<=i; j++) { 
  	    if (b[j-1]>b[j]) { // compare and swap letters b[j-1] and a[j].
  	  	  temp = b[j - 1];
  	  	  b[j - 1] = b[j];
  	  	  b[j] = temp;
		}
	  }
	common_length = 0; // Initial common permutation is empty.
	i = 0; // Starts from the first letter of string a.
	j = 0; // Starts from the first letter of string b.
	while (i<strlen(a) && j<strlen(b)) { // If more letters in a and b, continue the search.
	  if (a[i]==b[j]) { // If a and b has the same letter,
	  	x[common_length++] = a[i]; // Put this letter in x.
	  	i++; // Move to the next letter of a.
	  	j++; // Move to the next letter of b.
	  }
	  else if (a[i]<b[j]) i++; // If letter in a is less than the letter in b, move to to the next letter of a.
	  else j++; // If letter in b is less than the letter in a, move to to the next letter of b.
	}
	x[common_length] = '\0'; // Add end of string in the common permutation.

	printf("%s\n", x); // Output the common permutation.
  }
  return 0;
}
