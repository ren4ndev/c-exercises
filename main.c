#include <stdio.h>

int main()
{
  int age, year;
  float height;
  char name[30];

  printf("Digite seu nome: ");
  scanf("%s", name);

  printf("Digite sua idade: ");
  scanf("%d", &age);

  printf("Digite sua altura: ");
  scanf("%f", &height);

  year = 2024 - age;

  printf("\nO nome e: %s", name);
  printf("\nA altura e: %.2f", height);
  printf("\nA idade e: %d", age);
  printf("\nO ano de nascimento e: %d", year);

  return (0);
}