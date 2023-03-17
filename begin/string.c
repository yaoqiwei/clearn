#include <stdio.h>
#include <string.h>
#define DENSITY 62.4
#define PRAISE "You are an extraordinarily being"
#define PI 3.14159
#include <limits.h>
#include <float.h>

int main()
{
  // float weight, volume;
  // int size, letters;
  // char name[40];
  // printf("Hi! What's your first name?\n");
  // scanf("%s", name);
  // printf("%s what's your weight in pounds?\n", name);
  // scanf("%f", &weight);
  // size = sizeof name;
  // letters = strlen(name);
  // volume = weight / DENSITY;
  // printf("Well,%s ,your volume is %2.2f cubic feet.\n", name, volume);
  // printf("Also,your first name has %d letters,\n", letters);
  // printf("and we hava %d bytes to store it.\n", size);

  // char name[40];
  // printf("What's your name?\n");
  // scanf("%s", name);
  // printf("Hello,%s!%s\n", name, PRAISE);

  // float area, circum, radius;
  // printf("What's the radius of your pizza?\n");
  // scanf("%f", &radius);
  // area = PI * radius * radius;
  // circum = 2.0 * PI * radius;
  // printf("Your basic pizza parameters are as follows:\n");
  // printf("circumference = %1.2f,area = %1.2f\n", circum, area);

  // limits.h,float.h
  printf("int_max %d %d \n", INT_MAX, CHAR_BIT);
  printf("Smallest long long: %lld\n", INT_MAX);

  return 0;
}
