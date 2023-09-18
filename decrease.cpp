#include <iostream>
using namespace std;

bool isDecrease(int n) {
    int next = -1;
    while (n > 0) {
        int cur = n % 10;
        if (cur < next) {
            return false;
        }
        next = cur;
        n = n / 10;
    }
    return true;
}

int main() {
    int n;
    cin>>n;
    if (isDecrease(n))
        cout<<1;
    else
        cout<<0;
    return 0;
}
