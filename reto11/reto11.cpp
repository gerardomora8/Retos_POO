#include<iostream>
#include<vector>
using namespace std;

 

int solution(int A, int B, int K){
    //Paso 2
    int cont = 0;
    //Paso 3
    for(int i = A; i <= B; i++){
        //Paso 3.1
        if(i%K == 0){
        //Paso 3.1.1- Contador aumenta
         cont = cont+1;
        }
    }
    //paso 4
    return cont;
}

 

int main(){
    int A, B, K;
    cout<< "ingresa valor de A, parcero" << endl;
    cin>> A;
    cout<< "ingresa valor de B, parcero" << endl;
    cin>> B;
    cout<< "ingresa valor de K, parcero" << endl;
    cin>> K;
    cout<< "Tu resultado es" << endl;
    //Llamar a la funcion solucion y guardar en una variable resultado
    //Imprimir resultado
    int result;
    result = solution(A,B,K);
    cout<< result << endl;
}