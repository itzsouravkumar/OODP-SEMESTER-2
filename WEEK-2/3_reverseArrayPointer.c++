/* Write a C++ program that reverses an integer array using pointers. The program should:
• Accept N integers from the user and store them in an array.
• Use a pointer approach to swap elements in place (without using another array).
• Display the original and reversed arrays */

#include <iostream>
using namespace std;

class ArrayReverser
{
private:
    int *arr; // Pointer to store the array
    int size; // Size of the array

public:
    // Constructor to initialize the array
    ArrayReverser(int n)
    {
        size = n;
        arr = new int[size]; // Dynamic memory allocation
    }

    // Function to take input from user
    void inputElements()
    {
        cout << "Enter " << size << " elements: ";
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }

    // Function to display the array
    void displayArray()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Function to reverse the array using pointers
    void reverseArray()
    {
        int *start = arr;          // Pointer to first element
        int *end = arr + size - 1; // Pointer to last element

        while (start < end)
        {
            // Swap values
            int temp = *start;
            *start = *end;
            *end = temp;

            // Move pointers towards each other
            start++;
            end--;
        }
    }

    // Destructor to free allocated memory
    ~ArrayReverser()
    {
        delete[] arr;
    }
};

int main()
{
    int n;

    // Take input for the size of the array
    cout << "Enter the number of elements: ";
    cin >> n;

    // Create an object of ArrayReverser
    ArrayReverser obj(n);

    // Take input from the user
    obj.inputElements();

    // Display the original array
    cout << "Original Array: ";
    obj.displayArray();

    // Reverse the array
    obj.reverseArray();

    // Display the reversed array
    cout << "Reversed Array: ";
    obj.displayArray();

    return 0;
}
