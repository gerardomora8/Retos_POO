#include<iostream>
#include<vector>
#include <stdlib.h>

using namespace std;

int solution(vector<int> A){
    int min = 100000000;
    int N = A.size();

    for(int P = 1; P < N; P++){
        vector<int> parte1(A.begin(), A.end()-(N-P));
        vector<int> parte2(A.begin()+P, A.end());

        int suma1 = 0;
        for(int i = 0; i < parte1.size(); i++){
           suma1 = suma1 + parte1[i];
        }

        int suma2 = 0;
        for(int i = 0; i < parte2.size(); i++){
           suma2 = suma2 + parte2[i];
        }

        int ValorActual = abs(suma1 - suma2);

        if (ValorActual < min){
            min = ValorActual;
        }
    }

    return min;

}

int main(){
    vector<int> A{3, 1, 2, 4, 3};
    cout << solution(A) << endl;
}