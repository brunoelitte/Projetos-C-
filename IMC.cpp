#include <iostream>
#include <iomanip> /*pra usar a expressão cout << fixed <<setprecision() */
using namespace std;
int main() 
{
float imc, peso, altura;
  cout<< "\n Digite seu peso!\n";
  cin>> peso;
  cout<< "Digite sua altura!\n";
  cin>>altura;
  imc=peso/(altura*altura);/*altura ao quadrado é mesma coisa que altura*altura*/
  cout << fixed << setprecision(1);/*essa linha serve pra definir a quantidade de casas decimais ao mostrar o resultado, o número passado em setprecision indica a quantidade de casas que a gente quer */
  cout<< " \n indice de Massa Corporal= "<<imc<<endl;

  if(imc<18.5)
    {
      cout<< "Obs: Voce esta abaixo do peso\n";
     }
  if(imc>=18.5 && imc<24)
    {
      cout<< "Obs: Voce esta com peso normal\n";
     }
  if(imc>=24 && imc<29)
    {
      cout<< "Obs: Voce esta acima do peso \n";
     }
  if(imc>29)
    {
      cout<< "Obs: Infelizmente, Voce esta obeso\n";
     }
  
}
