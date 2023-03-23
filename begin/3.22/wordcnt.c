#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define STOP '|'
#define COVERAGE 350

int main(void)
{
  // char c;
  // char prev;
  // long n_chars = 0L;
  // int n_lines = 0;
  // int n_words = 0;
  // int p_lines = 0;
  // bool inword = false;
  // printf("Enter text to be analyzed (|to terminate): \n");
  // prev = '\n';

  // while ((c = getchar()) != STOP)
  // {
  //   n_chars++;
  //   if (c == '\n')
  //     n_lines++;
  //   if (!isspace(c) && !inword)
  //   {
  //     inword = true;
  //     n_words++;
  //   }
  //   if (isspace(c) && inword)
  //     inword = false;
  //   prev = c;
  // }
  // if (prev != '\n')
  //   p_lines = 1;
  // printf("characters = %ld, words = %d, lines = %d, ",
  //        n_chars, n_words, n_lines);
  // printf("partial lines =%d\n", p_lines);

  // 使用条件运算符
  // int sq_feet;
  // int cans;
  // printf("Enter number of square feet to be painted:\n");
  // while (scanf("%d", &sq_feet) == 1)
  // {
  //   cans = sq_feet / COVERAGE;
  //   cans += ((sq_feet % COVERAGE == 0)) ? 0 : 1;
  //   printf("You need %d %s of paint.\n", cans,
  //          cans == 1 ? "can" : "cans");
  //   printf("Enter next value (q to quit):\n");
  // }

  // const float MIN = 0.0f;
  // const float MAX = 100.0f;
  // float score;
  // float total = 0.0f;
  // int n = 0;
  // float min = MAX;
  // float max = MIN;

  // printf("Enter the first score (q to quit):\n");
  // while (scanf("%d", &score) == 1)
  // {
  //   if (score < MIN || score > MAX)
  //   {
  //     printf("%0.1f is an invalid value.Try again: ", score);
  //     continue; // 跳转至while循环的测试条件
  //   }
  //   printf("Accepting %0.1f:\n", score);
  //   min = (score < min) ? score : min;
  //   max = (score > max) ? score : max;
  //   total += score;
  //   n++;
  //   printf("Enter next score (q to quit): ");
  // }
  // if (n > 0)
  // {
  //   printf("Average of %d scores is %0.1f.\n", n, total / n);
  //   printf("Low = %0.1f, high = %0.1f\n", min, max);
  // }
  // else
  //   printf("No valid scores were entered.\n");

  // int score;
  // printf("Enter your score: ");
  // scanf("%d", &score);

  switch (score / 10)
  {
  case 10:
  case 9:
    printf("your get A");
    break;
  case 8:
    printf("your get B");
    break;
  default:
    printf("your fail~");
  }

  return 0;
}