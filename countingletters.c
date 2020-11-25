// Thinh Nguyen
// CSC 60
// FIX FREQUENCY PROGRAM
// DELETING UNUSED VARIABLES: characterArray[SIZE], character, newCount

#include <stdio.h>
#include <string.h>
#include <ctype.h>
# define SIZE 26 
int main()
{
   char inputArray[SIZE];
   int count = 0, frequencyArray[SIZE] = {0}, frequency;
 
   // Ask for the input
   printf("Enter characters: \n");
   fgets(inputArray, SIZE, stdin);

    
  // While loop
   while (inputArray[count] != '\0') {
   
   // convert lowercase to uppercase char
   inputArray[count] = toupper(inputArray[count]);
   
   // Gets alphabet from A-Z
   if (inputArray[count] >= 'A' && inputArray[count] <= 'Z') 
   {
   frequency = inputArray[count] - 'A';
   frequencyArray[frequency]++;
   }
 
   count++;
   }
 
   // For loop to prints the character and frequency 
   
   for (count = 0; count < 26; count++)
         printf("%c %d \n", count + 'A', frequencyArray[count]);
 
   return 0;
}