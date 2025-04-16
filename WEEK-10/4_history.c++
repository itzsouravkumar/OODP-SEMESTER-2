// Students are asked to build a typing application with the following specification. Every time the user 
// types a word, it gets saved. If the user press undo, the last typed word should be removed. Write a 
// program using stack to type three words: “Hello”, “World”, “Test”. Undo the last typed word. [Hint: 
// use Stack].

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> stackOfWords;
    string words[] = {"Hello", "World", "Test"};

    for (string word : words)
    {
        stackOfWords.push(word);
        cout << "Typed: " << word << endl;
    }

    if (!stackOfWords.empty())
    {
        string lastWord = stackOfWords.top();
        stackOfWords.pop();
        cout << "Last typed word: " << lastWord << endl;
    }
    else
    {
        cout << "Nothing to undo" << endl;
    }
    return 0;
}