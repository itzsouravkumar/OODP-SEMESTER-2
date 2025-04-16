#include <iostream>
using namespace std;

class Array
{
private: // VARIABLES
    int *Arr;
    int size;
    int length;

public:
    Array(int s)
    { // CONSTRUCTOR TO INITIALIZE ARRAY
        size = s;
        length = 0;
        Arr = new int[size];
    }

    ~Array()
    { // DESTRUCTOR TO DELETE ARRAY
        delete[] Arr;
    }

    // FUNCTION TO INSERT ELEMENT
    void insertElement(int element)
    {
        if (length < size)
        {
            Arr[length++] = element;
        }
        else
        {
            cout << "Array is full!" << endl;
        }
    }
    // FUNCTION TO DELETE ELEMENT
    void deleteElement(int element)
    {
        for (int i = 0; i < length; i++)
        {
            if (Arr[i] == element)
            {
                for (int j = i; j < length - 1; j++)
                {
                    Arr[j] = Arr[j + 1];
                }
                length--;
                cout << "Element deleted successfully." << endl;
                return;
            }
        }
        cout << "Element not found!" << endl;
    }

    // FUNCTION TO SEARCH ELEMENT
    int searchElement(int element)
    {
        for (int i = 0; i < length; i++)
        {
            if (Arr[i] == element)
            {
                return i;
            }
        }
        return -1;
    }

    // FUNCTION TO DISPLAY ELEMENTS
    void displayElements()
    {
        if (length == 0)
        {
            cout << "Array is empty!" << endl;
            return;
        }
        cout << "Array elements: ";
        for (int i = 0; i < length; i++)
        {
            cout << Arr[i] << " ";
        }
        cout << endl;
    }

    // FUNCTION TO SORT ELEMENTS
    void sortElements()
    {
        for (int i = 0; i < length - 1; i++)
        {
            for (int j = 0; j < length - i - 1; j++)
            {
                if (Arr[j] > Arr[j + 1])
                {
                    swap(Arr[j], Arr[j + 1]);
                }
            }
        }
        cout << "Array sorted successfully." << endl;
    }
};

// MAIN FUNCTION
int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    Array arr(size);

    // MENU DRIVEN PROGRAM
    while (true)
    {
        cout << "\nMenu:\n";
        cout << "1. Insert an element\n";
        cout << "2. Delete an element\n";
        cout << "3. Search for an element\n";
        cout << "4. Display all elements\n";
        cout << "5. Sort the array\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";

        int choice, element;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the element to insert: ";
            cin >> element;
            arr.insertElement(element);
            break;
        case 2:
            cout << "Enter the element to delete: ";
            cin >> element;
            arr.deleteElement(element);
            break;
        case 3:
            cout << "Enter the element to search: ";
            cin >> element;
            int index;
            index = arr.searchElement(element);
            if (index != -1)
            {
                cout << "Element found at index " << index << endl;
            }
            else
            {
                cout << "Element not found" << endl;
            }
            break;
        case 4:
            arr.displayElements();
            break;
        case 5:
            arr.sortElements();
            break;
        case 6:
            cout << "Exiting program..." << endl;
            return 0;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    }
}
