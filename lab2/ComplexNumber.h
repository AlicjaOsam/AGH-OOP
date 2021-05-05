#pragma once
#include <iostream>

class ComplexNumber{
  public:
    ///operator dodawania + dwoch liczb zespolonych
    friend ComplexNumber operator+(const ComplexNumber &c1, const ComplexNumber &c2);
    ///operator dodawania + liczby typu int do liczby zespolonej
    friend ComplexNumber operator+(int i, const ComplexNumber &c2);
    ///operator dodawania + liczby double do liczby zespolonej
    friend ComplexNumber operator+(double i, const ComplexNumber &c2);
    ///operator odejmowania - dwoch liczb zespolonych
    friend ComplexNumber operator-(const ComplexNumber &c1, const ComplexNumber &c2);
    ///operator mnozenia *
    friend ComplexNumber operator*(const ComplexNumber &c1, const ComplexNumber &c2);
    ///operator preinkrementacji
    friend ComplexNumber operator++(ComplexNumber &c1);
    ///operator postinkrementacji
    friend ComplexNumber operator++(ComplexNumber &c1, int i);
    ///operator porownania <
    friend bool operator<(const ComplexNumber c1, const ComplexNumber &c2);
    ///operator wypisania na ekran <<
    friend std::ostream &operator<<(std::ostream &o, const ComplexNumber &c);

    ///konstruktor
    ComplexNumber(double a, double b);
    ///destruktor
    ~ComplexNumber();

    ///konstruktor konwertujacy
    explicit ComplexNumber(int i): _a(i), _b(i){}
    ///funkcja konwertujaca do double
    operator double() const{
      return (double)_a;
    }
    ///operator przypisania =
    ComplexNumber& operator=(const ComplexNumber c);
    ///operator pomnozenia i przypisania *=
    ComplexNumber& operator*=(int i);
    ///operator []
    double& operator[](unsigned i);
    
  private:
    ///czesc rzeczywista liczby
    double _a;
    ///czesc urojona liczby
    double _b;
};