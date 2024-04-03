#include <iostream>
using namespace std;
//function for addtion.
void addition(float num1, float num2)
{
    float sum; 
    sum = num1 + num2;
    cout << " The Sum of the two numbers is = " << sum << endl;
}
//function for subtraction.
void subtraction(float num1, float num2)
{
    float subtract; 
    subtract = num1 - num2;
    cout << "The Difference of the two numbers is = " << subtract << endl;
}
//function for multiplication.
void multiplication(float num1, float num2)
{
    float prod; 
    prod = num1*num2;
    cout << " The Product of the two numbers is = " << prod << endl;
}
//function for division.
void division(float num1, float num2)
{
    float quotient; 
    quotient = num1/num2;
    cout << " The Sum of the two numbers is = " << quotient << endl;
}
int main()
{
    int option;
    char a=1; //resetting loop variable
    float num1, num2;
    while (a==1)
    {
        cout << " Enter Number 1: ";
	    cin >> num1;
	    cout << " Enter Number 2: ";
	    cin >> num2;
	    cout << " Please Select The Operation: \n 1 for Addition. \n 2 for Subtraction. \n 3 for Multiplication. \n 4 for Division." << endl;
	    cin >> option; //choice of operation
	    switch (option)
	    {
	        case 1:
	        {
	            addition(num1, num2);
	            break;
	        }
	        case 2:
	        {
	            subtraction(num1, num2);
	            break;
	        }
	        case 3:
	        {
	            multiplication(num1, num2);
	            break;
	        }
	        case 4:
	        {
	            division(num1, num2);
	            break;
	        }
	        default:
	        {
	            cout << "Invalid Input!" << endl;
	            break;
	        }
	    }
	    cout << "Do you want to perform another operation? If yes Then press 1. If no then press any key." << endl;
	    cin >> a;
    }
}