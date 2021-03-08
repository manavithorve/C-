#include <iostream>
using namespace std;
int *createArray(int n)
{
    int *p = new int[n];
    for (int i = 0; i < n; i++)
    {
        p[i] = i;
    }
    return p;
}
int main()
{
    int *a;
    a = createArray(5);
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}