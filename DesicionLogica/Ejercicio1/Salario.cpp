#include <iostream>
using namespace std;

int main(){
  string nombre;
  int salario, hora, salarioT;

  cout << "Ingresa tu nombre: \n";
  cin >> nombre;
  cout << "Ingresa valor de salario por hora: \n";
  cin >> salario;
  cout << "Cuantas horas trabajaste: \n";
  cin >> hora;

  salarioT = salario*hora;

  if(salarioT>450000){
    cout<< nombre<< " tu salario total es de $"<< salarioT;
  }else{
    cout<< nombre;
  }
}