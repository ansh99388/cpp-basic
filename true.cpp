#include <iostream>
using namespace std;

int main(){
    int x = 6;
    int y = 9;

    cout <<boolalpha <<endl;

    cout << (x < y && y < 15 )<<endl;
    cout << (x > y || x < 16)<<endl;
    cout << !(x == 6)<<endl;

    return 0;
}