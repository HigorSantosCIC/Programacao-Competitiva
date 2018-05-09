
Um dia deivis se Deparou com um inteiro n e se perguntou: Qual é o n-ésimo número da sequência de fibonacci?

A definição de fibonacci pra esse problema é:

f0 = 0

f1 = 1

fn = fn - 1 + fn - 2

Input
A única linha de entrada contém um inteiro n

Output
Imprima o n-ésimo número da sequencia de fibonacci

#include <bits/stdc++.h>

using namespace std;

int main(){
    int x;
    cin >> x;
    //qual valor?

    int fibbo[2] = {0,1};
    int aux;

    for (int i = 0; i<x; i++){
        aux = fibbo[1];
        fibbo[1] = fibbo[0]+ aux;
        fibbo[0] = aux;        
    }

    cout << fibbo[0] << endl;

    return 0;
}
