#include <iostream>
#include <limits>
#include <vector>

using namespace std;

void Func() {
    int *pia = new int[24];
    delete []pia;


    cout << numeric_limits<int>::max() << endl;
}


void DisPlayer(vector<int> vect) {
    for (int i = 0; i < vect.size(); ++i) {
        cout << vect[i] << " ";
        cout << endl;
    }
}

void Swap(int &val1, int &val2) {
    int temp = val1;
    val1 = val2;
    val2 = temp;
}

void BubbleSort(vector<int> &vect) {
    for (int i = 0; i < vect.size(); ++i) {
        for (int j = i + 1; j < vect.size(); ++j) {
            if (vect[i] > vect[j]) {
                Swap(vect[i], vect[j]);
            }
        }
    }
}


int FibonElem(int pos) {
    if (pos <= 0 ) {
        return 0;
    }

    int elem = 1;
    int n1 = 1, n2 = 1;


    for (int i = 3; i <= pos; ++i) {
        elem = n2 + n1;
        n2 = n1;
        n1 = elem;
    }

    return elem;
}

