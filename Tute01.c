/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float m1 ,m2 , tot , avg ;

  printf("Enter the subject 1 mark :") ;
  scanf("%f" , &m1) ;
  
  printf("Enter the subject 2 mark :") ;
  scanf("%f" , &m2) ;

  tot = m1 + m2 ;
  printf("TOTAL : %.2f" , tot ) ;

  avg = tot/2 ;
  printf("\nAVERAGE : %.2f" , avg ) ;

  return 0;
}

