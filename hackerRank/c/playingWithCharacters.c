#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

int main ()
{
  char ch;
  char s[100], sen[1000];
  
  scanf("%[^\n]%*c", &ch);
  scanf("%[^\n]%*c", &s);
  scanf("%[^\n]%*c", &sen);

  printf("%c\n%s\n%s", ch, s, sen);
  return 0;
}
