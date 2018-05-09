
Um dia deivis se Deparou com um Vetor de inteiros A, que continha n números, e se perguntou: qual é o maior índice no vetor A tal que Ai >  = x?

Input
A primeira linha contem dois inteiros, n e x a segunda e última linha contém n inteiros, o vetor A.

Output
Imprima o maior índice do vetor A que satisfaz a propriedade deseajada. (indexado de 1 a n). Caso não haja nenhum número maior que X no vetor, imprima -1.

#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, p;
    cin >> x >> p;

    vector<int>comp;

    int aux = 0, pb;

    for(int i=0; i < x; i++){
        scanf("%d", &pb);
        comp.push_back(pb);        
    }
    for(int i=0; i < x ; i++){
        if(comp[i]>=p){
            aux = i+1;
        }
        if(aux == 0){
            aux = -1;
        }
    }
   
    cout << aux;
    return 0;
}