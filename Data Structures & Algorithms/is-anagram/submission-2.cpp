#include <algorithm>
#include <iostream>
class Solution {
public:
    bool isAnagram(string s, string t) {
    //using sorting, first sort both strings if they are anagrams then the strings should match, 
    //ex, jam, maj,  after sorting, ajm == ajm, 
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    cout<<" S: "<<s<<" T: "<<t<<endl;
    if(s == t){
        return true;
    }
    return false;
    
    }
};
