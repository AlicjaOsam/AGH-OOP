#pragma once
#include <iostream>

class MyArray{
  public:
    ///operator wypisania na ekran <<
    friend std::ostream &operator<<(std::ostream &o, const MyArray &arr);

    ///Konstruktor wypełniający tablice zerami
    MyArray(int n);
    ///Konstruktor kopiujacy
    MyArray(const MyArray &arr);
    ///Konstruktor przenoszacy
    MyArray(MyArray &&arr);
    ///Destruktor
    ~MyArray();

    ///operator przypisania =
    MyArray &operator=(const MyArray arr);
    ///operator ++ inkrementujący wszystkie pola w tablicy
    MyArray &operator++();
    ///operator dostępu do elementów tablicy []
    int &operator[](unsigned i){
      return _tab[i];
    }
    ///operator dostępu do elementów tablicy []
    const int operator[](unsigned i) const{
      return _tab[i];
    }
    ///metoda wypisujaca tablice
    void print(std::string s) const;
    ///metoda zwracajaca rozmiar tablicy
    int size();

  private:
    ///tablica liczb calkowitych
    int* _tab;
    ///rozmiar tablicy
    int _n;
};