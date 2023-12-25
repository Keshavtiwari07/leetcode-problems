class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int n=mat.size();
        for(int i=0;i<n;i++){
          
                 sum+=mat[i][i];
                 sum+=mat[i][n-1-i];
            
        }
        if(n%2==1){
            sum-=mat[n/2][n/2];
        }

        return sum;
    }
};
//       0.  1.  2.  3
//   0   1.  2.  3.  4
//   1   1   2.  3.  4 
//   2   1.  2   3.  4
//   3   1.  2   3.  4


//   1+2+3+4