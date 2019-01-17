#include <iostream>
using namespace std;

int main()
{
	int arr1[5];
	int *ptr = arr1;
	
	cout<<"Please Enter 5 Numbers."<<endl;
	cout<<"1. ";
	cin>> arr1 [0]; 
    cout<<"2. ";
	cin>> arr1 [1];
    cout<<"3. ";
	cin>> arr1 [2]; 
	cout<<"4. ";
	cin>> arr1 [3]; 
	cout<<"5. ";
	cin>> arr1 [4]; 
	
	cout<<endl;
	cout<<"Here are the numbers: "<<endl;
	
	for (int i=0; i<=4; i++){
		cout<< *ptr <<endl;
		ptr++;
	}
	return 0;
}
