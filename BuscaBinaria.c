// Implemente em C a versão recursiva da busca binaria

// Possivel implementacao da busca binária
// int buscaBinaria(int c, int n, int v[]) {
//   int i = 0, f = n = -1, m;
//   while (i < f) {
//     m = (i + f) / 2;
//     if (c > v[m]) {
//       i = m + 1;
//     } else {
//       f = m;
//     }
//   }

// A busca é binaria pois ela divide o vetor em duas partes
// e compara o elemento procurado com o elemento do meio do vetor
// é recursiva pois ela chama a si mesma a cada iteração
// c é o elemento procurado
// n é o tamanho do vetor i é o
// inicio do vetor f é o fim do vetor m é o meio do vetor

#include <stdio.h>

int buscaBinariaRecursiva(int c, int n, int v[], int i, int f) {
  if (i >= f) {
    return -1; // Elemento não encontrado
  }

  int m = (i + f) / 2; // Calcula o meio do intervalo

  if (c == v[m]) {
    return m; // Elemento encontrado na posição m
  } else if (c > v[m]) {
    return buscaBinariaRecursiva(c, n, v, m + 1, f); // Busca na metade direita
  } else {
    return buscaBinariaRecursiva(c, n, v, i, m); // Busca na metade esquerda
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

  int posicao = buscaBinariaRecursiva(c, n, v, 0, n - 1);

  if (posicao != -1) {
    printf("O elemento %d está presente no vetor na posição %d\n", c, posicao);
  } else {
    printf("O elemento %d não está presente no vetor\n", c);
  }

  return 0;
}