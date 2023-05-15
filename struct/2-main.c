#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Person {
char name[10];
char school[10];
int age;
}person;

int main (void) {
    person p1, p2;
    strncpy(p1.name, "Elisha", sizeof(p1.name));
    strncpy(p1.school, "Evangel", sizeof(p1.school));
    p1.age = 17;

    strncpy(p2.name, "Palm", sizeof(p2.name));
    strncpy(p2.school, "Shalara", sizeof(p2.school));
    p2.age = 16;

    printf("Person1.Name - %s\n", p1.name);
    printf("Person1.School - %s\n", p1.school);
    printf("Person1.age - %d\n", p1.age);

    printf("\n");
    printf("Person2.Name - %s\n", p2.name);
    printf("Person2.School - %s\n", p2.school);
    printf("Person2.age - %d\n", p2.age);
    return 0;
}