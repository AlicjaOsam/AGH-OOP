#include "ComplexNumber.h"

ComplexNumber::ComplexNumber(double a, double b){
  _a = a;
  _b = b;
}

ComplexNumber::~ComplexNumber(){}

ComplexNumber& ComplexNumber::operator=(const ComplexNumber c){
  _a = c._a;
  _b = c._b;
  return *this;
}

ComplexNumber& ComplexNumber::operator*=(int i){
  _a = _a*i;
  _b = _b*i;
  return *this;
}

double& ComplexNumber::operator[](unsigned i){
  if(i == 0){
    return _a;
  }return _b;
}

ComplexNumber operator+(const ComplexNumber &c1, const ComplexNumber &c2){
  return ComplexNumber(c1._a+c2._a, c1._b+c2._b);
}

ComplexNumber operator+(int i, const ComplexNumber &c2){
  return ComplexNumber(i+c2._a, i+c2._b);
}

ComplexNumber operator+(double i, const ComplexNumber &c2){
  return ComplexNumber(i+c2._a, i+c2._b);
}

ComplexNumber operator-(const ComplexNumber &c1, const ComplexNumber &c2){
  return ComplexNumber(c1._a-c2._a, c1._b-c2._b);
}

ComplexNumber operator*(const ComplexNumber &c1, const ComplexNumber &c2){
  return ComplexNumber(c1._a*c2._a-c1._b*c2._b, c1._a*c2._b+c1._b*c2._a);
}

ComplexNumber operator++(ComplexNumber &c1){
  c1._a++;
  return c1;
}

ComplexNumber operator++(ComplexNumber &c1, int i){
  ComplexNumber tmp = c1;
  c1._a++;
  return tmp;
}

bool operator<(const ComplexNumber c1, const ComplexNumber &c2){
  return (c1._a*c1._a+c1._b*c1._b)<(c2._a*c2._a+c2._b*c2._b);
}

std::ostream &operator<<(std::ostream &o, const ComplexNumber &c){
  return o << c._a << " + " <<c._b << "i";
}