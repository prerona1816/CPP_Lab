#include <iostream>
using namespace std;


int digit_count(int num);

int main()
{
    int num, result;
    cin >> num;

    result = digit_count(num);
    cout << result;

    return 0;
}


int digit_count(int num)
{
    int count = 0;

    while (num != 0)
    {
        count++;
        num = num / 10;
    }

    return count;
}
