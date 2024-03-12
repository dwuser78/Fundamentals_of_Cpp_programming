#include <iostream>

#define MAX_SUM 42

using namespace std;

int main() {
    int num;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    for (int i = 0; i < num; i++) {
        sum += num % 10;
        num /= 10;

        if (sum > MAX_SUM)
            break;
    }

    if (sum == MAX_SUM)
        cout << "The input is correct" << endl;
    else
        cout << "The input is incorrect" << endl;

    return 0;
}