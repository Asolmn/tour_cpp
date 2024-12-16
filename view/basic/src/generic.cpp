#include <vector>
#include <list>
#include <deque>
#include <algorithm>

using namespace std;

const int* Find(const vector<int> &vec, int value) {
    for (int ix = 0; ix < vec.size(); ++ix) {
        if (vec[ix] == value)  {
            return &vec[ix];
        }
    }
    return 0;
}

extern bool GrowVect(vector<int>&, int); 

bool GrowVect(vector<int> &vect, int elem) {
    return true;
}

bool IsElem(vector<int> &vect, int elem) {

    // max_element 返回迭代器对象, 需要使用*iter解引
    int maxValue = *max_element(vect.begin(), vect.end());
    if (maxValue < elem ) {
        return GrowVect(vect, elem);
    }

    if (maxValue == elem) {
        return true;
    }
    return binary_search(vect.begin(), vect.end(), elem);
}