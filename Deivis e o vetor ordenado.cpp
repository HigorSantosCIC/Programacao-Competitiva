
Um dia Deivis se deparou com um Vetor A que continha n inteiros, e queria ordená-lo de maneira crescente. Mas Deivis não sabe fazer isso, ajude Deivis.

Input
A primeira linha contém um inteiro n (1 <= n <= 105). - O tamanho do vetor

A segunda linha contém n inteiros a1, a2, .., an (0 <= ai <= 109) - O vetor A

Output
Imprima em uma única linha n inteiros separados por espaço - O vetor ordenado.

#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<long long int> a;
    int k;
    long long int m;

    cin >> k;

    for (int i = 0; i < k; i++) {
        cin >> m;
        a.push_back(m);
    }

    sort(a.begin(), a.end());

    for(int j = 0; j < k; j++){
        cout << a[j] << " ";
    }

    return 0;
}