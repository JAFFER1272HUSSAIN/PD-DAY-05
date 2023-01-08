#include<iostream>
using namespace std;

float volume(float,float,float);

int main()
{
    string unit = "";
    float result;
    float mil,cen,kil;
    float l,h,w ;
    cout << "Enter Height: ";
    cin >> h;
    cout << "Enter Width: ";
    cin >> w;
    cout << "Enter Length: ";
    cin >> l;
    cout << "Units: ";
    cin >> unit;
    if (unit == "millimeters")
    {
        result = volume(l,h,w);
        mil = result * (10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10);
        cout << mil << " cubic millimeters..."; 
    }
    if (unit == "centimeters")
    {
        result = volume (l,h,w);
        cen = result * (10 * 10 * 10 * 10 * 10 * 10 );
        cout << cen << " cubic centimeters...";
    }
    if (unit == "meters")
    {
        result = volume (l,h,w);
        cout << result << " cubic meters...."; 
    }
    if (unit == "kilometers")
    {
        result = volume (l,h,w);
        kil = result / (10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 *10);
        cout << kil << " cubic kilometers....";
    }


}
float volume(float l,float h,float w)
{
    float v =  (l * h * w) / 3;
    return v;
    
}