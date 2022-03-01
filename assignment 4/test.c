#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int comp( const void *a, const void *b) {
  return *(char*)a - *(char*)b;
}

int main()
{
  int k;
  scanf("%d", &k);
  char str1[100000];
  char str2[100000];
  scanf("%[^\n]%*c", str1);
  scanf("%[^\n]%*c", str2);
  int n1 = strlen(str1);
  int n2 = strlen(str2);
  if (n1 != n2)
  {
    printf("False\n");
    exit(0);
  }

  for (int i = 0; i < n1; i++)
  {
    if (str1[i] != 32)
    {
      if (str1[i] + k > 'z')
      {
        str1[i] = str1[i] + k - 26;
      }
      else
      {
        str1[i] = str1[i] + k;
      }
    }
  }

  qsort(str1, n1, sizeof(char), comp);
  qsort(str2, n2, sizeof(char), comp);
  if (strcmp(str1, str2) == 0)
  {
    printf("True\n");
  }
  else
  {
    printf("False\n");
  }
}