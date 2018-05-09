/*
Um dia deivis se deparou com um vetor de inteiros A de tamanho n , e se perguntou, a maior diferença entre dois números que estão um ao lado do outro neste vetor?

Input
A primeira linha de entrada é um número n. A segunda e última linha contém n números, o vetor A.

Output
Imprima a maior diferença entre dois elementos adjacentes no vetor A (em valor absoluto).
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int a, aux;
    cin >> a;

    vector<int>xd;

    for(int i =0;i<a;i++){
        cin >> aux;
        xd.push_back(aux);
    }
    int resultado = 0;

    for(int i =0;i<(a-1);i++){
        aux = abs(xd[i]-xd[i+1]);
        resultado = max(resultado, aux);
    }

    cout << resultado;
    

    return 0;
}
