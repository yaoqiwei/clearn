#include <stdio.h>

#define MONTHS 12

int main(void)
{
  int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31,
                      30, 31, 30, 31};
  // int index;
  // for (index = 0; index < MONTHS; index++)
  //   printf("Month %2d has %2d days.\n", index + 1, days[index]);

  int stuff[] = {1, [6] = 23};
  int staff[] = {1, [6] = 4, 9, 10};
  for (size_t i = 0; i < sizeof(staff); i++)
    printf("stuff: %d\n", stuff[i]);

  return 0;
}