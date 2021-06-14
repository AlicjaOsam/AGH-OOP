#pragma once
#include <iostream>

/**
*klasa reprezentujaca samochod
*/
class Car{
  public:
    ///konstruktor domyslny
    Car() = default;
    ///konstruktor
    Car(std::string n){
      _n = n;
    }

    /**
    *funkcja print wypisujaca nazwe samochodu
    */
    void print(){
      std::cout<<"Car: "<<_n<<std::endl;
    }

  private:
    ///zmienna przechowujaca nazwe samochodu
    std::string _n;
};