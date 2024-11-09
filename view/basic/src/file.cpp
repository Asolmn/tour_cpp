#include <iostream>
#include <fstream>

using namespace std;

void BasicFile() {
        // 读写文件
    ofstream outfile("seq_data.txt");

    // 以追加模式
    ofstream outfile2("sqe_data.txt", ios_base::app);


    // 判断文件打开是否失败
    if (!outfile) {
        cerr << "文件打开失败\n" << endl;
    } else {
        outfile << "asolmn" << " "
        << "tries" << " " << "right" << endl;
    }

    // 以读取模式打开infile
    ifstream infile("seq_data.txt");
}