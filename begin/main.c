#include <stdio.h>
#include <inttypes.h>

int main(void)
{
  /* 基础语法 */
  // int dogs;
  // printf("How many dogs do you have?\n");
  // scanf("%d", &dogs);
  // printf("So you have %d dog(s)!\n", dogs);
  // return 0;

  // int num;
  // num = 1;
  // printf("I'm simply!\n");
  // printf("computer\n");
  // printf("I hava %d computer", num);
  // getchar();
  // return 0;

  // int numOne, numTwo;
  // numOne = 5;
  // numTwo = numOne * numOne;
  // printf("numOne = %d ,numTwo = %d \n", numOne, numTwo);
  // return 0;

  // 一年有多少周
  // int weekday = 7;
  // int yearday = 365;
  // int weeknum;
  // weeknum = yearday / weekday;
  // printf("一年有%d周", weeknum);

  // float weight; /* 你的体重 */
  // float value;  /* 相等重量的白金价值 */
  // printf("Are you worth your weight in platinum?\n");
  // printf("Let's check it out.\n");
  // printf("Please enter your weight in pounds: ");
  // /* 获取用户的输入 */
  // scanf("%f", &weight);
  // /* 假设白金的价格是每盎司$1700 */
  // /* 14.5833用于把英镑常衡盎司转换为金衡盎司*/
  // value = 1700.0 * weight * 14.5833;
  // printf("Your weight in platinum is worth $%.2f.\n", value);
  // printf("You are easily worth that! If platinum prices drop,\n");
  // printf("eat more to maintain your value.\n");
  // return 0;

  // 打印数字小于输入数字，随机显示数值。
  // int age = 10;
  // int height = 172;
  // int weight = 130;
  // printf("age: %d,height:%d,weight:%d.", age, height, weight);
  // printf("ge: %d,height:%d,weight:%d.", age);

  // 该程序以3种不同记数系统显示同一个值。printf()函数做了相应的转
  // 换。注意，如果要在八进制和十六进制值前显示0和0x前缀，要分别在转换
  // 说明中加入#
  // int x = 100;
  // printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
  // printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);

  // 不同整型的长度大小
  // short height = 1;
  // int weight = 120;
  // long int fly = 333;
  // long long dead = 444;
  // unsigned unsi = 555;
  // printf("%d %d %d %d %d", sizeof(height), sizeof(weight), sizeof(fly), sizeof(dead), sizeof(unsi));

  // 整数溢出
  // int i = 2147483646;
  // unsigned int j = 4294967294;
  // printf("%d %d %d\n", i, i + 1, i + 2);
  // printf("%u %u %u\n", j, j + 1, j + 2);

  // unsigned int un = 3000000000;
  // short end = 200;
  // long big = 65537;
  // long long verybig = 12345678908642;
  // printf("un = %u and not %d\n", un, un);                  // %u转unsigned
  // printf("end = %hd and %d\n", end, end);                  // %h转short
  // printf("big = %ld and not %hd\n", big, big);             // %l转long
  // printf("verybig= %lld and not %ld\n", verybig, verybig); // %ll转long long

  // char grade = 'A';
  // printf("%d \n", grade);
  // char ch;
  // printf("Please enter a character.\n");
  // scanf("%c", &ch);
  // printf("The code for %c is %d. \n", ch, ch);

  // _Bool trust = 0;
  // printf("%d \n", trust);
  // int32_t me32; // me32是一个32位有符号整型变量
  // me32 = 45933945;
  // printf("First,assume int32_t is int: ");
  // printf("me32 = %d\n", me32);
  // printf("Next, let's not make any assumptions.\n");
  // printf("Instead, use a \"macro\" from inttypes.h: ");
  // printf("me32 = %" PRId32 "\n", me32);

  // float cFloat = 32000.0;
  // double cDouble = 2.14e9;
  // long double dip = 3.23e-5;
  // printf("%f can be writen %e\n", cFloat, cFloat);
  // printf("%f can be writen %e\n", cDouble, cDouble);
  // printf("%Lf can be writen %Le\n", dip, dip);

  // float toobig = 3.4E38 * 100.0f;
  // printf("%e\n", toobig);

  // float a, b;
  // b = 2.0e3 + 1.0;
  // a = b - 2.0e3;
  // printf("%f \n", a);

  return 0;
}