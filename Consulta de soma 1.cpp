
Um dia Deivis se deparou com um vetor A de n inteiros. Foi então que Deivis pensou em q pares de números (l, r), e ficou curioso. Ele gostaria de saber, para cada par de números (l, r), qual é a soma dos inteiros nesse intervalo de índices no vetor.

Input
A primeira linha contém dois inteiros n (1 <= n <= 105) e q (1 <= q <= 105) - O tamanho do vetor, e o número de pares que Deivis pensou.

A segunda linha contém n inteiros A1, A2, ..., An ( - 107 <= Ai <= 107) - O vetor A.

Depois seguem q linhas, em cada uma, há dois inteiros, l e r (1 <= l <= r <= n) - Os pares (l, r) que Deivis pensou.

Output
Imprima q linhas, na i-ésima linha, deve-se estar a resposta para o i-ésimo par de números.


#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, q, l, r;

    scanf("%d %d", &n, &q);

    long long int k[n + 1] = {};

    for (int i = 1; i <= n; i++) {
        scanf("%I64d", &k[i]);

        k[i] += k[i - 1];
    }

    for (int i = 0; i < q; i++) {
        scanf("%d %d", &l, &r);

        printf("%I64d\n", k[r] - k[l - 1]);
    }

    return 0;
}