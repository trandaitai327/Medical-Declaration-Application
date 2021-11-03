#pragma once
//#include"Person.h"
#include<iostream>
#include<string>
class Symptom
{
private:
	bool Ho;
	bool Sot;
	bool Metmoi;
	bool Khotho;
	bool Tucnguc;
	bool Vungdich;
	bool khaibao;
public:
	void set_Ho(bool a) {
		Ho = a;
	}
	void set_Sot(bool a) {
		Sot = a;
	}
	void set_Vungdich(bool a) {
		Vungdich = a;
	}
	void set_Metmoi(bool a) {
		Metmoi = a;
	}
	void set_Khotho(bool a) {
		Khotho = a;
	}
	void set_Tucnguc(bool a) {
		Tucnguc = a;
	}
	void set_Khaibao(bool a) {
		khaibao = a;
	}
	bool Answer(std::string c) {
		if (c == "y" || c == "Y"||c=="yes") return 1;
		else return 0;
	}
	bool get_Ho() {
		return this->Ho;
	}
	bool get_Sot() {
		return this->Sot;
	}
	bool get_Metmoi() {
		return this->Metmoi;
	}
	bool get_Khotho() {
		return this->Khotho;
	}
	bool get_Tucnguc() {
		return this->Tucnguc;
	}
	bool get_khaibao() {
		return this->khaibao;
	}
	bool get_Vungdich() {
		return this->Vungdich;
	}
	
};


