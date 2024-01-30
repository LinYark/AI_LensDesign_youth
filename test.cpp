#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ifstream input("a.txt");
    // string word;
    // while (input >> word)
    // {
    //     cout << word << endl;
    // }
    // ifstream input("a.txt");
    string line;
    while (getline(input, line))
    {
        cout << line << endl;
    }
    return 0;
}