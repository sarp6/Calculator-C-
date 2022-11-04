#include <iostream>
using namespace std;

float sum(float num1, float num2){
	return num1 + num2;
}
float sub(float num1, float num2){
	return num1 - num2;
}
float mp(float num1, float num2){
	return num1 * num2;
}
float div(float num1, float num2){
	return num1 / num2;
}

int main (){
	int num1, num2;
	cout<<"Enter first number: ";
	cin>> num1;
	cout<<"Enter second number: ";
	cin>> num2;
	
	cout<<"Summation of two number: "<< sum(num1, num2)<< endl;
	cout<<"Substraction of two number: "<< sub(num1, num2)<< endl;
	cout<<"Multiplication of two number: "<< mp(num1, num2)<< endl;
	cout<<"Division of two number: "<< div(num1, num2)<< endl;
}
