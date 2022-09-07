#include<math.h>
double fn(double x){
    return pow(x,3) - 9*x + 3;
}
double der_fun(double x){
    return (3 * pow(x,2)) - 9;
}
double def_der(double x){
    double h = 0.0001;
    return (fn(x + h) - fn(x)) / h;
}
double erro_absoluto(double ponto_x, double x_barra){
    //escrever a funcao do erro
    return -1;
}
bool newton_raphson(double * ponto_x, double precisao){
    int i = 0;
    while(fabs(fn(ponto_x[i])) > precisao){
        ponto_x[i + 1] = ponto_x[i] - (fn(ponto_x[i])/der_fun(ponto_x[i]));
        i++;
        if(i > 10) return false;
    }
    return true;
}