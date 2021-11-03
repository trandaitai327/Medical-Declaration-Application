#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include"Symptom.h"
//#include "Symptom.h" 
#include"Travel.h"
#define N 100
using namespace std;
class Person
{
protected:
	string hoten;
	string cmnd;
public:
	void Output_area();
	void Tra_cuu_so_ca_nhiem();
	Person();
	~Person();
};


