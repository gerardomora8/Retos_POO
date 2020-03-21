#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int solution(vector<int> A){

    int contador = 0;
    sort(A.begin(), A.end());
    for(int i= 0; i < A.size(); i++){
        if(A[i] == A[0]){
         contador = contador - 1;
        }
        if(A[i] != A[i]+1){
        contador = contador + 1;
        }

    }

  return contador;
}


int main(){
    vector<int> A{2,1,1,2,3,1};
    cout << solution(A) << endl;
}