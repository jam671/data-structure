#include <iostream>
using namespace std;


int Function(int m, int n) {
    if (m == 0) //�p�Gm=0�����p
    {
        return n + 1;
    }
    if (n == 0) //��n=0�����p�A���s�I�sFunction(m - 1, 1)
    {
        return Function(m - 1, 1);
    }
    return Function(m - 1, Function(m, n - 1));//���S���ŦX�����p�A���s�I�sFunction(m - 1, Function(m, n - 1))
}
int main() {
    int m,n;
    cout << "��JM�PN: "<< endl;
    cin >> m >> n;
    cout << "��X��: " << Function(m, n) << endl;
    return 0;
}