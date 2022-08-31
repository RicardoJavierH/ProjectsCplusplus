
#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;
int main (int argc, char* argv[])
{
    // Instantiate a ostream object
    ofstream ostr;
    // Open file1 and connect it to the ostream object
    //ostr.open ("file1.xls", ios :: out | ios :: app); // Excel
    ostr.open ("file1.csv", ios :: out | ios :: app);
    if (!ostr.is_open())
    {
    cout << "file1 cannot be opened!";
    assert (false);
    }
    // Append the date as a C-string to file1
    int n=123;
    //ostr << "April_24_2022 " << "\t" << n << endl; // Excel
    //ostr << "April_24_2022 " << "," << n << endl; // csv format
    //ostr << "Nthreads" << "," <<
    
    // Close the file
    ostr.close ();
    return 0;
}
