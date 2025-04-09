#include <stdio.h>
#include <stdlib.h>

int main()
{
  // char name[] = "Alif";
  // int age = 20;
  // float gpa = 3.5;
  // char avg_grade = 'A';
  char name[20];
  int age;
  float gpa;
  char avg_grade;

  printf("Enter your average grade:\n");
  scanf("%c", &avg_grade);
  printf("Enter your name:\n");
  fgets(name, 20, stdin);
  printf("Enter your age:\n");
  scanf("%d", &age);
  printf("Enter your gpa:\n");
  scanf("%f", &gpa);

  printf("Hello Alif welcome ot the program\n");
  printf("You are %d years old.\n", age);
  printf("And your gpa is %f", gpa);
  printf("And your average age is %c", avg_grade);

  return 0;
}