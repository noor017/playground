#include <iostream>
#include <cstring>
#include <cstdio>

int main(){
    char e[1001];
    int d, n, c, i;

    std::cin >> n;
    getchar(); // pra obrigar o cursor ir para a linha de baixo
    while (n--){
        c = 0;
        i = 0;
        gets(e);

        for (d = 0; d < (int) strlen(e); d++){
            if (e[d] == '<'){
                i++;
            } else if (e[d] == '>' && i - 1 >= 0){
                i--;
                c++;
            }
        }
        std::cout << c << std::endl;
    }
    return 0;
}
