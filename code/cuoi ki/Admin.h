#pragma once
#include"Person.h"
class Admin :public Person
{
private:
	string password;
public:
	void set_pass(string pass);
	string get_pass();
	bool Change_pass();
	void Input_pass();
	bool Check_pass();
	void Find_id(string id);
	void Input_area();
	void Output_declarations();
	void Update_infections();
	Admin();
	~Admin();
};



