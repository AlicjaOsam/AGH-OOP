#pragma once
#include <iostream>
#include <stdexcept>
#include <cmath>

class Asin{
  public:
    std::string name() const{
      return "arcsin";
    }
    double calc(double d) const;
};

class Log10{
  public:
    std::string name() const{
      return "log10";
    }
    double calc(double d) const;
};

class DivideBy{
  public:
    std::string name() const{
      return "DivideBy";
    }
    DivideBy(double a) : _a(a){}
    double calc(double d) const;
  private:
    double _a;
};