#include "std_lib_facilities.h"

void tolower(string& s);
void out_file_text(string& str, string& name_f);

int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Enter the text: \n";
    string str;
    cin >> str;
    string name_f;
    cout << "Enter the name of the output file to write the line:\n";
	cin >> name_f;
    out_file_text(str, name_f);
    return 0;
}

void tolower(string& s)
{
    for(char&x : s)
    {
        x = tolower(x);
    }
}

void out_file_text(string& str, string& name_f)
{
   ostringstream os(str);
   ofstream ost{name_f};
   if (!ost) error("Unable to open output file ", name_f);
   ost << str << '\n';
   ost << os.str();

}