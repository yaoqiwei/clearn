#include <stdio.h>
#include <string.h>
#define DENSITY 62.4
#define PRAISE "You are an extraordinarily being"
#define PI 3.14159
#include <limits.h>
#include <float.h>
#define BLURB "Authentic imitation!"
#define PAGES 336
#define WORDS 65618

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
  // printf("int_max %d %d \n", INT_MAX, CHAR_BIT);
  // printf("Smallest long long: %lld\n", INT_MAX);

  // printf("*%d*\n", PAGES);
  // printf("*%2d*\n", PAGES);
  // printf("*%10d*\n", PAGES);
  // printf("*%-10d*\n", PAGES);

  // const double RENT = 3852.99; // const变量
  // printf("*%f*\n", RENT);
  // printf("*%e*\n", RENT);
  // printf("*%4.2f*\n", RENT);
  // printf("*%3.1f*\n", RENT);
  // printf("*%10.3f*\n", RENT);
  // printf("*%10.3E*\n", RENT);
  // printf("*%+4.2f*\n", RENT);
  // printf("*%010.2f*\n", RENT);

  // printf("[%2s]\n", BLURB);
  // printf("[%24s]\n", BLURB);
  // printf("[%24.5s]\n", BLURB);
  // printf("[%-24.5s]\n", BLURB);

  // short num = PAGES;
  // short mnum = -PAGES;
  // printf("num as short and unsigned short: %hd %hu\n", num, num);
  // printf("-num as short and unsigned short: %hd %hu\n", mnum, mnum);
  // printf("num as int and char: %d %c\n", num, num);
  // printf("WORDS as int, short, and char: %d %hd %c\n", WORDS, WORDS, WORDS);

  // float n1 = 3.0;
  // double n2 = 3.0;
  // long n3 = 20000000;
  // long n4 = 1234567890;
  // printf("%.le %.le %.le %.le \n", n1, n2, n3, n4);
  // printf("%ld %ld %ld %ld\n", n1, n2, n3, n4);

  // int bph2o = 212;
  // int rv;
  // rv = printf("%d F is water's boiling point.\n", bph2o);
  // int aaa = printf("aaaaaa\n");
  // printf("The printf() function printed %d characters. %d\n", rv, aaa);

  /* 打印较长的字符串 */
  printf("Here's one way to print a ");
  printf("long string. \n");
  printf("Here's another way to print a \
long string.\n");
  printf("Here's the newest way to print a "
         "long string \n");

  return 0;
}
