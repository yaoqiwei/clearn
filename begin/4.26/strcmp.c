#include <stdio.h>
#define ANSWER "Grant"
#define SIZE 40

char *s_gets(char *st, int n);

int main(void)
{
  char try[SIZE];
  puts("Who is buried in Grant's tomb?");
  s_gets(try, SIZE);
  while (try != ANSWER)
  {
    puts("No, that's wrong. Try again.");
  }
}
