#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 9;  // a = 5(00000101), b = 9(00001001)
    cout<<"a = " << a <<","<< " b = " << b <<endl;
    cout << "a & b = " << (a & b) << endl;  // The result is 00000001
    cout << "a | b = " << (a | b) << endl; // The result is 00001101
    cout << "a ^ b = " << (a ^ b) << endl;  // The result is 00001100
    cout << "~a = " << (~a) << endl;  // The result is 11111010
    cout<<"b << 1" <<" = "<< (b << 1) <<endl;  // The result is 00010010
    cout<<"b >> 1 "<<"= " << (b >> 1 )<<endl;   // The result is 00000100
    return 0;
}