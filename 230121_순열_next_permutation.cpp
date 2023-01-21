#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

void printV(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}

int main()
{
    vector<int> v = {1, 2, 3};
    do
    {
        printV(v);
    } while (next_permutation(v.begin(), v.end()));
}