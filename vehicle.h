#pragma once
class vehicle
{
protected:
	char* Ctype;
	int Cnumber;   
	int Ccategory;
	char* Cdescription;  
	int Cid;
	void deepCopy(char*& dest, const char* src);
public : 
	vehicle(); 
	vehicle(char*, int, int, char*, int);
	   
	void setCtype(char*);
	void setCnumber(int);
	void setCcategory(int);
	void setCdescription(char*);
	void setCid(int);
	char* getCtype();
	int getCnumber();
	int getCcategory();
	char* getCdescription();
	int getCid();

	char* selectCar(int t);

	void display();

	~vehicle();

};


