#include <iostream>
using namespace std;

int romanNum(char c) { 
    int s_num = 0;
    switch (c)
    {
        case 'I':
            return s_num = 1;
        case 'V':
            return s_num = 5;
        case 'X':
            return s_num = 10;
        case 'L':
            return s_num = 50;
        case 'C':
            return s_num = 100;
        case 'D':
            return s_num = 500;
        case 'M':
            return s_num = 1000;
    }
    return 0;
}
class Solution {
public:

    int romanToInt(string s) {

        int sum = 0;

        for (int i = 0; i < s.length(); i++)
        {   
            if (i == s.length() - 1){
                sum += romanNum(s[i]);
            }
            else if(romanNum(s[i]) < romanNum(s[i+1])){
                sum -= romanNum(s[i]);
            }
            else{
                sum += romanNum(s[i]);
            }               
        }
        return sum;
    }
};

