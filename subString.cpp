//Generate substrings using recursion
#include <iostream>

using namespace std;

void subString(string s, int i, string s2, int j){
    if(s.length() == 0 || j >= s.length()){
        return;
    }
    s2 += s[i];
    cout << s2 << " ";
    if(i >= s.length()-1){
        i = j;
        j++;
        s2 = "";
    }
    subString(s, i+1, s2, j);
}

int main()
{
    string s, s2="";
    cin >> s;
    int i = 0, j = 0;
    
    subString(s, i, s2, j);
    return 0;
}