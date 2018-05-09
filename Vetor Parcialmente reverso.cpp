
Um dia Deivis se deparou com um vetor de inteiros A, de tamanho n. Deivis gostaria de saber como o vetor ficaria caso ele revertesse o subvetor delimitado pelos índices l e r.

Input
A primeira linha de entrada contém 3 inteiros: n(1 <= n <= 105), l e r.(1 <= l <= r <= n)

A segunda e última linha de entrada tem n inteiros, a1, a2, .., an (0 <= ai <= 1000)


#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k, r, x;
    vector<int> v;
    cin >> n >> k >> r;
    for(int i = 0; i < n; i++){
        scanf("%d", &x);
        v.push_back(x);
    }

    reverse(&v[k - 1], &v[r]);

    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    
    return 0;
}