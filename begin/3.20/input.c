#include <stdio.h>

int main(void)
{
  // int age;
  // float assets;
  // char pet[30];

  // printf("Enter your age,assets,and favorite pet.\n");
  // scanf("%d%f", &age, &assets);
  // scanf("%s", pet); // 字符串数组不用使用&
  // printf("data: %d,%f,%s", age, assets, pet);

  // int height, weight;
  // scanf("%d,%d", &height, &weight);
  // printf("print your height: %d,weight: %d\n", height, weight);

  // char pet[30];
  // int ref;
  // ref = scanf("%c", pet);
  // printf("char: %s,%d", pet, ref);

  int n;
  printf("Please enter three integers:\n");
  scanf("%d%*d%d", &n);
  printf("The last integer was %d\n", n);

  return 0;
}