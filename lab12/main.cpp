#include <iostream>
#include <string>
#include <stdexcept>

#define CONTEXT "Plik: "<<__FILE__<<" Linia: "<<__LINE__<< ": " 

#include "assoc.h"

using namespace std;

int main() {
  cout << "***** Tablica z kluczem napisowym *****" << endl;
  Assoc<std::string, int> m;
  m.insert("styczen", 2999 ); 
  m.insert("luty", 2500 ); 
  m.print("Element tablicy");
  m["marzec"] = 1850;
  m["luty"] = 666;
  cout << "Czy tak mozna dodac element zerowy? " << m["kwiecien"] << endl;
  m["kwiecien"] = m["luty"] + m["marzec"];
  m.print("Po modyfikacji");
  
  cout << "\n***** Tablica const *****" << endl;
  const Assoc<std::string, int>& cm = m;  
  cout << CONTEXT << "Wartosc pod luty? " << cm["luty"] << endl;
  cout << CONTEXT << "Czy jest maj? " << print(cm.contains("maj")) << endl;
  cout << CONTEXT << "Czy jest marzec? " << print(cm.contains("marzec")) << endl;
  
  cout << "\n***** Tablice z innymi kluczami *****" << endl;
  Assoc<int, std::string> inv;
  inv[0] = "zero ";
  inv[1] = "jeden ";
  inv[10] = inv[1]+inv[0];
  inv[111] = inv[1]*3;
  inv.print("Zmiana klucza");

  Assoc<bool, std::string> bl;
  bl[true] = "Udalo sie!!! ";
  bl[false] = "Niestety, bylo za trudne :(";
  bl.print("Na zakonczenie");
  cout << "Zwykle mnozenie: " << m["luty"] * 6 << endl;
  cout << 5* bl[true] << endl;
}