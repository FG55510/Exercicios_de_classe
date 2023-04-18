#include <iostream>
#include <cmath>
using namespace std;

//classe diferente da principal
class Triangulo {
private:
    double a, b, c;
public:
    Triangulo (double lado1, double lado2, double lado3){
        a = lado1;
        b = lado2;
        c = lado3;
    }
    
    //funcao que ira receber o valor dos dados e retornar a area dos triangulos
    double calculaArea(){
        double p = (a + b + c) /2.0;
        double area = sqrt(p * (p - a) * (p - b) * (p - c));
        return area;
    }
    
    //proxima aula
    double getLado1() {return a;}
    double getLado2() {return b;}
    double getLado3() {return c;}
};

int main() {
    double xa, xb, xc, ya, yb, yc;
    
    //interface para o usuario e armazenamento dos tamanho dos lados digitados criando um objecto da classe triangulo com as informacoes fornecidas
    cout << "Digite as medidas do triangulo X: " << endl;
    cin >> xa >> xb >> xc;
    Triangulo X(xa, xb, xc);
    
    //interface para o usuario e armazenamento dos tamanho dos lados digitados criando um objecto da classe triangulo com as informacoes fornecidas
    cout << "Digite as medidas do triangulo Y: " << endl;
    cin >> ya >> yb >> yc;
    Triangulo Y(ya, yb, yc);
    
    //armazenamento do valor retornado pela funcao da area localizado na classe triangulo na funcao principal
    double areax = X.calculaArea();
    double areay = Y.calculaArea();
    
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
    return 0;
}
