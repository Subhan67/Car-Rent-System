#pragma once
#include "person.h"
class customer:virtual public person
{
protected:
	double ID;   
	char* Phone;
	char* Adress; 
	void deepCopy(char*& dest, const char* src);     
public:   
	customer();   
	customer(double, char*, char*);  

	void setId(double);  
	void setPhone(char*);
	void setAdress(char*);
	double getId();
	char* getPhone();
	char* getAdress();

	void Info();

	void display();

	~customer();
};

