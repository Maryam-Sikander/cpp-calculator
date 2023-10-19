#include <iostream>
using namespace std;
int main()
{
	//take two numbers as input
	float a, b;
	cout<<"Enter first number: ";
	cin>>a;
	cout<<"Enter second number: ";
	cin>>b;
	
	//select operation to be performed
	char operation;
	cout<<"Select operation (+, -, *, /): ";
	cin>>operation;
	
	//for sum
	if (operation == '+'){
		float sum = a+b;
		cout<<"Result="<<sum;}
		
	//for subt
	else if (operation == '-'){
		float subt = a-b;
		cout<<"Result="<<subt;}
		
	//for product
	else if (operation == '*'){
		float product = a*b;
		cout<<"Result="<<product;}
		
	//for sum
	else if (operation == '/'){
		if (b == 0){
			cout<<"Division by zero is not possible!";}
		else {
		float sum = a/b;
		cout<<"Result="<<sum;}}
		
	else cout<<"Invalid operation type.";
		
}
