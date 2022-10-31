#include <iostream>
using namespace std;


double cantidad, Precio, PrecioFinal, descuento1;

double descuento(double porcentaje){
  Precio= cantidad *800000;
  descuento1 = (Precio*porcentaje);
  PrecioFinal = Precio-descuento1;
  return PrecioFinal;
}
int main(){
  cout << "Tipo de estudios que deseas realizar en la Universidad Whalien (Da tu respuesta con la numeracion correspondiente)\n 1. Pregrado \n 2. Posgrado";
  cin >> cantidad;
  cout << "Cuál es tu promedio, en decimales (ej: 4.0 4.5)\n";
  cin >> promedio;

  if (cantidad < 5){
    cout<< "!Gano un descuento de 10%¡ El total de compra es de : "<< descuento(0.1);
    } else if (cantidad >= 5 && cantidad < 10){
      cout << "!Gano un descuento de 20%¡ El total de compra es de : "<< descuento(0.2);
      }else if (cantidad > 10){
        cout <<"!Gano un descuento de 0%¡ El total de compra es de : "<< descuento(0.4);
      }
}