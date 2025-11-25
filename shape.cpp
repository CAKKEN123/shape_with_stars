#include <iostream>
using namespace std;

int main() {
    int N = 10;

    for (int i = 1; i <= N; i++) {
        // print i "*"
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // else, print "."
        for (int j = 1; j <= (N - i); j++) {
            cout << ".";
        }

        cout << endl;
    }
}
