//solution to Variable sized Arrays problem c++ 14  //https://www.hackerrank.com/challenges/variable-sized-arrays/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q;/* Enter your code here. Read input from STDIN. Print output to STDOUT */     
    cin >> n >> q; 
    vector<vector<int>> arr(n, vector<int>(10));
    for(int i = 0; i<n; i++)
    {     
        int temp;
        cin >> temp;
        arr[i].resize(temp);    //if the size of the 'columns' is too small for you to insert all the values, the compiler will abort out. not sure if this is just a hackerrank thing or if its allt he time. Its never a bad idea to resize your vector manually though
        for(int j = 0; j<temp; j++)
        {
            
            cin >> arr[i][j];
        }
    }
    for(int k = 0; k<q; k++)
    {   
        int x, y; 
        cin >> x >> y; 
        cout << arr[x].at(y) << endl;
    }        
            
            return 0;
}