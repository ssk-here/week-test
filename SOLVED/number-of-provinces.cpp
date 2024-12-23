
/**
* @file number-of-provinces.cpp
* @author [Your Name]
* @date [Current Date]
* @see https://leetcode.com/problems/number-of-provinces
* @brief   
* Time Complexity: 
* Space Complexity: 
* Build using .\build.bat "SOLVED" "number-of-provinces"
*/
#include <allheaders.h>
using namespace std;
class UnionFind{
    public:
        int count;
        vector<int> root,rank;
        UnionFind(int n): count(n), root(n), rank(n,0){
            for(int i=0;i<n;i++)
                root[i]=i;
        }
        int Find(int x){
            if( x == root[x])
                return x;
            root[x] = Find(root[x]); //path compression
            return root[x];
        }
        void Union(int x,int y){
            int rootx = Find(x), rooty= Find(y);
            if(rootx != rooty){
                count--;
                if(rank[rootx] > rank[rooty]) //assign smaller tree to larger.
                    root[rooty] = rootx;
                else if( rank[rootx] < rank[rooty])
                    root[rootx] = rooty;
                else{
                    rank[rootx]++;
                    root[rooty] = rootx;
                }
            }
        }
};

class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        UnionFind uf(n);
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            if(isConnected[i][j])
                uf.Union(i,j);
        return uf.count;

    }
};
void Test(const std::string& inputfile, const std::string& outputfile) {
;    
}

int main(int argc, char* argv[]) {

    Common().parseArguments(argc,argv);

    Test(argv[1], argv[2]);

    return 0;
}
    