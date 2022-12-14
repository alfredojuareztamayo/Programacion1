#include <iostream>
using namespace std;

int main()
{

  string OracionAChecar;
  std::cout << "Dime una oración que quiera comprobar si es palindromo: ";
  std::cin >> OracionAChecar;
  string OracionRevisada;

  for (int n = OracionAChecar.length() - 1; n >= 0; n--)
  {
    OracionRevisada.push_back(OracionAChecar[n]);
  }

  if (OracionAChecar == OracionRevisada)
  {
    std::cout << "La oracion escrita es un palindromo ";
  }
  else
  {
    std::cout << "La oracion escrita no es un palindromo ";
  }
}