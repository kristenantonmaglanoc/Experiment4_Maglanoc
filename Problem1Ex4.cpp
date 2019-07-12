#include <iostream> 
#include <cstdlib>
  
using namespace std; 
         
int Addition(int a,int b) { 
	return(a+b); 
} 
  
int Subtraction(int a, int b) { 
    return(a-b); 
} 
  
int Multiplication(int a, int b) { 
    return(a*b); 
} 

float Division(int a,int b) { 
      return(a/b); 
} 

int Modulus(int a, int b) { 
    return(a%b); 
} 
  
int main() 
{ 
	int op; 
	int a; 
	int b; 
	char confirm; 
	
	cout << "Calculator\n\n";
	cout << "1.Addition\n";
	cout << "2.Subtraction\n";
	cout << "3.Multiplication\n";
	cout << "4.Division\n";
	cout << "5.Modulus\n"; 
	
	do 
	{	 
	cout << "\nEnter the desired operation (1-5): "; 
	cin >> op; 
	cout << "\nEnter two integers: \n"; 
	cin >> a >> b;
	cout << endl;
	
	switch(op) { 
	case 1:
		cout << a << " + " << b << " = " << Addition(a,b);
		break; 
	case 2:
		cout << a << " - " << b << " = " << Subtraction(a,b);
		break; 
	case 3:
		cout << a << " * " << b << " = " << Multiplication(a,b);
		break; 
	case 4:
		cout << a << " / " << b << " = " << Division(a,b);
		break; 
	case 5:
		cout<< a << " % " << b << " = " << Modulus(a,b);
		break; 
	default:
		cout << "Invalid Input!"; 
    } 
    
   	cout << "\nEnter 'Y' or 'y' to run again: "; 
    cin >> confirm; 
	} 
	
	while(confirm=='y'||confirm=='Y'); 
    system("PAUSE"); 
	return EXIT_SUCCESS; 
}
