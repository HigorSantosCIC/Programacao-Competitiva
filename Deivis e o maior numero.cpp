/*

Um dia deivis se Deparou com um Vetor de inteiros A, que continha n números, e se perguntou: Qual o maior número no vetor A?

Input
A primeira linha de entrada é um número n. A segunda e última linha contém n números, o vetor A.

Output
Imprima o maior número do vetor A
*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    int a, aux;
    cin >> a;

    vector<int> p;
    for(int i =0;i<a;i++){
        scanf("%d", &aux);
        p.push_back(aux);
    }
    sort(p.begin(), p.end());

    cout << p.back();

    return 0;
}