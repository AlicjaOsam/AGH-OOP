#pragma once
#include <iostream>
#include <stdexcept>
#include "Functions.h"

namespace SecureCalc{
  template<class T>
  void run(const T& f, double d){
    std::cout<<"Obliczamy: "<<f.name()<<"("<<d<<")"<<std::endl;
    try{
      std::cout<<" -> Wynik: "<<f.calc(d)<<std::endl;
    }
    catch(std::domain_error e){
      std::cout<<e.what()<<std::endl;
    }
  }
}