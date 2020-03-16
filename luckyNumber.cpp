#include<iostream>

using namespace std;

int number = 0;
int couter = 1;


//十进制
int f(int x) {
    long int sum = 0;
    while (x != 0) {
        sum += x % 10;
        x = x / 10;
    }
    return sum;
}

//二进制
int g(int x) {
    long int sum = 0;
    while (x != 0) {
        sum += x % 2;
        x = x / 2;
    }
    return sum;
}


int main() {
    int x;
    cin >> x;


    if (x <= 100000) {
        while (couter <= x) {
            if (f(couter) == g(couter)) {
                number += 1;
                cout << couter << " ";
            } else {
                cout << "";
            }
            couter++;
        }
        cout << "\n";
    } else {
        cout << "";
    }

    cout << number << endl;

    return 0;
}