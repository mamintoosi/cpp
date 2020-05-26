// enumerations
#include <iostream>
#include <conio.h>
using namespace std;

/*
    enum 	Color   { RED , GREEN , BLUE , BLACK , ORANGE}
    
	enum 	Time    { SECOND , MINUTE , HOUR }
	
	enum 	Date    { DAY , MONTH , YEAR }
	
	enum 	Language{ C , C++ , JAVA , PERL } //C++ is wrong
	
	enum 	Gender  { MALE , FEMALE } 
	
	
	enum 	sign    { neg = -1 , zero = 0 , pos = 1 };
	
	enum 	Answer  { NO = 0 , FALSE = 0 , YES = 1 , TRUE = 1 , OK = 1 };
  */



main()
{
	enum   Day { Sat , Sun , Mon , Tues , Wednes , Thurs , Fri };
		
	cout << Sat << endl;          // 0
	 
	cout << Tues + Mon <<endl;    // 3+2 =5
	
	cout << Fri - Sat <<endl;    // 6-0 = 6
	
	cout << Wednes / Mon <<endl;  // 4/2 = 2

	 	
  
  getch();
}







