#include <iostream>
using namespace std;
int main()
{
    int num, n, rev=0, digit;

    cout<<"Enter a Number : ";
    cin>>num;

    n=num;

    while(num>0)
    {
        digit=num%10;
        rev=(rev*10)+digit;
        num=num/10;
    }

    cout<<"Reverse of the number "<<n<<" is : "<<rev;

    if(n==rev)
        cout<<"\nThe number "<<n<<" is a Palindrome";
    else
        cout<<"\nThe number "<<n<<" is not Palindrome";

    return 0;
}