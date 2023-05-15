#include <stdio.h>
#include <string.h>

typedef struct Car {
    char name[20];
    char model[10];
    int year;
} car;

int main(void){
    car *car_ptr, car1;
    car_ptr = &car1;

    strcpy(car_ptr->name, "Mercedes");
    strcpy(car_ptr->model, "C350");
    car_ptr->year = 2021;

    printf("Car->name - %s\n", car_ptr->name);
    printf("Car->model - %s\n", car_ptr->model);
    printf("Car->year - %d", car_ptr->year);
    return 0;
}