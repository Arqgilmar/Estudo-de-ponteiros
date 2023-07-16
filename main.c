#include <stdio.h>

void potencia(int num, int num2){
  int res = 1;
    
    for(int i = 0; i < num2; i++){
      res = res * num;
    }

  printf("O resultado é %d\n", res);
}

int main(void) {
  
  int n1, n2;
  
  printf("Digite um número: \n");
  scanf("%d", &n1);
  printf("Digite o expoente: \n");
  scanf("%d", &n2);
  
  potencia(n1, n2);
  
  return 0;
}
