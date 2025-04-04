#include <iostream>
#include <string>
using namespace std;

int main() {
    string number;
    cin >> number;

    int count = 0;

    while (number.length() > 1) {
        int sum = 0;
        for (char digit : number) {
            sum += digit - '0';
        }
        number = to_string(sum);
        count++;
    }

    cout << count << endl;

    if (number == "3" || number == "6" || number == "9") {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}