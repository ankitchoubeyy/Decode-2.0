#include <iostream>
using namespace std;

int main()
{
    // Q1. Finding composite and prime numbers using loop and break statements.

    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i = 2; i<=n-1; i++){
        if (n%i != 0)
        {
            cout<<n<<" is a prime number."<<endl;
            break;
        }
        else{
            cout<<n<<" is a composite number.";
            break;
        }

    // Q2.WAP to count digit of a given number.

    int n;
    cout << "Enter n: ";
    cin >> n;
    int count = 0;

    while (n > 0)
    {
        n /= 10;
        count++;
    }
    cout << count;

    // Q3. WAP to find the sum of the digit of given number.

    int n;
    cout << "Enter n: ";
    cin >> n;
    int sum = 0;
    int r;
    while (n>0)
    {
        r = n%10;
        sum +=r;
        n /=10;
    }
    cout<<sum;

    // Q4. WAP to reverse the given number.

    int n;
    cout << "Enter n: ";
    cin >> n;
    int reverse=0;
    int lastdigit =0;
    while (n>0)
    {
        reverse *= 10;
        lastdigit = n%10;
        reverse += lastdigit;
        n /=10;
    }
    cout<< reverse;

    // Q5.WAP to print sum of the series: 1,-2,3,-4,5,-6......n

    int n;
    cout << "Enter n: ";
    cin >> n;
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
        else
        {
            sum -= i;
        }
    }
    cout << sum;

    return 0;
}