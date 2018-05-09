
Dada uma string S cujos caracteres são todos distintos, imprima todas as permutações de S na ordem lexicográfica. É garantido que a string S é a primeira de todas na ordem lexicográfica.

Input
A entrada consiste de uma sequência de caracteres - A string S (1 <= |S| <= 6).

Output
Imprima todas as permutações de S na ordem lexicográfica.

#include <bits/stdc++.h>

using namespace std;

void perm_s(string s, int x);

int main(){
    string s;
    cin >> s;

    perm_s(s, 0);

    return 0;
}

void perm_s(string s, int x){
    if( x == s.size() ){
        cout << s << "\n";
    } else {

        for(int i = x; i < s.size(); i++){
            swap(s[i], s[x]);
            perm_s(s, x + 1);
        }
    }
}