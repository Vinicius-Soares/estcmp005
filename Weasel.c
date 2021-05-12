#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
  char target[29] = "METHINKS IT IS LIKE A WEASEL";
  char alphabet[28] = " ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char random[29] = "";
  random[28] = '\0';

  srand(time(NULL));

  for (int i = 0; i < 28; i++)
  {
    random[i] = alphabet[rand() % 27];
  }

  printf("Random String: %s\n", random);

  int cont = 1;
  while (strcmp(target, random))
  {
    char copies[100][29];
    int bigger_value = 0;
    int bigger_value_idx = 0;

    for (int i = 0; i < 100; i++)
    {
      int value = 0;
      strcpy(copies[i], random);
      for (int j = 0; j < 29; j++)
      {
        if (rand() % 100 < 5)
        {
          copies[i][j] = alphabet[rand() % 27];
        }
        if (copies[i][j] == target[j])
        {
          value++;
        }
      }

      if (value > bigger_value)
      {
        bigger_value = value;
        bigger_value_idx = i;
      }
    }
    strcpy(random, copies[bigger_value_idx]);
    printf("Actual String: %s, Generation: %d\n", random, cont);
    cont++;
  }

  return 0;
}