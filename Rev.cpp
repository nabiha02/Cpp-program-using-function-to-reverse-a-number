#include <iostream>

using namespace std;


int reverse(int n){

   int rev = 0;

    while(n != 0){

   rev = rev*10 + n%10;
 n =  n/10;

    }
    return rev;
}


int main() {


    int num;

    cout << "Enter a number to reverse: ";

    cin >> num;
`
    reverse(num);

    cout << "The reversed number is: " << reverse(num) << endl;

    return 0;
}
