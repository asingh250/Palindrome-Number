#include<bits/stdc++.h>
#include<string>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
       string pal = to_string(x);    //converts int into string
        string temp = "";            
        for (int a = pal.length()-1;a >=0 ;a--){
            temp =temp + pal[a];       // assigns temp variable with pal in reverse order
        }                          ga
        if (temp == pal)               // checks if the reversed string is same as original one
            return true;
        else
            return false;
    }
};

int main(){
   int b;
   cout << "Enter the number: ";
   cin >> b;
   Solution palindrome;
   cout<< palindrome.isPalindrome(b);

}
