#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_strcmp (char *a, char *b) {
  int i = 0;
  while (a[i]) {
    if (b[i] > a[i]) return a[i] - b[i];
    if (a[i] > b[i]) return a[i] - b[i];
    i++;
  }
  if (a[i]) return a[i];
  return 0;
}

int my_strlen( char *a ) {
  int i = 0;
  while (a[i]) i++;
  return i;
}

char * my_strcat(char *dest, char *source ) {
  int i = my_strlen(dest);
  int j = 0;
  while (source[j]) {
    dest[i] = source[j];
    i++;
    j++;
  }
  dest[i] = 0;
  return dest;
}

char * my_strchr(char * s, char c) {
  int i = 0; 
  while (s[i]) {
      if (s[i] == c) return &s[i];
      i++; 
  }
  return 0;
}

char * my_strncpy(char * dest, char * source, int n) {
  int i = 0; 
  while (source[i] && i < n) {
      dest[i] = source[i];
      i++;
  }
  dest[i] = 0;
  return dest;
}

int main() {
  char zero[100] = "hi";
  char one[] = "Obama";
  char two[] = "Trump";
  char three[] = "Lincoln";
  char four[] = "Nixon";
  char five[] = "Washington";
  char six[] = "00293asdgjkd29";
  char c = 'a';
  printf("\nstrcmp testing:\n\n");//strcmp testing
  printf("%s compared to %s is: %d\n", one, two, my_strcmp(one, two));
  printf("%s compared to %s is: %d\n",three, four, my_strcmp(three, four));
  printf("%s compared to %s is: %d\n",one, six, my_strcmp(one, six));
  printf("%s compared to %s is: %d\n",five, two, my_strcmp(five, two));
  printf("%s compared to %s is: %d\n",five, six, my_strcmp(five, six));
  printf("%s compared to %s is: %d\n\n",one, one, my_strcmp(one, one));

  printf("strcmp actual results:\n\n");
  printf("%s compared to %s is: %d\n", one, two, strcmp(one, two));
  printf("%s compared to %s is: %d\n",three, four, strcmp(three, four));
  printf("%s compared to %s is: %d\n",one, six, strcmp(one, six));
  printf("%s compared to %s is: %d\n",five, two, strcmp(five, two));
  printf("%s compared to %s is: %d\n",five, six, strcmp(five, six));
  printf("%s compared to %s is: %d\n\n",one, one, strcmp(one, one));

  printf("My strlen:\n");
  printf("%s is %d characters long\n",three, my_strlen(three));
  printf("%s is %d characters long\n",six, my_strlen(six));
  printf("%s is %d characters long\n\n",one, my_strlen(one));

  printf("Actual strlen:\n");
  printf("%s is %lu characters long\n",three, strlen(three));
  printf("%s is %lu characters long\n",six, strlen(six));
  printf("%s is %lu characters long\n",one, strlen(one));

  printf("\nstrcat is [%s]\n", strcat(zero, three));
  printf("my_strcat is [%s]\n", my_strcat(zero, three));

  printf("\nmy_strchr is [%s]\n", my_strchr(one, c)); // should be ama
  printf("strchr is [%s]\n", strchr(one, c)); // should be ama

  printf("\nmy strn_cpy: [%s]\n", my_strncpy(one, two, 5)); // should be Trump
  printf("strn_cpy: [%s]\n", strncpy(one, two, 5)); // should be Trump
}