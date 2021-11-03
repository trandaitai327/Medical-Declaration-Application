#pragma once
//#include<iostream>
//#include<string>
#include"Person.h"
//#include"Symptom.h"
//#include"Travel.h"

//using namespace std;
class User :public Person
{
private:
	int namsinh;
	string diachi;
	string sdt;
	Symptom trieuchung;
	Travel hanhtrinh[N];
	int songay;
	int sum_trieuchung;

public:
	void Input();
	void Output();
	void Khaibao();
	void LoTrinh();
	void Save_info();
	void Readsum();
	bool get_Trieuchung() {
		return this->trieuchung.get_khaibao();
	}




};



