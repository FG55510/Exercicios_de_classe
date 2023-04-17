#include <iostream>
#include <cmath>
using namespace std;

//funcao que ira receber o valor dos dados e retornar a area dos triangulos
double CalcularAreaTri(double a, double b, double c){
    double p = (a + b + c)/2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
    double xa, xb, xc, ya, yb, yc;
    
    //interface para o usuario e armazenamento dos tamanho dos lados digitados
    cout << "Digite as medidas do triangulo X: " << endl;
    cin >> xa >> xb >> xc;
    
    //interface para o usuario e armazenamento dos tamanho dos lados digitados
    cout << "Digite as medidas do triangulo Y: " << endl;
    cin >> ya >> yb >> yc;
    
    //armazenamento do valor retornado pela funcao da area na funcao principal
    double areax = CalcularAreaTri(xa,xb,xc);
    double areay = CalcularAreaTri(ya,yb,yc);
    
    //interface informando as areas do triangulo para o usuario
    cout << "Area triangulo X: " << areax << "\n" << "Area triangulo Y:" << areay << endl;
    
    //comando para mostrar qual a base maior em cada caso
    if (areax > areay){
        cout << "O triangulo X tem a area maior." << endl;
    } else if (areax < areay){
        cout << "O triangulo Y tem a area maior." << endl;
    } else{
        cout << "Os dois triangulos tem a mesma area." << endl;
    }
}