#include<iostream>
using namespace std;

void swap(int *x,int *y)
{
	int temp;
	temp =  *x;
	*x = *y;
	*y = temp;
	
}

int main()
{
	int x=100;
	int y=200;
	swap(&x,&y);
	 cout<<"Value of x is: "<<x<<endl;  
     cout<<"Value of y is: "<<y<<endl;  
}


