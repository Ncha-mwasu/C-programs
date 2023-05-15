#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Learning to use struct pointers
 * 
 */

 struct School {
    char name[10];
    char state[10];
    int campuses;
 };

 int main (void){
    struct School *sch, school1;
    sch = &school1;
    strcpy(school1.name, "Unimaid");
    strcpy(school1.state, "Borno");
    school1.campuses = 1;
    sch->campuses = 2;

    printf("School1->name - %s\n", sch->name);
    printf("School1->state - %s\n", sch->state);
    printf("School1->campuses - %d\n", sch->campuses);
    return 0;
 }