/* Develop a system to manage students' marks in a class. The C++ program should:
• Use an array to store marks of N students.
• Provide a menu-driven system with options to:
a. Enter marks of N students.
b. Calculate the average marks of the class.
c. Find the highest and lowest marks.
d. Exit. */

#include <iostream>
using namespace std;

class studentMarks
{
private:
    int *Marks;
    int no_of_students;
    int length;

public:
    studentMarks(int n)
    {
        no_of_students = n;
        length = 0;
        Marks = new int[no_of_students];
    }

    ~studentMarks()
    {
        delete[] Marks;
    }

    int insertMarks(int mark)
    {
        if (length < no_of_students)
        {
            Marks[length++] = mark;
        }
        else
        {
            cout << "Array is full!" << endl;
        }
        return 0;
    }

    int averageMarks()
    {
        int sum = 0;
        for (int i = 0; i < length; i++)
        {
            sum += Marks[i];
        }
        return sum / length;
    }

    int highestMarks()
    {
        int max = Marks[0];
        for (int i = 1; i < length; i++)
        {
            if (Marks[i] > max)
            {
                max = Marks[i];
            }
        }
        return max;
    }

    int lowestMarks()
    {
        int min = Marks[0];
        for (int i = 1; i < length; i++)
        {
            if (Marks[i] < min)
            {
                min = Marks[i];
            }
        }
        return min;
    }
};

int main()
{
    int no_of_students;
    cout << "Enter the number of students: ";
    cin >> no_of_students;

    studentMarks Marks(no_of_students);

    int choice;
    do
    {
        cout << "1. Insert Marks" << endl;
        cout << "2. Average Marks" << endl;
        cout << "3. Highest Marks" << endl;
        cout << "4. Lowest Marks" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter marks for " << no_of_students << " students:\n";
            for (int i = 0; i < no_of_students; i++)
            {
                int mark;
                cout << "Student " << (i + 1) << ": ";
                cin >> mark;
                Marks.insertMarks(mark);
            }
            break;

        case 2:
            cout << "Average Marks: " << Marks.averageMarks() << endl;
            break;
        case 3:
            cout << "Highest Marks: " << Marks.highestMarks() << endl;
            break;
        case 4:
            cout << "Lowest Marks: " << Marks.lowestMarks() << endl;
            break;
        case 5:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 5);

    return 0;
}