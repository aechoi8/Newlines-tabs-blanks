#include <stdio.h>

int main(){

  int c, nl, t, b;

  nl = t = b = 0;

  while ((c = getchar()) != EOF){
      if (c == '\n'){
        nl++;
      } else if (c == '\t'){
          t++;
      } else if (c == ' '){
          b++;
      }
  }

  printf("newlines: %d, tabs: %d, blanks: %d\n", nl, t, b);

  return 0;

}
