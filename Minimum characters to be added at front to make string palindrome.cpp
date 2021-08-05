/*
Naive approach: Start checking the string each time if it is a palindrome and if not, then delete the 
last character and check again. When the string gets reduced to wither a palindrome or empty then the number 
of characters deleted from the end till now will be the answer as those characters could have been 
inserted at the beginning of the original string in the order which will will make the string a palindrome.

TC = O(N^2)
SC= O(1)

*/

#include<bits/stdc++.h>
using namespace std;

// function for checking string is palindrome or not
bool ispalindrome(string s)
{
    int l = s.length();
    int j;
     
    for(int i = 0, j = l - 1; i <= j; i++, j--)
    {
        if(s[i] != s[j])
            return false;
    }
    return true;
}

// Driver code
int main()
{
    string s = "BABABAA";
    int cnt = 0;
    int flag = 0;
     
    while(s.length()>0)
    {
        // if string becomes palindrome then break
        if(ispalindrome(s))
        {
            flag = 1;
             break;
        }
        else
        {
        cnt++;
         
        // erase the last element of the string
        s.erase(s.begin() + s.length() - 1);
        }
    }
     
    // print the number of insertion at front
    if(flag)
        cout << cnt;
}

