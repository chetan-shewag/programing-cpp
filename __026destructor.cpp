

#include<iostream>
using namespace std;

class Test
{
public:
		Test()
	{
			cout<<"\n Constructor executed";
	}

	~Test() // destructor inside the class as well as we also define it outside the class with different syntex
    
		{
			cout<<"\n Destructor executed";
		}
};
main()
{
	Test t;
	
	return 0;
}
