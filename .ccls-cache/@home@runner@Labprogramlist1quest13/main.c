#include <stdio.h>

int main(void) {
 int A;
  int B;
  int C;
  printf("Digite um número para A ");
  scanf("%d",&A);
  printf("Digite outro número para B",&B);
  scanf("%d",&B);
  C=A;
  A=B;
  B=C;
  printf("A = %d\n ",A);
  printf("B = %d\n ",B);
  return 0;
}