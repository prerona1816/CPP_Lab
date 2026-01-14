#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin >>a;
    cin >>b;
    cin >>c;
    if (a>=b && a>=c)
    {
        cout << "the largest number:" << a << endl;

    }
    else if(b>=a && b>=c)
    {
        cout << "the largest number:" << b << endl;
    }
    else
    {
        cout << "the largest number:" << c << endl;
    }
    return 0;
}
