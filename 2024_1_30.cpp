#include <iostream>
using namespace std;

int main()
{
    const int n = 8;
    int arr[n] = {2, 7, 5, 1, 9, 4, 7, 8};

    int newArr[n];
    for (int i = 0; i < n; i++)
    {
        newArr[n - i - 1] = arr[i];
    }

    for (int num : newArr)
    {
        cout << num << endl;
    }
}