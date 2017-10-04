#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_strcmp (char *a, char *b) {
  int i = 0;
  while (a[i]) {
    if (a[i] > b[i]) return -1;
    if (b[i] > a[i]) return 1;
    i++;
  }
  if (b[i]) return 1;
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
  printf("%s compared to %s is: %d\n",one, one, my_strcmp(one, one));
  printf("\nstrlen testing:\n\n");//strlen testing
  printf("%s is %d characters long\n",three, my_strlen(three));
  printf("%s is %d characters long\n",six, my_strlen(six));
  printf("%s is %d characters long\n",one, my_strlen(one));
  printf("\nstrcat testing:\n\n");//strcat testing 
  printf("%s concatenated to %s is: %s\n",one, three, my_strcat(one, three));
  printf("%s concatenated to %s is: %s\n",two, five, my_strcat(two, five));
  printf("%s concatenated to %s is: %s\n",three, six, my_strcat(three, six)); 
  printf("\nstrchr testing:\n\n");
  printf("%s\n", one);
  printf("The substring after character %c in string %s is %s\n", c, one, my_strchr(one, c)); // should be ama
  printf("THe substring after character %c in string %s is %s\n", c, four, my_strchr(four, c)); // should be null
  printf("\nstrcpy testing:\n\n");
  printf("After copying %d characters of %s to %s, the result is: %s\n", 5, two, one, my_strncpy(one, two, 5)); // should be Trump
  printf("After copying %d characters of %s to %s, the result is: %s\n", 5, three, one, strncpy(one, three, 5)); // should be Linco
}