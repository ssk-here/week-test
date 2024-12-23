
/**
* @file serialize-and-deserialize-binary-tree.cpp
* @author [Your Name]
* @date [Current Date]
* @see https://leetcode.com/problems/serialize-and-deserialize-binary-tree
* @brief   
* Time Complexity: 
* Space Complexity: 
* Build using .\build.bat "NEETCODE" "serialize-and-deserialize-binary-tree"
*/
#include <allheaders.h>
using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));
void Test(const std::string& inputfile, const std::string& outputfile) {
;    
}

int main(int argc, char* argv[]) {

    Common().parseArguments(argc,argv);

    Test(argv[1], argv[2]);

    return 0;
}
    