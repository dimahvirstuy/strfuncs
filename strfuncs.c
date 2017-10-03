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

int strlen( char *a ) {
  int i = 0;
  while (a[i]) i++;
  return i;
}

char * strcat( char *dest, char *source ) {
  int i = 0; 
  while (dest[i]) i++;
  int j = 0;
  while (source[j]) {
    dest[i] = source[j];
    i++;
    j++;
  }
  return dest;

}

int main() {
  char one[] = "Obama";
  char two[] = "Trump";
  char three[] = "Lincoln";
  char four[] = "Nixon";
  char five[] = "Washington";
  char six[] = "00293asdgjkd29";
  //strcmp testing
  printf("%s compared to %s is: %d\n", one, two, strcmp(one, two));
  printf("%s compared to %s is: %d\n",three, four, strcmp(three, four));
  printf("%s compared to %s is: %d\n",one, six, strcmp(one, six));
  printf("%s compared to %s is: %d\n",five, two, strcmp(five, two));
  printf("%s compared to %s is: %d\n",five, six, strcmp(five, six));
  printf("%s compared to %s is: %d\n",one, one, strcmp(one, one));
  //strlen testing
  printf("%s is %d characters long\n",three, strlen(three));
  printf("%s is %d characters long\n",six, strlen(six));
  printf("%s is %d characters long\n",one, strlen(one));
  //strcat testing
  printf("%s concatinated to %s is: %s\n",one, one, strcat(one, three));
  printf("%s concatinated to %s is: %s\n",one, one, strcat(two, five));
  printf("%s concatinated to %s is: %s\n",one, one, strcat(three, six));

}
