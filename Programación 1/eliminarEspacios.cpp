#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  string cadena = "Artek Segundo Trimestre";

  cout << cadena << endl;

  std::remove(cadena.begin(), cadena.end(), ' ');

  cout << cadena << endl;
}