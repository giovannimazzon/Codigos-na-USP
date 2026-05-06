#include <stdio.h>

int main() {
    int principes;
    scanf("%d", &principes);
    int vencedor = -1;
    long long max_poder_total = -1;
    int max_guarda_original = -1;
    for (int i = 1; i <= principes; i++) 
    {
        int poder_principe, qtd_guardas;
        scanf("%d %d", &poder_principe, &qtd_guardas);
        long long soma_forcas_local = 0;
        int maior_guarda_local = -1;
        for (int j = 0; j < qtd_guardas; j++) 
        {
            int forca_atual;
            scanf("%d", &forca_atual);
            soma_forcas_local += forca_atual;
            if (forca_atual > maior_guarda_local) 
                maior_guarda_local = forca_atual;
        }
        long long poder_total_atual = soma_forcas_local * poder_principe;
        int ganhou = 0;
        if (vencedor == -1) 
            ganhou = 1; 
        else if (poder_total_atual > max_poder_total) 
            ganhou = 1; 
        else if (poder_total_atual == max_poder_total) 
        {
            if (maior_guarda_local > max_guarda_original)
                ganhou = 1;
        }
        if (ganhou) 
        {
            max_poder_total = poder_total_atual;
            max_guarda_original = maior_guarda_local;
            vencedor = i;
        }
    }
    printf("O vencedor e o Principe %d\n", vencedor);
}