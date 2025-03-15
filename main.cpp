#include <algorithm>
#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void reverse(vector<int>&m) {
        int size = m.size()-1;
        for (int i=0;i<m.size();i++) {
            int temp = m[i];
            m[i] = m[size-i];
            m[size-i] = temp;
        }
    }
    vector<vector<int>> rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> res(matrix.size(), vector<int>(matrix[0].size()));

        //m*n
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix.size();j++)
            {
                res[j][i] = matrix[i][j];
            }
        }

        // reverse rows
        for (int i=0;i<matrix.size();i++) {
            for (int j=0;j<matrix[i].size();j++) {
                reverse(matrix, i,j);
            }
        }
        return res;
    }
};
int main() {
    Solution solve;
    vector<vector<int>>matrix = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> ans = solve.rotate(matrix);
    for(int i=0;i<ans.size();i++) {
        for (int j=0;j<ans[i].size();j++) {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}