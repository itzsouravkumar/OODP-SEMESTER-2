#include <iostream>
#include <algorithm>
using namespace std;

int days;
float magnitude;
float arr[100];

int main()
{
    cout << "Enter number of days: ";
    cin >> days;

    cout << "Magnitudes: ";
    for (int i = 0; i < days; i++)
    {
        cin >> magnitude;
        arr[i] = magnitude;
    }

    cout << "Highest Magnitude: " << *max_element(arr, arr + days) << endl;

    cout << "Average Magnitude: ";
    float sum = 0;
    for (int i = 0; i < days; i++)
    {
        sum += arr[i];
    }
    cout << sum / days << endl;

    cout << "High-Risk Days: ";
    for (int i = 0; i < days; i++)
    {
        if (arr[i] > 6.0)
        {
            cout << i + 1 << ",";
        }
    }

    return 0;
}
