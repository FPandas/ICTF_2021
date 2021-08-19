#include <iostream>
#include <string>

using namespace std;

//NewGenCode

int BadFunction(string input1);

int main()
{
    string input;
    cout << "Enter your input: ";
    getline(cin, input);
    if(BadFunction(input) != 0)
    {
        cout << "Nope, wrong" << endl;
    }
    else
    {
        cout << "Right, ICTF{" << input << "}" << endl;
    }
    return 0;
}

int BadFunction(string input1)
{
    string Key = "\x1\x1\x1\x1\x1\x1\x1\x1\x1\x1\x1\x1\x1\x1\x1\x1\x1\x1";

    for(int i = 0; i < Key.length(); i++)
    {
        Key[i] = Key[i] + i;
        input1[i] = input1[i] - Key[i];
    }
    if(input1.compare("\x43\x32\x6f\x67\x3f\x2b\x6b\x29\x3e\x27\x57\x60\x26\x46\x22\x64\x23\x5c") != 0)
    {
        return 1;
    }
    
    return 0;
}