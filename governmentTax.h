#pragma once

template <class T>
class governtmentTax
{
private:
    T taxPer;
public:

	governtmentTax() 
	{
		taxPer = 0;
	}

	governtmentTax(T t)
	{
		taxPer = t;
	} 

	void SetTax(T a)
	{
		taxPer = a;
	}
	T getTax()
	{
		return taxPer;
	}



	void display();

};


