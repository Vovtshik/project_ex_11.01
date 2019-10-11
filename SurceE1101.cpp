#include "std_lib_facilities.h"

void reading_numbers(string& name_file, string& data);

int main()
{
    setlocale(LC_ALL, "Rus");


    return 0;
}

void reading_numbers(string& name_file, string& data)
{
    ifstream ist(name_file);
    if(!ist) error("Unable to open input file ", name_file);
    ist.exceptions(ist.exceptions() | ios_base::badbit);
}