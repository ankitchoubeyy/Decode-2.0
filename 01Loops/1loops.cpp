#include <iostream>
using namespace std;

int main()
{
    // --------------- for Loops -----------------
    for(int i = 0; i<= 10; i++){
      cout<<"Good Morning"<<endl;
    }
    
    // for n times
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    for(int j = 1; j<= n; j++){
      cout<<"Good Morning"<<endl;
    }
    // --------------------------------------

    // Q1. ALl the even numbers from 1 to 100
    for (int i = 1; i<= 100; i = i+1){
      cout<<i<<endl;
    }

    // ---------------------------------------

    // Q2. Print table of 20
    for(int i = 20; i<= 200; i += 20){
      cout<<i<<endl;
    }

    // ----------------------------------------

    // Q3. Display this AP 1,3,5,7,9 upto n terms
    // Method -1 using formula Ap = a1+(n-1)*d
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    for(int i = 1; i <= 2*n-1; i+=2){
      cout<<i<<endl;
    }
    
    //   Q3. Display this AP 4,7,10,13 upto n terms
    int n;
    cout << "Enter the value of n";
    cin >> n;
    for (int i = 4; i < 3 * n - 3; i += 3)
    {
        cout<<i<<endl;
    }

    // Q4. Ascii values of character

    // char ->> ASCII
    for (char i = 'a'; i <= 'z'; i++)
    {
        cout<< (int)i <<" = "<<i<<endl;
    }
    // ASCII -->> char
    for (int j = 65; j <= 90; j++)
    {
        cout<< (char)j << " = " << j<<endl;
    }
    

    return 0;
}