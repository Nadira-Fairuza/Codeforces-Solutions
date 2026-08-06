#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    int value;
    cin >> value;
 
    int maxValue = value, minValue = value;
    int maxIndex = 0, minIndex = 0;
 
    for (int i = 1; i < n; ++i)
    {
        cin >> value;
 
        if (value > maxValue)
        {
            maxValue = value;
            maxIndex = i;
        }
 
        if (value <= minValue)  // last occurrence of minimum
        {
            minValue = value;
            minIndex = i;
        }
    }
 
    int swaps = maxIndex + (n - 1 - minIndex);
 
    if (minIndex < maxIndex)
        swaps--;
 
    cout << swaps << endl;
}