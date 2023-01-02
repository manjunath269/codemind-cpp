#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a;
    cin>>a;
   float inch=2.54*a;
    cout<< fixed << setprecision(2) <<inch;
}