Deivis tinha n pedrinhas guardadas na sua coleção de pedrinhas. Sua coleção estava ficando muito grande, então Deivis decidiu jogar fora pedrinhas repetidas. Deivis se pergunta quantas pedrinhas sobrarão após ele jogar essas pedrinhas fora.

Cada pedrinha é representada por uma sequencia de 5 caracteres do alfabeto inglês ('a'-'z').

Input
A primeira linha da entrada contém um inteiro n (1 <= n <= 105) - O tamanho da coleção de Deivis.

Depois seguem n linhas - A representação de cada uma das pedrinhas que Deivis tem.

Output
Imprima em uma única linha um inteiro - Quantas pedrinhas restarão.

#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, jp = 0;
    string s;
    vector<string> v;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> s;
        v.push_back(s);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++) {
        if(v[i] == v[i - 1]){
            jp++;
        }
    }

    cout << (n - jp) << "\n";
    return 0;
}