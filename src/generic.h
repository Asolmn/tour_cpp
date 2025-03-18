#include <vector>

using namespace std;

int* Find(const vector<int> &vec, int value);


template <typename elemType>
elemType find(const vector<elemType> &vec, const elemType &value) {
    for (int ix = 0; ix < vec.size(); ++ix) {
        if (vec[ix] == value)
            return &vec[ix];
    }
    return 0;
}
