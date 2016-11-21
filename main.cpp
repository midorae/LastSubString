//
//  main.cpp
//  LastSubstring
//
//  Created by 이창기 on 2016. 11. 21..
//  Copyright © 2016년 이창기. All rights reserved.
//


#include <iostream>
using namespace std;

string lastSubstring(string s);

int main(int argc, const char * argv[])
{
    string str;
    string lastSubstr;
    
    
    cout << "Input Your String :";
    cin >> str;
    
    lastSubstr = lastSubstring(str);
    
    cout << "lastSubString : " << lastSubstr << endl;
    
    
    return 0;
}

string lastSubstring(string s)
{
    char lastStr[101];
    
    int i = 0;
    int max_Index = 0;
    char max = s[max_Index];
    
    int count = 0;
    
    while(s[i] != 0)
    {
        if(max < s[i])
        {
            max_Index = i;
            max = s[i];
        }
        i++;
    }
    
    lastStr[0] = max;
    
    count++;
    
    for(i=max_Index+1; i<s.length(); i++)
    {
        lastStr[i-max_Index] = s[i];
        count++;
    }
    
    lastStr[count] = 0;
    
    return lastStr;
}
