#include <iostream>
using namespace std;

int main() 
{ 
    int arr[5];

    cout << "Enter 5 elements of the array:" << endl;

    for(int i = 0; i < 5; i++)
   {
    cin >> arr[i];
   }

    
    cout << "\nArray elements are:" << endl;

    for(int i = 0; i < 5; i++)
   {
    cout << arr[i] << " ";
   }

    // Accessing array elements
    
   cout << "\n\nFirst element: " << arr[0] << endl;
   cout << "Last element: " << arr[4] << endl;

   return 0;


}
