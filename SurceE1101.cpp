#include "std_lib_facilities.h"

void tolower(string& s);
void out_file_text(string& str, string& name_f);

int main()
{
    setlocale(LC_ALL, "Rus");


    return 0;
}

void tolower(string& s)
{
    for(char&x : s)
    {
        x = tolower(x);
    }
}