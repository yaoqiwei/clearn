#include <stdio.h>
#include <math.h>

int main(void)
{
  // long num;
  // long sum = 0L;
  // int status;

  // printf("Please enter an integer to be summed.");
  // printf("(q to quit): ");

  // status = scanf("%d", &num);
  // while (status == 1)
  // {
  //   sum = sum + num;
  //   printf("Please enter next integer (q to quit): ");
  //   status = scanf("%d", &num);
  //   printf("status = %d", status);
  // }
  // printf("Those integers sum to %ld.\n", sum);

  // int n = 0;
  // while (++n < 3)
  //   printf("n is %d\n", n);
  // printf("That's all this program does.\n");

  // int number, count, num, sum;
  // char ch = 'A';
  // while (number < 6)
  // {
  //   printf("Your number is too small.\n");
  //   scanf("%d", &number);
  // }
  // while (ch != '$')
  // {
  //   count++;
  //   scanf("%c", &ch);
  // }
  // while (scanf("%f", &num) == 1)
  //   sum = sum + num;

  // const double ANSWER = 3.14159;
  // double response;
  // printf("What is the value of pi?\n");
  // scanf("%lf", &response);

  // while (fabs(response - ANSWER) > 0.0001)
  // {
  //   printf("res: %f response:%f \n", fabs(response - ANSWER), response);
  //   printf("Try again!\n");
  //   scanf("%lf", &response);
  // }

  // printf("Close enough!\n");

  // int true_val, false_val;
  // true_val = (10 > 2);
  // false_val = (10 == 2);
  // printf("true = %d; false = %d\n", true_val, false_val);

  // int n = 3;
  // while (n)
  //   printf("%2d is true\n", n--);
  // printf("%2d is false\n", n);
  // n = -3;
  // while (n)
  //   printf("%2d is true\n", n++);
  // printf("%2d is false\n", n);

  // int n = 0;
  // while (n++ < 3)
  //   ;
  // printf("n is %d\n", n);
  // printf("That's all this program does.\n");

  /* 误用=会导致无限循环 */
  // long num;
  // long sum = 0L;
  // int status;
  // printf("Please enter an integer to be summed");
  // printf("(q to quit):");

  // status = scanf("%ld", &num);
  // while (status == 1)
  // {
  //   sum += num;
  //   printf("Please enter next integer (q to quit):");
  //   status = scanf("%ld", &num);
  // }
  // printf("Those integers sum to %ld.\n", sum);

  /* 使用_Bool类型的变量vriable */
  long num;
  long sum = 0L;
  _Bool input_is_good;
  printf("Please enter an integer to be summed");

  printf("(q to quit):");
  input_is_good = (scanf("%ld", &num) == 1);
  while (input_is_good)
  {
    sum += num;
    printf("Please enter next integer (q to quit):");
    input_is_good = (scanf("%ld", &num) == 1);
  }
  printf("Those integers sum to %ld.\n", sum);

  return 0;
}