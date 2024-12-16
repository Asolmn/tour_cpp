#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>

#include "file.h"
#include "func.h"
#include "temp.h"
#include "objectbase.h"

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


    // Map
    map<string, int> words;
    words["vermeer"]  =1;

    for (auto it = words.begin(); it != words.end(); ++it) {
        cout << "key: " << it->first << " values: " << it->second << endl;
    }

    // map查询, find方法,返回的是一个iterator
    auto key = words.find("vermeer");
    cout << "key:" << key->first << endl;

    // Set
    string tWord;
    set<string> wordExclus;

    if (!wordExclus.count(tWord)) {
        words[tWord]++;
    }

    // set insert
    wordExclus.insert("filter");

    // set insert vector
    vector<string> setWords = {"set1"};

    wordExclus.insert(setWords.begin(), setWords.end());

    // 迭代
    for (auto it = wordExclus.begin(); it != wordExclus.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;


}