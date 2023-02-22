#include <stdio.h>
/**
  Author - Seun

  this would print letters a to z
  in lower case and also make sure the separator comma is not 
  printed at the back of the last line
*/
int main(void) {
  
    char c = 'a';
  
  while (c <= 'z') {
        putchar(c);
    
        if (c != 'z'){  //comma last line exempted
          putchar(',');
        }
        putchar(' ');
        putchar('\n'); 

        c++;
    }
    putchar('\n');

return 0;
}