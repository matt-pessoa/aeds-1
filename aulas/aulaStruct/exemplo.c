#include <stdio.h>
#include <string.h>

struct Student
{
  char name[25];
  int age;
  char gender[2];
};

int main()
{
  struct Student firstStudent, secondStudent;

  firstStudent.age = 18;
  strcpy(firstStudent.name, "Livia");
  strcpy(firstStudent.gender, "F");

  secondStudent.age = 22;
  strcpy(secondStudent.name, "Paul");
  strcpy(secondStudent.gender, "M");

  printf("Name: %s\n", firstStudent.name);
  printf("Age: %d\n", firstStudent.age);
  printf("Gender: %s\n", firstStudent.gender);

  printf("Name: %s\n", secondStudent.name);
  printf("Age: %d\n", secondStudent.age);
  printf("Gender: %s\n", secondStudent.gender);

  return 0;
}
