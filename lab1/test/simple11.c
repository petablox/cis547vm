#include <stdio.h>

int main(){
  int x = 2 * fgetc(stdin) - 2;
  int y = 5 / x;
  return 0;
}
