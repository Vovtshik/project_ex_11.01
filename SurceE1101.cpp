#include "std_lib_facilities.h"

void tolower(string& s);
void out_file_text(string& data, string& name_f);

int main()
{
    setlocale(LC_ALL, "Rus");
    // string name_file;
    string data;
    // cout << "Enter a file name for reading text:\n";
    // cin >> name_file;
    // in_file_text(name_file, data);
    // cout << data << '\n';  
    cout << "Enter the name of the output file to write the line:\n";
	string name_f;
    getline(cin, name_f);
    out_file_text(data, name_f);
    return 0;
}

void tolower(string& s)
{
    for(char&x : s)
    {
        x = tolower(x);
    }
}

void out_file_text(string& data, string& name_f)
{
   string temp{data};
   tolower(temp);
//    ostringstream os(temp);
   ofstream ost{name_f};
   if (!ost) error("Unable to open output file ", name_f);
   ost << temp << '\n';
//    ost << os.str();
