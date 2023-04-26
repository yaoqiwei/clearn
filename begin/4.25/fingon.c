#include <stdio.h>

int main()
{
  // const char *p1 = "Klingon";
  // printf("char:%p\n", p1);
  const char *mesg = "Don't be a fool!";
  const char *copy;
  copy = mesg;
  printf("%s\n", copy);
  printf("mesg = %s; &mesg = %p; value = %p\n", mesg,
         &mesg, mesg);
  printf("copy = %s; &copy = %p; value = %p\n", copy,
         &copy, copy);
  return 0;
}