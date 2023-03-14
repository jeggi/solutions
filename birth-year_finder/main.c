#include <stdio.h>

int main(void) {

char name[10];
  
int age;

int year = 2023;


  printf("Hello User, what is your first name\n");
  scanf("%s", name);

  //printf("%s\n" , name);

  
    printf("Kindly tell us your age (in Number)\n");
  scanf("%d" , &age);

  //printf("Hello %s you are %d years old\n" , name, age);

int x = year - age;

  printf("Hello %s you are %d years old and your birth year is %d\n\n", name, age, x);  

//printf("%d\n", age);

//this just print a commical statement and simple use of if statement.
  /*
  if(age > 20){
    printf("Do you know my age ni\n\n");
  }
*/

  //then this just to do a for loop statement of the age
/*
  for(; age > 10; age--){
  printf("%d\n", age);
  
}
*/
 // printf("What is now my age? %d", age);

  if(x >= 2000){

    printf("Nice meeting you %s you were born in the 2000 millennium\n" , name);
    }

    else{
      printf("Nice meeting you %s you were born in 190s\n" , name);
    
    }

 
  return 0;
}