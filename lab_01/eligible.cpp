#include <iostream>
using namespace std;

int eligible (int age);
int main()
{
    int age;
    cin >> age;
    int vote_eligible = eligible (age);
    if (vote_eligible)
    {
        cout << "Eligible for vote" << endl;
    }
    else
    {
       cout << "Not eligible for vote" << endl;
    }
    return 0;
}

int eligible(int age){
   if (age>=18)
   {
       return 1;
   }
   else
    {
    return 0;
    }
}


