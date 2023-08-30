#include <iostream>

using namespace std;

int main()
{

    cout << "\n\nWelcome to week four code challenge!\n\n" << endl;

    char myABCs[3];

    char myABCsFillArray = 'a';
    // Use a for loop to fill the array with a b c
    for(int i = 0; i < 3; i++)
    {
        myABCs[i] = myABCsFillArray;
        myABCsFillArray++;
    }

    for(int i = 0; i < 3; i++)
    {
        cout << "   " << myABCs[i] << "\n\n";
    }

    char myChar = 'c';
    char* pMyCharPtr = &myChar;

    pMyCharPtr = myABCs;

    cout << "should be an address " << pMyCharPtr << endl;

    cout << "should be the first character in the array: " << myChar << endl;

    cout << "should be a character: " << *pMyCharPtr << endl;

    cout << "\n Should be the first char in the array (a): " << *pMyCharPtr << endl;
    pMyCharPtr++;
    cout << "\n Should be the second char in the array (b): " << *pMyCharPtr << endl;
    pMyCharPtr++;
    cout << "\n Should be the third char in the array (c): " << *pMyCharPtr << endl;
    pMyCharPtr++;
    cout << "\n Should be.... " << *pMyCharPtr << endl;

    return 0;
}
