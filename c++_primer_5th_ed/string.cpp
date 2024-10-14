#include <iostream>
#include <string>
#include <limits>
using std::cin;
using std::cout;
using std::endl;
using std::string;


void str_fn(const string &s) // always use const string if you taking a string.
{

}
//or prefer this
void doSomething(std::string_view s)
{

}

int main()
{
    string s1;
    string s2 = s1;

    s2 = "hello world"; // its a copy and not related to s1 at all

    string s5 = "hello";

    cout << s1 << endl;

    string a_word;
    string a_line;

    cin >> a_word;
    cout << a_word << " just a word" << endl;

    cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n'); //this line is important to clear buffer after using cin and when we have to use getline

    std::getline(cin, a_line);
    cout << a_line << " just a line" << endl;
}

// everything same like other programming languages