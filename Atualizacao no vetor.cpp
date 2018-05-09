
Um dia Deivis se deparou com um vetor A de n inteiros, inicialmente com todas suas posições iguais a 0. Foi então que Deivis pensou em q ternas de números (l, r, x), e ficou curioso. Se cada uma dessas ternas representasse uma atualização no vetor, de forma que todos as posições de índices i tais que l <= i <= r tivessem x adicionados ao seu valor, qual seria o estado final do vetor?

Input
A primeira linha contém dois inteiros n (1 <= n <= 105) e q (1 <= q <= 105) Depois seguem q linhas, em cada uma, há trẽs inteiros, l, r e x(1 <= l <= r <= n e ( - 107 <= x <= 107) - As ternas (l, r, x) que Deivis pensou.

Output
Imprima em uma única linha n inteiros separados por espaço. - O estado final do vetor.

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n, b, l, r, x;
    scanf("%d %d", &n, &b);
    long long op = 0;
    vector<long long> V(n, 0), Aux(n, 0);

    for (int i = 0; i < b; i++) {
        scanf("%d %d %d", &l, &r, &x);
        Aux[l - 1] += x;
        if (r < n) {
            Aux[r] -= x;   
        }
    }

    for (int i = 0; i < n; i++) {
        op += Aux[i];
        V[i] = op;
    }

    for (int i = 0; i < n; i++) {
        cout << V[i] << " ";
    }

    return 0;
}