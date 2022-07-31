#pragma once
class person
{
protected:
	char* Name;
	char* Gender;
	int Age;
	void deepCopy(char*& dest, const char* src);
public: 
	person();
	person(char*, char*, int); 
	 
	void setName(char*);     
	void setGender(char*);  
	void setAge(int);	   
	char* getName();  
	char* getGender();
	int getAge();

	virtual void display() = 0;         // Pure Virtual Function

	virtual void Info() ;              // Virtual function

	~person();
};

