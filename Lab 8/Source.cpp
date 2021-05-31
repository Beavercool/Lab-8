#include <iostream>
#include <string>
#define Tab endl
using namespace std;
int main(int argc, char* argv[])
{

    string str1 = "Hello world!";
    string str2 = "hello world";
    string str3 = "howdy";

    cout << "*Compare" << Tab;
    cout << " 1 String: " << str1 << Tab;
    cout << "2 String: " << str2 << Tab;
    cout << str1.compare(str2) << Tab;

    cout << "\n *Replacing" << Tab;
    cout << "Original: " << str1 << Tab;
    cout << str1.replace(str1.find("world"), str3.size(), str3) << Tab;
 
    cout << "\n *Link" << Tab;
    cout << "Original: " << str1 << "; "<< str2 << Tab;
    cout << str1 + " " + str2 << Tab;
    cout << str1.append(" ").append(str2) << Tab;

    cout << "\n *Substring" << Tab;
    cout << "Original: " << str1 << Tab;
    str1 = str1.substr(0, 13);
    cout << str1 << Tab;

    cout << "\n *Insert" << Tab;
    cout << "Original: " << str1 << Tab;
    cout << str1.insert(6, "world ") << Tab;
    getchar();
}
