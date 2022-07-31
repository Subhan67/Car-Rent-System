#pragma once
#include "person.h"
class admin: public person
{
protected:
	char* Status;
	char* Contactnum;
	void deepCopy(char*& dest, const char* src);
public:
	    
	admin();    
	admin(char*, char*);   
	  
	void setStatus(char*); 
	void setContactnum(char*);
	char* getStatus();
	char* getContact();

	void Info();

	void display();

	~admin();
};

