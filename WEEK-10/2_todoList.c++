// Akshay is getting ready to go for Europe tour for which he prepares a to-do list. He wants to do 
// things in a sequence, and he wants to add a new task (forgotten task) in the middle of the list or 
// remove a task (unnecessary task) from anywhere in the list. Write a program using list to add three 
// tasks to the list like: “Shopping”, “Cooking”, “Packing”, and “Cleaning”. Remove the task 
// “Cooking” and add the task “Wrapping” to the second position. 

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<string> todoList;

    todoList.push_back("Shopping");
    todoList.push_back("Cooking");
    todoList.push_back("Packing");
    todoList.push_back("Cleaning");

    todoList.remove("Cooking");

    auto i = todoList.begin();
    advance(i, 1);
    todoList.insert(i, "Wrapping");

    cout << "Updated to-do list: " << endl;
    for (string task : todoList)
    {
        cout << task << endl;
    }
    return 0;
}