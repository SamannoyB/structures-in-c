#include <stdio.h>
#include <string.h>

struct People {
    int age;
    int dd;
    int mm;
    int yyyy;
} student1, student2;

int main () {
    printf("Enter student 1 age: \n");
    scanf("%d", &student1.age);
    printf("Enter student 1 birth date: \n");
    scanf("%d", &student1.dd);
    printf("Enter student 1 birth month: \n");
    scanf("%d", &student1.mm);
    printf("Enter student 1 birth year: \n");
    scanf("%d", &student1.yyyy);
    printf("Enter student 2 age: \n");
    scanf("%d", &student2.age);
    printf("Enter student 2 birth date: \n");
    scanf("%d", &student2.dd);
    printf("Enter student 2 birth month: \n");
    scanf("%d", &student2.mm);
    printf("Enter student 2 birth year: \n");
    scanf("%d", &student2.yyyy);
    printf("Student 1 age is %d and was born on %d/%d/%d \n", student1.age, student1.dd, student1.mm, student1.yyyy);
    printf("Student 2 age is %d and was born on %d/%d/%d \n", student2.age, student2.dd, student2.mm, student2.yyyy);

  return 0;
}

