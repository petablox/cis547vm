#include <stdio.h>

int main(){
  int y = 1, z = 1;
  int un;
  int x = un + 1;
  int temp;
  if (x == 0) {
    temp = y;
  } else if (x == 1) {
    temp = y - 3;
  } else {
    temp = 3 - y;
  }

  z = temp / x;
  return 0;
}
