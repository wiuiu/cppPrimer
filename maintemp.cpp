// C++ primer: page
/*

*/
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <fstream>
using std::ifstream;
using std::ofstream;

string getTestData()
{
    ifstream ifs("../../data/test.txt");
    string buff;
    getline(ifs, buff);
    // 返回一行数据
    return buff;
}

int main()
{
    string testData = getTestData();
    return 1;
}
