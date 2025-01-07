#include <iostream>
using namespace std;

void LINEAR_SEARCH(int A[], int N, int VAL)
{
    int POS = -1; // Initialize position as -1
    for (int i = 0; i < N; i++)
    {
        if (A[i] == VAL)
        {
            POS = i; // Update position
            cout << "Data Found at position: " << POS + 1 << endl; // 1-based index
            break;
        }
    }
    if (POS == -1) // If position remains -1, data is not found
    {
        cout << "Data not found" << endl;
    }
}

int main()
{
    int arr[] = {6, 8, 4, 5, 2};
    LINEAR_SEARCH(arr, 5, 4);
    return 0;
}