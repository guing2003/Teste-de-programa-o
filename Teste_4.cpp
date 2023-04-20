#include <iostream>
using namespace std;

int main() {
    double distancia = 100; // km
    double velocidadeCarro = 110; // km/h
    double velocidadeCaminhao = 80; // km/h
    double tempoPedagio = 1.0 / 12; // horas

    double tempoCarro = distancia / velocidadeCarro;
    double tempoCaminhao = distancia / (velocidadeCaminhao - 2 * tempoPedagio);

    if (tempoCarro < tempoCaminhao) {
        cout << "O carro esta mais proximo de Ribeirao Preto.";
    } else {
        cout << "O caminhao esta mais proximo de Ribeirao Preto.";
    }

    return 0;
}
/* O programa calcula o tempo que cada veiculo leva para percorre a distancia entre as duas cidades. O calculo é feito divindo a distancia pela velocidade do veiculo, no caso do caminhao foi subtraido o tempo de cada pedagio, como o carro tem a tag não é necessario fazer essa subtracao.
Por fim o programa verifica qual veiculo leva menos tempo para percorrer a distancia entre as cidades*/



