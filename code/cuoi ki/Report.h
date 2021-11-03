#pragma once
#include"Person.h"
class Report :public Person
{
private:
	string ten_doituong;
	string dacdiem;
	string khuvuvnhinthay;
	string dauhieukhanghi;
public:
	void Input_Report();
	void Output_Report();
	void Save_Report();
	Report();
	~Report();
};


