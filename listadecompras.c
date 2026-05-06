#include <stdio.h>

int main() {
    long n;
    if (scanf("%ld", &n) != 1) return 0;
    long lista[100000];
    long topo = 0;
    long itens_validos_encontrados = 0;
    while (itens_validos_encontrados < n) {
        long valor;
        if (scanf("%ld", &valor) != 1) break;
        if (valor == 0) {
            if (topo > 0) {
                topo--;
                itens_validos_encontrados--;
            }
        } else {
            lista[topo] = valor;
            topo++;
            itens_validos_encontrados++;
        }
    }
    long total = 0;
    for (int i = 0; i < topo; i++) {
        total += lista[i];
    }
    printf("%ld\n", total);
}