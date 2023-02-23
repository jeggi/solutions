#include <stdio.h>

int main(void){

int ade = 30;
int sunday = 40;
int scores = 100;

int i = (scores * ade /100);
//printf("%d", i);


if(i < 50)
{
  printf("your scores is %d, you failed\n", i);

}
else
{
  printf("I am glad to let you know you passed, Your score is %d", i);
}
  
return 0;

}