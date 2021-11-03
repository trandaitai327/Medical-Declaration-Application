#pragma once
#include"Person.h"
#include"User.h"
#include"Admin.h"
#include<vector>
#include"Report.h"
#define N 100
class Data
{private:
	vector<User> list_user;
	vector<Report> list_report;
	Admin admin;
public:
	void Menu();
	void Evaluate();
	Data();
	~Data();
};

