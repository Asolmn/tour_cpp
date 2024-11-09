#include <vector>
#include <iostream>

using namespace std;

template <typename elemType>
void DisMessage(const string &msg, const vector<elemType> &vect) {
    cout << msg;
    for (int i = 0; i < vect.size(); ++i) {
        elemType t = vect[i];
        cout << t << " ";
    }
}