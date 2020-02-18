#include <stdio.h>
int main() {
  int first = fgetc(stdin);
  int second = fgetc(stdin);
  unsigned int len_sum = first + second;
  int a, b;
  if (first > 10)
    a = len_sum / first;
}
