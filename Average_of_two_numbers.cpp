#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    float avg=(a+b)/2.0;
    cout<<"Average of "<<a<<" and "<<b<<" is: "<< fixed << setprecision(2) <<avg;
}