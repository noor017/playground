#include <stdio.h>
#include <string.h>

int main (){
    int i, n, k, y, maior;
    while (scanf("%d", &i) && i != 0){
        int votos[i];
        memset(votos, 0, sizeof(votos));
        maior = votos[0];
        for (k = 0; k < i; ++k){
            for (y = 0; y < i; ++y){
                scanf("%d", &n);
                votos[y] += n;
                if (votos[y] > maior){
                    maior = votos[y];
                }
            }
        }
        printf("%d\n", maior);
    }
    return 0;
}
