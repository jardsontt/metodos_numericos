#include<iostream>
#include"newton_raphson.h"

using namespace std;

int main(){
    double pontos[10];
    pontos[0] = 10;

    if(newton_raphson(pontos,0.00001)) for(int i = 0; i < 10; i++){ cout << pontos[i] << "\n"; }
    else cout << "numero de operacao excedida, ultimo ponto: " << pontos[10] << "\n tente novamente!" << "\n";
    
    return 0;
}
