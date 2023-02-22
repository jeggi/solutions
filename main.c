#include <stdio.h>

int main(void)
{
int myAge;
int voteAge = 18;
  
  //printf("You have %d years to be eligible to vote", ager);
  printf("Kindly enter your age here\n");
  scanf("%d", &myAge);
  //if statements
  if(myAge > voteAge)
  {
    printf("You are %d years old and you can vote\n" , myAge);
    }
else{
  int ager = voteAge - myAge;
  printf("This is false and you can't vote for now you have to wait for %d years", ager);
  }
  return 0;
  }