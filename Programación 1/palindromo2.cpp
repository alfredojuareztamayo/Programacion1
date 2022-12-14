#include <iostream>
#include <string>
using namespace std;

int main()
{

  string OracionAChecar = "sometamos o somatemos";
  /* std::cout << "Dime una oración que quiera comprobar si es palindromo: ";
  std::cin >> OracionAChecar;*/
  string OracionRevisada;

  string str = OracionAChecar;

  str.erase(std::remove(str.begin(), str.end(), ' '), str.end());

  for (int n = str.length() - 1; n >= 0; n--)
  {
    OracionRevisada.push_back(str[n]);
  }

  if (str == OracionRevisada)
  {
    std::cout << "La oracion escrita es un palindromo ";
  }
  else
  {
    std::cout << "La oracion escrita no es un palindromo ";
  }
}