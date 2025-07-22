#include <iostream>
#include <cstring>

using namespace std;

void printSubset(char* subset, int length) {    // ��X�l���X�����
    cout << "(";
    for (int i = 0; i < length; ++i) {
        cout << subset[i];                      // ��X�l���X�����C�Ӥ���
    }
    cout << ")" << endl;                        // ��X�l���X����
}

void generatePowerSet(char* S, int n, char* subset, int subsetSize, int index) {    // ���j���� power set �����
    if (index == n) {   // ���j�פ����G�� index ==n �A�C�L�ثe�l���X
        printSubset(subset, subsetSize);
        return;
    }

    // ���j���p 1�G���]�t��e���� S[index]
    generatePowerSet(S, n, subset, subsetSize, index + 1);
    // ���j���p 2�G�]�t��e���� S[index]
    subset[subsetSize] = S[index];      // �[�J��e������l���X��
    generatePowerSet(S, n, subset, subsetSize + 1, index + 1);
}

int main() {
    char S[] = {'a', 'b', 'c'};
    int n = sizeof(S) / sizeof(S[0]);
    char subset[10]; 
    generatePowerSet(S, n, subset, 0, 0);

    return 0;
}
