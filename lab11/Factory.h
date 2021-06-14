#pragma once
#include <iostream>

/**
*klasa reprezentujaca fabryke
*/
class Factory{
  public:
    /**
    *funkcja prototype ustawiajca wartosc prototypu
    *@param t nowa wartosc prototypu
    */
    template <typename T> void prototype(T t) const;

    /**
    *funkcja manufacture zwracajaca zrobiony obiekt
    */
    template <typename T> T manufacture() const;

  private:
    /**
    *struktura przechowujaca obiekt w fabryce o dowolnym typie
    *@tparam factor obiekt umieszczony w fabryce
    */
    template <typename T> struct Factor{
      static T factor;
    };
};

template <typename T> T Factory::Factor<T>::factor = T();

template <typename T> void Factory::prototype(T t) const{
  Factor<T>::factor = t;
}

template <typename T> T Factory::manufacture() const{
  return Factor<T>::factor;
}
