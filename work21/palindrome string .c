#include <stdio.h>
#include <string.h>
  
int main()
{
   char inputArray[20], reversedArray[20];
 
   printf("Enter the string for palindrome check \n");
	scanf("%c",inputArray);
   strcpy(reversedArray,inputArray);
   strrev(inputArray);
   if(strcmp(inputArray, reversedArray) == 0 )
      printf("%s is a palindrome.\n", inputArray);
   else
      printf("%s is not a palindrome.\n", inputArray);
       
   
  
}

