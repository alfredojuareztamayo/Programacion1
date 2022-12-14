#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

  string OracionAChecar = "acaso hubo buhos aca";
  /* std::cout << "Dime una oración que quiera comprobar si es palindromo: ";
  std::cin >> OracionAChecar;*/
  string OracionRevisada;

  std::remove(OracionAChecar.begin(), OracionAChecar.end(), ' ');

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
    std::cout << "La oracion escrita no es un palindromo " << endl;

    cout << OracionAChecar << endl;
    cout << OracionRevisada << endl;
  }
}