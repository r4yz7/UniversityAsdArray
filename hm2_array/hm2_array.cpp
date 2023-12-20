
#include <iostream>
#include "ASDArray.h"
#include "fun_console.h"
using namespace std;
int main()
{
    SetSize(80, 25);
    SetColor(White, Black);
    cls();

    ASD::Array<int> arr;
    cout << "Amount of elements: ";
    int count;
    cin >> count;

    for (size_t i = 0; i < count; i++)
    {
        int n;
        cout << "Enter " << i + 1 << " number: ";
        cin >> n;
        arr.Add(n);
    }

    double averageMinMax = arr.FindAverageMinMax();

    GotoXY(0, GetCurrentY() + 2);
    SetColor(Yellow, Black);
    cout << "Average of min and max elements: " << averageMinMax << endl;

    return 0;
}
