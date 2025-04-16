#include <iostream>
#include <fstream>
using namespace std;

class FileProcessor
{
    ifstream file;

public:
    FileProcessor(const string &filename) : file(filename)
    {
        if (!file.is_open())
        {
            throw runtime_error("Failed to open file");
        }
    }

    ~FileProcessor()
    {
        cout << "Cleanup done" << endl;
        if (file.is_open())
        {
            file.close();
        }
    }

    void process()
    {
        string line;
        while (getline(file, line))
        {
            cout << line << endl;
        }
    }
};

int main()
{
    try
    {
        FileProcessor fp("example.txt");
        fp.process();
    }
    catch (const exception &e)
    {
        cerr << "Error: " << e.what() << endl;
    }
    return 0;
}