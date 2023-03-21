#include <stdio.h>

int main(void)
{
  // const int NUMBER = 22;
  // int count;
  // for (count = 1; count < NUMBER; count++)
  //   printf("Be my Valentine!\n");
  // return 0;

  // int secs;
  // for (secs = 5; secs > 0; secs--)
  //   printf("%d seconds\n", secs);
  // printf("We have ignition!\n");

  // char ch;
  // for (ch = 'a'; ch < 'z'; ch++)
  //   printf("The ASCII value for %c is %d\n", ch, ch);

  // int x;
  // int y = 55;
  // for (x = 1; y <= 75; y = (x++ * 5) + 50)
  //   printf("%10d %10d\n", x, y);

  // int ans, n;
  // ans = 2;
  // for (n = 3; ans <= 25;)
  //   ans = ans * n;
  // printf("n=%d;ans = %d\n", n, ans);

  // int num = 0;
  // for (printf("Keep entering numbers!\n"); num != 6;)
  //   scanf("%d", &num);
  // printf("That's the one I want!\n");

  /* 一类邮资 */
  // const int FIRST_OZ = 46;
  // const int NEXT_OZ = 20;
  // int ounces, cost;
  // printf("ounces cost\n");
  // for (ounces = 1, cost = FIRST_OZ; ounces <= 16; ounces++, cost += NEXT_OZ)
  //   printf("%5d $%4.2f\n", ounces, cost / 100.0);

  // int t_ct; // 项计数
  // double time, power_of_2;
  // int limit;
  // printf("Enter the number of terms you wan: ");
  // scanf("%d", &limit);
  // for (time = 0, power_of_2 = 1, t_ct = 1; t_ct <= limit; t_ct++, power_of_2 *= 2.0)
  // {
  //   time += 1.0 / power_of_2;
  //   printf("time=%f when terms = %d\n", time, t_ct);
  // }

  const int secret_code = 13;
  int code_entered;
  do
  {
    printf("To enter the triskaidekaphobia therapy club,\n");
    printf("pleas enter the seret code number: ");
    scanf("%d", &code_entered);

  } while (code_entered != secret_code);
  printf("Congratulations! You are cured!\n");

    return 0;
}