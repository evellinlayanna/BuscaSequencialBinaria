// Implemente em C a versão recursiva da busca sequencial

// Possivel implementacao da busca sequencial
// int buscaSequencial(int c, int n, int v[]) {
//   for (int i = 0; i < n; i++) {
//     if (v[i] == c && v[i] <= c) {
//       return i;
//     }
//     return -1;
//   }
// }

// A busca é sequencial pois ela percorre o vetor inteiro, comparando cada
// elemento dentro do vetor com o elemento procurado
// A funcao é recursiva pois ela chama a si mesma a cada iteração
// c é o elemento procurado
// n é o tamanho do vetor
// i é o inicio do vetor

#include <stdio.h>

int buscaSequencialRecursiva(int c, int n, int v[], int i) {
  if (i == n) {
    return -1; // Elemento não encontrado
  } else if (v[i] == c) {
    return i; // Elemento encontrado na posição i
  } else {
    return buscaSequencialRecursiva(c, n, v,
                                    i + 1); // Continua a busca recursivamente
  }
}

int main() {
  int n, c;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);

  int v[n]; // Vetor de tamanho n

  printf("Digite os %d elementos do vetor em ordem crescente:\n", n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }

  printf("Digite o elemento a ser procurado: ");
  scanf("%d", &c);

  int posicao = buscaSequencialRecursiva(c, n, v, 0);
  if (posicao != -1) {
    printf("O elemento %d está presente no vetor na posição %d\n", c);
  } else {
    printf("O elemento %d não está presente no vetor\n", c);
  }

  return 0;
}