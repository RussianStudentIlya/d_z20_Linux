#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;


int main()
{

    ifstream reader_file = ifstream("ip_address.txt");

    if(!reader_file.is_open())
    {
        cout << "Could not open input file!" << endl;
        return 1;
    }

    string result;

    if(reader_file >> result)
    {
        cout << result << endl;
    }
    return 0;
}