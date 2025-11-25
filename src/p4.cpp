#include <iostream>
using namespace std;
int fib(int n){
    if (n<=2){
        return 1;
    }else{
        return fib(n-1) + fib(n-2);
    }
}
int main (){
    int n;
    while (cin >> n){
        int hasil = fib(n-1) + fib ((n-2));
        cout << "SEARCH fib(" << n << ")" << endl;
        cout << "|--SEARCH fib(" << n-1 << ")" << endl;
        cout << "|--GET fib(" << n-1 << ") = " << fib(n-1) << endl;
        cout << "|--SEARCH fib(" << n-2 << ") = " << fib(n-2) << endl;
        cout << "|--GET fib(" << n-2 << ") = " << fib(n-2) << endl;
        cout << "GET fib(" << n << ") = " << hasil << endl;
        cout << hasil << endl;
    }
    return 0;
} 
