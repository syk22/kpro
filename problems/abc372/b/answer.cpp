#include <iostream>
#include <vector>
using namespace std;
int main() {
    int M;
    cin >> M;
    vector<int> A;
    for (int k = 0; k <= 10; k++) {
        cout << "M: " << M << endl;
        for (int i = 0; i < (M % 5); i++) {
            A.push_back(k);
        }
        M /= 5;
        for (auto &i: A) cout << i << " ";
        cout << endl; 
    }
    // cout << A.size() << endl;
    // for (int i = 0; i < A.size(); i++) {
    //     cout << A[i] << " \n"[i == A.size() - 1];
    // }
    return 0;
}