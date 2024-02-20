#include <iostream>
using namespace std;

int main()
{
    int num1, result1, result2, result3, result4, amount1, amount2, result;
    cin >> num1;
    result1 = num1/1000;
    result2 = num1/100 - result1*10;
    result3 = num1/10 - result1*100 - result2*10;
    result4 = num1 - result1*1000 - result2*100 - result3*10;

    amount1 = result1 + result3 ;
    amount2 = result2 + result4 ;
    result = amount1 - amount2 ;

    cout << result;
}
