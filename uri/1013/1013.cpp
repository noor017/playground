#include <cstdio>
#include <cmath>

int main(){
    int a, b, c, m;
    scanf("%d %d %d", &a, &b, &c);
    m = (a + b + std::abs(a - b)) / 2;
    m = (m + c + std::abs(m - c)) / 2;
    printf("%d eh o maior\n", m);
}
