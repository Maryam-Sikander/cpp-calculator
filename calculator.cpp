#include <iostream>
using namespace std;
int main()
{
	//take two numbers as input
	float a, b;
	cout<<"Enter the first number: ";
	cin>>a;
	cout<<"Enter the second number: ";
	cin>>b;
	
	//select the operation to be performed
	char operation;
	cout<<"Select operation (+, -, *, /): ";
	cin>>operation;
	
	//Sum
	if (operation == '+'){
		float sum = a+b;
		cout<<"Result="<<sum;}
		
	//Subtraction
	else if (operation == '-'){
		float subt = a-b;
		cout<<"Result="<<subt;}
		
	//Multiplication
	else if (operation == '*'){
		float product = a*b;
		cout<<"Result="<<product;}
		
	//Division
	else if (operation == '/'){
		if (b == 0){
			cout<<"Division by zero is not possible!";}
		else {
		float div = a/b;
		cout<<"Result="<<div;}}
		
	else cout<<"Invalid operation type.";

	return 0;
		
}
