#include "Functions.h"

double Asin::calc(double d) const{
  if(d<=(-M_PI/2) || d>=M_PI/2){
    throw std::domain_error("Error: wrong argument of  arcsin");
  }else return std::asin(d);
}

double Log10::calc(double d) const{
  if(d<=0){
    throw std::domain_error("Error: wrong argument of log10");
  }else return std::log10(d);
}

double DivideBy::calc(double d) const{
  if(d==0){
    throw std::domain_error("Error: divide by zero!");
  }else return _a/d;
}