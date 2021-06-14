#include "assoc.h"

template<typename K, typename V> bool Assoc<K, V>::contains(K key) const{
	for(unsigned i=0; i<_v.size(); i++){
		if(_v[i]._key == key){
      return true;
    }
	}return false;
}

template<typename K, typename V> void Assoc<K, V>::insert(K key , V val){
	if(contains(key)) return;
	Data temp;
	temp._key = key;
	temp._value = val;
	_v.push_back(temp);
}

template<typename K, typename V> void Assoc<K, V>::print(std::string text){
	for(unsigned i = 0; i<_v.size(); i++){
		std::cout<<"--- "<<text<<" --- klucz: "<<_v[i]._key<<" wartosc: "<<_v[i]._value<<std::endl;
	}
}

template<typename K, typename V> V& Assoc<K, V>::operator[](K key){
	for(unsigned i = 0; i<_v.size();i++){
		if(_v[i]._key == key){
      return _v[i]._value;
    }
	}
	Data temp;
	temp._key = key;
	_v.push_back(temp);
	return _v[_v.size()-1]._value;
}

template<typename K, typename V> V Assoc<K, V>::operator[](K key) const{
	for(unsigned i = 0; i<_v.size(); i++){
		if(_v[i]._key == key){
      return _v[i]._value;
    }
	}
	return 0;
}

std::string print(bool b){
	if(b){
		return "Znaleziono";
	} else{
		return "Nie znaleziono";
	}
}

std::string operator*(std::string str, int n){
	std::string temp = "";
	for(int i=0; i<n; i++){
		temp = temp + str;
	}
	return temp;
}

std::string operator*(int n, std::string str){
	std::string temp = "";
	for(int i=0; i<n; i++){
		temp = temp + str;
	}
	return temp;
}

template class Assoc<std::string, int>;
template class Assoc<int, std::string>;
template class Assoc<bool, std::string>;