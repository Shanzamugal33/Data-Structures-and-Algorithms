#include<iostream> 
using namespace std;

int main() 
{ 
    int arr [100]= {67,98,67,35,17,90,56};
    int value = 35;
    for(int i=0;i<=7;i++)
    {
    	if(arr[i]==value)
    	{
    		cout<<"Value ("<<value<<") is available at index "<< i <<endl;
		}
	}
	
	return 0;
}
