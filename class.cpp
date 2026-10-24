#include<iostream>
using namespace std;
int main (){
    int n; cin >> n;

    int slast = 0;
    int flast = 1;
    int next;

    if(n >= 0){
        cout << slast << "";
    }
    if ( n >= 1){
        cout << false << "";
        for(int i = 2 ; i <= n; i++){
            next = flast + slast;
            cout << next << "";
            slast = flast;
            flast = next;
        }
    }
    return 0;
}