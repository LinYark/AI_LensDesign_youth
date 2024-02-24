#include <iostream>
#include <string>
using namespace std;
int countnumber(string str, char a);

int main()
{
    string str;
    char a;
    int n;
    getline(cin, str);
    cin >> a;
    n = countnumber(str, a);
    cout << n << endl;
}

int countnumber(string str, char a)
{
    int n = 0;
    for (int i = 0; i < str.size() + 1; i++)
    {
        if ((str[i] == a) || (str[i] == toupper(a)) || (str[i] == tolower(a)))
        {
            n += 1;
        }
    }
    return n;
}
