#include <bits/stdc++.h>
using namespace std;
//Quero saber o primeiro elemento que não satifaz uma condição (upperbound)
vector<int> vetor = {0, 0, 0, 0, 0, 5, 5, 5, 5, 5};

int upperbound(int l, int r, int x) {
    while (l < r) {
        int mid = (l + r) / 2;
        if (vetor[mid] <= x)
            l = mid + 1;
        else
            r = mid;
    }
    return l;  // índice do primeiro elemento maior que x
}

int main(){
    int x = 0;
    cout << upperbound(0, vetor.size(), x) << endl; 
    cout << (upper_bound(vetor.begin(), vetor.end(), x) - vetor.begin()) << endl; // converte iterador para índice
}
