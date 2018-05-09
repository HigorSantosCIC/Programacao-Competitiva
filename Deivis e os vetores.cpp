
Um dia Deivis se deparou com dois Vetores de inteiros A e B, e se perguntou, será que é possível formar o número X somando um elemento de A a outro elemento de B?

Mais formalmente, é possível escolher dois índices i e j tais que Ai + Bj = x?

Input
A primeira linha de entrada são dois inteiros n e x. A segunda linha contém n números, o vetor A. A terceira e última linha contém n números, o vetor B.

Output
Imprima 1 se for possível formar o número x a partir de uma soma de um elemento de cada vetor, e 0 caso contrário.

#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> a, b;
    int n, x, d, h = 0;
    cin >> n >> x;

    for(int i = 0; i < n; i++){
        scanf("%d", &d);
        a.push_back(d);
    }

    for(int i = 0; i < n; i++){
        scanf("%d", &d);
        b.push_back(d);
    }

    for (int i = 0; ((i < n) && !h); i++) {
        for(int j = 0; j < n; j++){
            if(a[i] + b[j] == x){
                h = 1;
                cout << 1 << "\n";
                break;
            }
        }
    }

    if(h == 0){
        cout << h << "\n";
    }

    return 0;
}