// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

bool isMatch(string str, string ptr)
{
    int flag = 0;
    for (char charcter : str)
    {
        // a
        for (char pattern_character : ptr)
        {
            if (!(charcter == pattern_character || charcter == '.'))
            {
                flag++;
            }
        }
    }
    cout << flag;
    if (flag == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    // Write C++ code here
    cout << "Try programiz.pro";
    isMatch("aa", "a.");
    return 0;
}
