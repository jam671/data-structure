#include <iostream>
using namespace std;
const int maxstack = 100000;            //�]�w���|���̤j�e�q

int Function(int m, int n) {
    int stack[maxstack];                //�ϥΰ}�C���|
    int top = 0;                        //��l����
    stack[top++] = m;                   // �N��l m �ȱ��J���|

    while (top > 0) {                   // ����|�����Ůɫ������
        m = stack[--top];               // ���X���|���ݪ��ȧ@���ثe�� m

        if (m == 0) {                   // ��m=0�A����n+=1
            n += 1;
        } else if (n == 0) {            // ��n=0
            stack[top++] = m - 1;       // �Nm - 1���J���|��
            n = 1;                      // �NN�]�w��1
        } else {
            stack[top++] = m - 1;       // �����J m - 1�]���i��X�^
            stack[top++] = m;           // ��N m ���J���|�]���i��X�^
            n -= 1;                     // �N n �� 1�A�ǳƤU�@�h
        }
    }

    return n;                            // �^�� n
}

int main() {
    int m,n;
    cout << "��JM�PN: "<< endl;
    cin >> m >> n;
    cout << "��X��: " << Function(m, n) << endl;
    return 0;
}