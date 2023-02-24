#include <stdio.h>

//find the gender of the user or anyone
int main()
{
 char student[100];
 int scores;

  printf("Kindly Enter your Name here\n");
  scanf("%s" , student);

  printf("Kindly enter score here\n");
  scanf("%d" , &scores);
 
   //printf("Then %s you scored %d and failed to meet the cut off mark\n" , student, scores);

  
  if (scores < 50 )
  {
    printf("Hello %s you scored %d and failed to meet the cut off mark\n" , student, scores);
    }
    
  else
  {
    printf("Congratulations %s you scored %d and passed. See you in the next phase\n" , student, scores);
  }

  return (0);
}