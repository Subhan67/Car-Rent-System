#pragma once
#include"customer.h"
#include "vehicle.h"
#include "governmentTax.h"
class booking
{  
private:  
	double bookId; 
	    
	governtmentTax<float> T;       // Creating Instance of template class

	vehicle V;                  // Composition
	 
	customer Cs;                // Composition
	    
	int bookFromD;
	int bookFromM;              // For date when user take the vehicle  
	int bookFromY; 
	 
	int bookToD; 
	int bookToM;               // For date when user return vehicle;
	int bookToY;

	char* bookDes;          

	int bookType;          

	static int ratePerDay;           // static variable

public:
	booking();

	void setBookID(double id);
	double getBookId();

	void setBookFromD(int fd);
	int getBookFromD();
	void setBookFromM(int fm);
	int getBookFromM();
	void setBookFromY(int fy);
	int getBookFromY();

	void setBookToD(int td);
	int getBookToD();
	void setBookToM(int tm);
	int getBookToM();
	void setBookToY(int ty);        
	int getBookToY();

	void setBookDes(char* des);
	char* getBookDes();

	void setBookType(int typ);
	int getBookType();

	void setRatePerDay(int rpd);
	int getRatePerDay();




	void addBooking();

	void editBooking();

	void cancelBooking();

	double CalRate();

	void display();


	~booking();
};

