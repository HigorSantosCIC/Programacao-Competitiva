
Deivis um dia se deparou com uma string S. Deivis é curioso e pensou: quais serão todas as subsequências de S? Ajude-o com esse problema.

Uma subsequência é qualquer cadeia que pode ser obtida excluindo alguns(possivelmente nenhum) dos caracteres da string original.

Input
A primeira e única linha contém a string S (1 <= |S| <= 10).

Output
Imprima todas as substrings de S, ordenadas pela ordem do dicionário.

#include <bits/stdc++.h>

using namespace std;

int main(){

    string s, h;
    cin >> s;
    vector<string> v;

    int n = s.size();

    for (int i = 1; i < (1 << n); ++i) {
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                h += s[j];
            }
        }
        v.push_back(h);
        h.erase();
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << "\n";
    }

    return 0;
}