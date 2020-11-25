
// Thinh Nguyen
// CSC 60
// Structure Assignment
// 11/01/2018

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct _Student {
   char name [32] ;
   unsigned char age ;
   char yearInCollege ;
} ;


struct _Student StudentList [ 8 ] =
{ 

 // TASK 1 FILE THE CODE TO INITIALIZE THIS STRUCURE WITH DATA I GAVE IN CANVAS
{"Erik", 21, 'A'},
{"Jeff", 22, 'A'},
{"Beth", 23, 'D'},
{"Brad", 24, 'D'},
{"Cindy", 28, 'C'},
{"Bill", 25, 'B'},
{"Jack", 26, 'C'},
{"Jill", 29, 'D'},

};



//Task 2:Â  Write A functionÂ ,  note this function uses pointer 

void printStudentList(struct _Student *ptr, int num )
{
  int i ;
    printf ( "\n"  );


   // FILL IN THE CODE TO PRINT ALL FIELDS IN EACH RECORD
for (i = 0; i < num; i++)
{printf ("Name: %s  Age: %i  Years In College: %c \n", ptr -> name, ptr -> age, ptr -> yearInCollege);
ptr++;
}
}




// TASK 3 : complet the function to sort the records

void sortStudentListUsingAge(struct _Student ptr[ ], int num )
{
   
   int i , j;
   int Index = 0;
   unsigned char temp;
   char tempString[32];
  
   for (i = 0; i < num - 1; i++)
   {
     Index = i;
     for (j = i+1; j < num; j++)
     {
     if (ptr[j].age < ptr[Index].age)
     {
       Index = j;
     }
     }

     temp = ptr[i].age;
     ptr[i].age = ptr[Index].age;
     ptr[Index].age = temp;

strcpy(tempString, ptr[i].name);
strcpy(ptr[i].name, ptr[Index].name);
strcpy(ptr[Index].name, tempString);

temp = ptr[i].yearInCollege;
ptr[i].yearInCollege = ptr[Index].yearInCollege;
ptr[Index].yearInCollege = temp;


   }


}



//Task 4 : Write a FunctionÂ to sort the list using Year in College in ascending order

void sortStudentListUsingYearInCollege(struct _Student ptr[ ], int num )
{

int i , j;
   int Index = 0;
   unsigned char temp;
   char tempString[32];
   for( i = 0 ; i < num-1 ; i++){
        Index = i;
        for( j = i + 1 ; j < num ; j++){
            if (ptr[j].yearInCollege < ptr[Index].yearInCollege){
                Index = j;
            }
        }


 temp = ptr[i].age;
     ptr[i].age = ptr[Index].age;
     ptr[Index].age = temp;

strcpy(tempString, ptr[i].name);
strcpy(ptr[i].name, ptr[Index].name);
strcpy(ptr[Index].name, tempString);

temp = ptr[i].yearInCollege;
ptr[i].yearInCollege = ptr[Index].yearInCollege;
ptr[Index].yearInCollege = temp;
}
}



//Task 5 : Write a FunctionÂ to sort the list using Name in ascending order

void sortStudentListUsingName(struct _Student ptr[ ], int num )
{

int i , j;
   int Index = 0;
   unsigned char temp;
   char tempString[32];
   for( i = 0 ; i < num-1 ; i++){
        Index = i;
        for( j = i + 1 ; j < num ; j++){
            if (strcmp(ptr[j].name, ptr[Index].name) < 0){
                Index = j;
            }
        }


 temp = ptr[i].age;
     ptr[i].age = ptr[Index].age;
     ptr[Index].age = temp;

strcpy(tempString, ptr[i].name);
strcpy(ptr[i].name, ptr[Index].name);
strcpy(ptr[Index].name, tempString);

temp = ptr[i].yearInCollege;
ptr[i].yearInCollege = ptr[Index].yearInCollege;
ptr[Index].yearInCollege = temp;



   }
}


int main ( )

{

     int numCells = sizeof ( StudentList)/ sizeof ( StudentList[0]);

     printStudentList(StudentList , numCells) ;

     sortStudentListUsingAge(StudentList, numCells) ;
 
     printStudentList(StudentList , numCells) ;

     sortStudentListUsingYearInCollege(StudentList, numCells) ;

     printStudentList (StudentList , numCells) ;

     sortStudentListUsingName(StudentList, numCells) ;

     printStudentList(StudentList , numCells) ;

   
}
