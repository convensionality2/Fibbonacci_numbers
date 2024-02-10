#include<iostream>
#include"fibbo.h"
using namespace std;
int main()
{
int fibbo_limit,c,a;//declare variables
   cout<<"enter the limit:"<<endl;
   cin>>fibbo_limit;//enter limit of your fibbonnacci series
for(c=0;c<=fibbo_limit;c++)	
	cout<<fibbo_numbers(fibbo_limit)<<endl;//function call with one parameter for limit
	return 0;
	
}
