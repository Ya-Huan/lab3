#include <iostream>
#include <algorithm>
#include <fstream>
#include <cstdlib>
#include <vector>
#include "class.h"
using namespace std;

int main()
{
    Class c;
    vector<int> v1(c.size);
    int sum = 0;

    ifstream infile("file.in", ios::in);
    if(!infile){
	cerr << "Failed opening!!" << endl;
	exit(1);
    }

    for(int i = 0; i < c.size; i++)  //讀檔
	infile >> v1.at(i);  //存入vector
    
    sort(v1.begin(), v1.end());  //排序由小到大

    cout << c.compute_sum(v1) << endl;

    return 0;
}
