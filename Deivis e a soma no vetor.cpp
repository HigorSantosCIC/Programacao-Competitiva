/*
Um dia deivis se deparou com um vetor de inteiros A de tamanho n , e se perguntou, qual a soma dos números nesse vetor?

Input
A primeira linha de entrada é um número n. A segunda e última linha contém n números, o vetor A.

Output
Imprima a soma dos elementos de A

*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int a;

    cin >> a;

    int vetor[a];

    for(int i =0;i<a;i++){
        scanf("%d", &vetor[i]);
    }
int soma = 0;
    for(int i =0;i<a;i++){
        soma +=vetor[i];
    }    
cout << soma;
    return 0;
}