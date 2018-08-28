#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

// Complete the makeAnagram function below.

/*

    Solution Description:  
    1. Create an array of 26 indexes called freqArr that will store the frequency of each letter        that appears
    2. Iterate through each array, incrmeenting the value of the letter's corresponding index in        freqArr.
    3. Iterate through the second string, decrementing the value of each letter from their              correlating indexes in the freqArr array. 
    4.Finally, we can find the # of deletions necessary to create the anagram by finding the 
       absolute sum of all the values in freqArray.
*/


const int CHARS = 26;

int makeAnagram(string a, string b) 
{
    int freqArr[CHARS] = {0};
    for(int i = 0; i<a.length(); i++)
    {
        freqArr[a[i] - 'a']++;
    }
    for(int i = 0; i < b.length(); i++)
    {
        freqArr[b[i] - 'a']--;
    }
    int deletions = 0;
    
    for(int i = 0; i< CHARS; i++)
    {
        deletions += abs(freqArr[i]);
    }
    

    
    return deletions;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);
//    fout << a[0] << a[1] << endl;
    
    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}
