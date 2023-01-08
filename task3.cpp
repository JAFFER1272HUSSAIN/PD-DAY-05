#include<iostream>
using namespace std;
float taxCalculator(char,float);
int main()
{
    float price,total;
    char code;
    cout << "Enter Item price:  ";
    cin >> price;
    cout << "Enter vehical code: ";
    cin >> code;
    total = taxCalculator(code,price);
    cout << total << " is the final price";
    

}
float taxCalculator(char code,float price )
{
    float tax,result;

    if(code = 'M')
    {
        tax = price * (6 / 100);
        result = price + tax;
        return result;
    }
    if(code = 'E')
    {
        tax = price * (8 / 100);
        result = price + tax;
        return result;
    }
    if (code = 'S')
    {
        tax = price * (10 / 100);
        result = price + tax;
        return result;
    }
    if (code = 'V')
    {
        tax = price * (12 / 100);
        result = price + tax;
        return result;
    }
    if (code = 'T')
    {
        tax = price * (15 / 100);
        result = price + tax;
        return result;
    }
    return 0;
}
