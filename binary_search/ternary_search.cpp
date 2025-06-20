#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> vetor = {0, 0, 1, 2, 3, 4, 5, 4, 3, 2};

int ternarySearch(int l, int r) {
    while (r - l >= 2) {
        int m1 = l + (r - l) / 3;
        int m2 = r - (r - l) / 3;

        if (vetor[m1] < vetor[m2]) {
            l = m1 +1;
        } else {
            r = m2 -1;
        }
    }
    return vetor[l]; //atenção: é necessário verificar se o l é o index do maior,
    // as vezes pode ser r ou estar entre l e r
}

int main() {
    cout << ternarySearch(0, vetor.size() - 1); //index com o maior valor
    return 0;
}