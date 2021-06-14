#pragma once
#include <vector>
#include <string>
#include <iostream>

///szablon klasy tablicy asocjacyjnej
template<typename K, typename V> class Assoc{
public:
  ///funkcja sprawdzajaca czy element o danym kluczu istnieje
	bool contains(K key) const;
	///funkcja dopisujaca klucz i jego wartosc do tablicy
	void insert(K key , V val);
  /**	funkcja wypisujaca tablice
		@param s tekst poprzedzajacy wypisana linijke
	*/
	void print(std::string s);
	///operator [] dostepu do tablicy
	V& operator[](K key);
	///operator [] dostepu do wartosci wedlug klucza
	V operator[](K key) const;
private:
	struct Data{
		K _key;
		V _value;
	};
	std::vector<Data> _v;
};

///funkcja zwracajaca string zalezny od boola
std::string print(bool b);
///operator mnozenia stringa
std::string operator*(std::string str, int n);
///operator mnozenia stringa z odwrocona kolejnoscia 
std::string operator*(int n, std::string str);