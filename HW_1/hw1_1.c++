#include <iostream>
using namespace std;


int Function(int m, int n) {
    if (m == 0) 
    {
        return n + 1;
    }
    if (n == 0) 
    {
        return Function(m - 1, 1);
    }
    return Function(m - 1, Function(m, n - 1));
}
int main() {
    int m,n;
    cout << "��J m �P n: "<< endl;
    cin >> m >> n;
    cout << "��X��: " << Function(m, n) << endl;
    return 0;
}