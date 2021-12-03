#include<iostream> 
using namespace std;
int main()	
{
//declaring variables
int price = 0;
int number = 5; 
int nds = 20;
/* declaring and initializing pointers */
int *ptx = &price; 
int *pty = &number; 
int *ptz = &nds;
// variables values output
cout << "Starting values:" << endl;
cout << "price = " << price << endl; 
cout << "number = " << number << endl; 
cout << "nds = " << nds << endl;
// Changing values directly 
price = price + 30; 
number = number + 100; 
nds = nds + 3;
//values after the direct assignments
cout << "variables values after direct change:" << endl;
cout << "price = " << price << endl; 
cout << "number = " << number << endl; 
cout << "nds = " << nds << endl;
// changing values by using pointers
*ptx = *ptx + 10; 
*pty = *pty + 20;
*ptz = *ptz + 2; 
/* values after the indirect assignments */
cout << " variables values after indirect change:" << endl;
cout << "price = " << price << endl; 
cout << "number = " << number << endl; 
cout << "nds = " << nds << endl;
cout << endl;
//indirect access to values
 
cout << "Accessing values indirectly:" << endl;
cout<<"price (*ptx) = " << *ptx<<endl; 
cout<<"number (*pty) = "<< *pty<<endl; 
cout<<"nds (*ptz) = "<< *ptz << endl;
return 0; 
}
