#include<stdio.h>

void calculateSum(int x, int y) {
  int sum = x + y;
  printf("The sum of %i + %i is: %i\n", x, y, sum);
}

int main() {
  calculateSum(5, 3);
  calculateSum(8, 2);
  calculateSum(15, 15);
  return 0;
}
