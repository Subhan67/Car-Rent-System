#include "booking.h"
#include<string>
#include <iostream>
using namespace std;

  
booking::booking()
{
	bookId = 0;    

	bookFromD = 0;  
	bookFromM = 0;   
	bookFromY = 0; 
	 
	bookToD = 0;      
	bookToD = 0; 
	bookToD = 0;

	bookDes = nullptr;

	bookType = 0;
    
}



void booking::setBookID(double id)
{
	bookId = id;

}
double booking::getBookId()
{
	return bookId;
}



void booking::setBookFromD(int fd)
{
	bookFromD = fd;
}
int booking::getBookFromD()
{
	return bookFromD;
}
void booking::setBookFromM(int fm)
{
	bookFromM = fm;
}
int booking::getBookFromM()
{
	return bookFromM;
}
void booking::setBookFromY(int fy)
{
	bookFromY = fy;
}
int booking::getBookFromY()
{
	return bookFromY;
}



void booking::setBookToD(int td)
{
	bookToD = td;
}
int booking::getBookToD()
{
	return bookToD;
}
void booking::setBookToM(int tm)
{
	bookToM = tm;
}
int booking::getBookToM()
{
	return bookToM;
}
void booking::setBookToY(int ty)
{
	bookToY = ty;
}
int booking::getBookToY()
{
	return bookToY;
}



void booking::setBookDes(char* des)
{
	int length = strlen(des);
	bookDes = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		bookDes[i] = des[i];
	}
	bookDes[length] = '\0';
}
char* booking::getBookDes()
{
	int length = strlen(bookDes);
	char* temp = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		temp[i] = bookDes[i];
	}
	temp[length] = '\0';
	return temp;
}

void booking::setBookType(int typ)
{
	bookType = typ;
}
int booking::getBookType()
{
	return bookType;
}

void booking::setRatePerDay(int rpd)
{
	ratePerDay = rpd;
}
int booking::getRatePerDay()
{
	return ratePerDay;
}



void booking::addBooking()    // In this function we take data for booking
{
	double tm=0;
	cout << " -------------------------------------------------- BOOKING ------------------------------------------------------------" << endl;
	cout << endl;
	bool right1 = false;
	do
	{
		cout << " Enter Booking Id : ";
		cin >> tm;

		if (Cs.getId()==getBookId())
		{
			setBookID(tm);
			right1 = true;
		}
		else
		{
			cout << endl;
			cout << endl;
			cout << " You Enter wrong ID, please Re-Enter. " << endl;
			right1 = false;
		}

	} while (right1 != true);

	cout << endl;



	int a, b, c;
	cout << " Enter Date of Booking Vehicle (Date Month Year) : ";
	cin >> a >> b >> c;
	setBookFromD(a);
	setBookFromM(b);
	setBookFromY(c);


	cout << " Enter Date of Return Vehicle (Date Month Year) : ";
	cin >> a >> b >> c;
	setBookToD(a);
	setBookToM(b);
	setBookToY(c);
	cout << endl;

	int t;
	bool right = false;
	while (right != true)
	{


		t=0;
		cout << " Select Type of vehicle (Go , Go+ or Bussiness) : " << endl;    // Here we take booking type which user want
		cout << " Press 1 for Go (Per Day 2000) " << endl;
		cout << " Press 2 for Go+ (Per Day 3000) " << endl;
		cout << " Press 3 for Bussiness (Per Day 5000) " << endl;
		cout << " Enter Choice : ";
		cin >> t;
		if (t > 0 && t < 4)
		{
			bookType = t;
			right = true;
		}
		else
		{
			cout << endl;
			cout << endl;
			cout << " You Enter wrong Choice " << endl;
			right = false;
		}
	}
	if (t == 1)
	{
		char* C = new char[20];
		C= V.selectCar(1);               // selecting car according to booking type
		cout << C << endl;
	}
	if (t == 2)
	{
		char* C = new char[20];
		C = V.selectCar(2);
		cout << C << endl;
	}
	if (t == 3)
	{
		char* C = new char[20];
		C = V.selectCar(3);
		cout << C << endl;
	}

	cout << endl;

}



void booking::editBooking()      // In this function we edit our booking details if user wants
{
	//cin.ignore();
	char choice=0 ;
	cout << " ------------------------------------ EDITTING ---------------------------------------------" << endl;

	while (choice != '6')
	{

	cout << " What you want to edit : " << endl;
	cout << " Press 1 for edit Booking Id " << endl;
	cout << " Press 2 for edit Date of Booking  " << endl;
	cout << " Press 3 for edit Date till Booking  " << endl;
	cout << " Press 4 for edit Type of Vehicle " << endl;
	cout << " Press 6 for exit " << endl;
	cout << endl;
	cout << " Enter Number : ";
	cin >> choice;
	cin.ignore();

	if (choice == '1')
	{
		double tm;
		cout << " Enter Booking Id : ";
		cin >> tm;
		setBookID(tm);
		cout << endl;
	}
	else if (choice =='2')
	{
		int t;
		cout << " Enter date of booking : " << endl;
		cout << " Date (1-31): ";
		cin >> t;
		setBookFromD(t);

		cout << " Month (1-12): ";
		cin >> t;
		setBookFromM(t);
		//cout << endl;

		cout << " Year : ";
		cin >> t;
		setBookFromY(t);
		cout << endl;
	}
	else if (choice == '3')
	{
		int t;
		cout << " Enter date till booking : " << endl;
		cout << " Date (1-31): ";
		cin >> t;
		setBookToD(t);
		

		cout << " Month (1-12): ";
		cin >> t;
		setBookToM(t);
		

		cout << " Year : ";
		cin >> t;
		setBookToY(t);
		cout << endl;

	}
	else if (choice == '4')
	{
		int t;
		bool right = false;
		while (right != true)
		{


			t=0;
			cout << " Select Type of vehicle (Go , Go+ or Bussiness) : " << endl;;
			cout << " Press 1 for Go (Per Day 2000) " << endl;
			cout << " Press 2 for Go+ (Per Day 3000) " << endl;
			cout << " Press 3 for Bussiness (Per Day 5000) " << endl;
			cout << " Enter Choice : ";
			cin >> t;
			if (t > 0 && t < 4)
			{
				bookType = t;
				right = true;
			}
			else
			{
				cout << " You Enter wrong Choice " << endl;
				right = false;
			}
		}
		if (t == 1)
		{
			char* C = new char[20];
			C = V.selectCar(1);
		}
		if (t == 2)
		{
			char* C = new char[20];
			C = V.selectCar(2);
		}
		if (t == 3)
		{
			char* C = new char[20];
			C = V.selectCar(3);
		}

		cin.ignore();

		cout << endl;
	}

	else if (choice == '6')
	{
		cout << " Press Enter " << endl;
		break;
	}
	else
	{
		cout << "You Enter wrong command " << endl;
	}
	cout << endl;
	}


	

}

void booking::cancelBooking()    // In this we delete all the booking data is user want to cancel booking
{
	bookId = 0;

	bookFromD = 0;
	bookFromM = 0;
	bookFromY = 0;

	bookToD = 0;
	bookToM = 0;
	bookToY = 0;

	bookDes = nullptr;

	bookType = 0;
	cout << endl;
	cout << "          ----                            Your Booking is canceled                           ----" << endl;
	cout << endl;
}



void booking::display()      // In this function we display the details of booking
{
	cout << " Date of Booking : " << bookFromD << "-" << bookFromM << "-" << bookFromY << endl;
	cout << " Expire Booking : " << bookToD << "-" << bookToM << "-" << bookToY << endl;
	if (bookType == 1)
	{
		T.SetTax(2.5);
		cout << " Booking Type : GO " << endl;
	}
	else if(bookType == 2)
	{
		T.SetTax(3.5);
		cout << " Booking Type : GO+ " << endl;
	}
	else if (bookType == 3)
	{
		T.SetTax(4.5);
		cout << " Booking Type : Bussiness " << endl;
	}
	cout << " Vehicle type : " << V.getCtype() << endl;
	cout << " Vehicle Number : " << V.getCnumber() << endl;

	cout << endl;
	cout << endl;

	cout << " Vehicle Rent :" << CalRate() << endl;  // this is the rent of selected car

	cout << " Tax : " <<(T.getTax()*CalRate())/100<<" Rs   ( "<<T.getTax()<<" % )"<< endl; // Here we calculate the tax, according to booking type

	cout << "Your Total Payment : " << CalRate() + ((T.getTax()*CalRate()) / 100 )<<" RS "<< endl;  // Here we calculate the total amout of rent by adding tax in it

}


 
double booking::CalRate()   // In this function we calculate the rent of selected car, considering days of rent
{
	int ch=0;
	if (bookFromY == bookToY)                  // Here we calculate days of rent, if month and year of booking date are same
	{
		if (bookFromM == bookToM)              
		{
			ch = bookToD - bookFromD;
		}
	}


	if (bookFromY == bookToY)                       // Here we calculate days of rent, if year of booking date are same
	{
		if (bookFromM != bookToM)
		{
			int m;
			m = bookToM - bookFromM;
			m = m - 1;
			m =m* 30;

			int d;
			d = 30 - bookFromD;
			d = d + bookToD;

			ch = d + m;
		}
	}

	if (bookFromY != bookToY)                       // Here we calculate days of rent, if month and year of booking date are not same
	{
		int y = bookToY - bookFromY;
		y = y * 365;

		if (bookToM == bookFromM)
		{
			ch = y + (bookToD - bookFromD);
		}
		else if (bookToM != bookFromM)
		{
			int m;
			m = bookToM - bookFromM;
			m = m - 1;
			m =m* 30;

			int d;
			d = 30 - bookFromD;
			d = d + bookToD;

			ch = d + m + y;
		}
	}

	if (bookType == 1)                 // Assigning per day rent according to booking type (go, go+ and business)
	{
		ratePerDay = 2000;
	}

	else if (bookType == 2)
	{
		ratePerDay = 3000;
	}

	else if (bookType == 3)
	{
		ratePerDay = 5000;
	}


	return ch*ratePerDay;             // Here we multiply total days with per day rate to calculate rent of vehicle
}


 
booking::~booking()
{
}
