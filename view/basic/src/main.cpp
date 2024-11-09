#include <iostream>
#include <vector>
#include "file.h"
#include "func.h"
#include "temp.h"

using namespace std;

// const int seq_cnt = 6;

int main() {
    // 指针
    int *pi = 0;
    if (pi && *pi != 1024) {
        *pi = 1024;
    }

    // 将vector地址存入某个vector，就可以通过索引的方式访问
    vector<int> fibonacci, lucas, pell, square;

    // vector<int> *seqAddrs[seq_cnt] = {
    //     &fibonacci, &lucas, &pell, &square
    // };

    BasicFile();
    // Func();


    vector<int> vect = {8,34,3,13,1,21,5,2};
    BubbleSort(vect);

    // DisPlayer(vect);
    vector<string> svec;
    string msg;
    DisMessage(msg, svec);

}