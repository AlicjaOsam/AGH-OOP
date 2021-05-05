#include "MyArray.h"

MyArray::MyArray(int n){
  _n = n;
  _tab = new int[_n];
  for(int i=0;i<_n;i++){
    _tab[i] = 0;
  }
}

MyArray::MyArray(const MyArray &arr){
  _n = arr._n;
  _tab = new int[_n];
  for(int i=0;i<_n;i++){
    _tab[i] = arr._tab[i];
  }
}

MyArray::MyArray(MyArray &&arr): _n(arr._n), _tab(arr._tab){
  arr._tab = NULL;
  arr._n = 0;
}

MyArray::~MyArray(){
  if(_tab != NULL){
    std::cout<<"Usuwam tablice"<<std::endl;
    delete [] _tab;
  }
}

MyArray& MyArray::operator=(const MyArray arr){
  _n = arr._n;
  delete [] _tab;
  _tab = new int[_n];
  for(int i=0;i<_n;i++){
    _tab[i] = arr[i];
  }
  return *this;
}

MyArray& MyArray::operator++(){
  for(int i=0;i<_n;i++){
    _tab[i]++;
  }
  return *this;
}

void MyArray::print(std::string s) const{
  std::cout<<s<<" = [";
  for(int i=0;i<_n-1;i++){
    std::cout<<_tab[i]<<", ";
  }
  if(_n>0){
    std::cout<<_tab[_n-1];
  }
  std::cout<<"]"<<std::endl;
}

int MyArray::size(){
  return _n;
}

std::ostream &operator<<(std::ostream &o, const MyArray &arr){
  o << "[";
  for(int i=0;i<arr._n;i++){
    o << arr._tab[i] << ", ";
  }
  o << arr._tab[arr._n-1] << "]";
  return o;
}