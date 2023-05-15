// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
char name[6];
char school[10];
int age;
}person1, person2;

int main () {
  strcpy(person1.name, "Nchas");
  person1.age = 19;
  strcpy(person1.school, "FUT Minna");

  strcpy(person2.name, "Palm");
  person2.age = 19;
  strcpy(person2.school, "Unimaid");

  printf("Person1.Name - %s\n", person1.name);
  printf("Person1.School - %s\n", person1.school);
  printf("Person1.age - %d\n", person1.age);

  printf("\n");
  printf("Person2.Name - %s\n", person2.name);
  printf("Person2.School - %s\n", person2.school);
  printf("Person2.age - %d\n", person2.age);
  return 0;
}
