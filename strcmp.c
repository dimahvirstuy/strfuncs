/*
strcmp returns:
1 if string a is greater than string b
-1 if string b is greater than string a
0 is they are equal
Which one is greater is decided lexiconographically
*/

#include <stdio.h>
#include <stdlib.h>

int strcmp (char *a, char *b) {
  int i = 0;
  while (a[i]) {
    if ((int) a[i] > (int) b[i]) return -1;
    if ((int) b[i] > (int) a[i]) return 1;
  }
  if (b[i]) return 1;
  return 0;
}


int main() {
  char one[] = "Obama";
  char two[] = "Trump";
  char three[] = "Lincoln";
  char four[] = "Nixon";
  char five[] = "Washington";
  char six[] = "00293asdgjkd29";

  printf("%s compared to %s is: %d\n", one, two, strcmp(one, two));
  printf("%s compared to %s is: %d\n",three, four, strcmp(three, four));
  printf("%s compared to %s is: %d\n",one, six, strcmp(one, six));
  printf("%s compared to %s is: %d\n",five, two, strcmp(five, two));
  printf("%s compared to %s is: %d\n",five, six, strcmp(five, six));
  printf("%s compared to %s is: %d\n",one, one, strcmp(one, one));
}
