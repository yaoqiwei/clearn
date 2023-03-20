#include <stdio.h>
void pound(int n); // ANSI函数原型声明

int main(void)
{
  int times = 5;
  char ch = '!'; // ascii码是33
  float f = 6.0f;

  // pound(times);
  // pound(ch);
  pound(f);

  return 0;
}

void pound(int n)
{
  while (n-- > 0)
  {
    printf("#");
  }
  printf("\n");
}