
Um dia deivis se deparou com um vetor X de números e se perguntou: quantos desses números são únicos? (Não se repetem).

Input
A primeira linha contém um número n, indicando a quantidade de números. A seguinte e última linha contém n números, os números do vetor X.

1 <  = n <  = 105

0 <  = Xi <  = 109

Output
Imprima a quantidade de números únicos.

#include <bits/stdc++.h>

using namespace std;

int main() {

    int m, h;
    cin >> m;
    vector<int> V;

    for (int i = 0; i < m; i++) {
        scanf("%d", &h);
        V.push_back(h);
    }

    sort(V.begin(), V.end());
    h = 0;

    for (int i = 0; i < m; i++) {
        if (V[i] != V[i + 1] && V[i] != V[i - 1]) {
            h++;
        }
    }

    cout << h;

    return 0;
}