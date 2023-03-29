#include <bits/stdc++.h>

using namespace std;

#define ll          long long
#define lp(n)       for(ll i = 0; i < (n); ++i)
#define lp1(n)      for(ll i = 1; i <= (n); ++i)
#define tc          ll testcase;   cin>>testcase;   while(testcase--)
#define all(v)      (v).begin(), (v).end()
#define allr(v)     (v).rbegin(), (v).rend()
//#define fi          first
//#define se          second
#define pb          push_back
#define yes         cout<<"YES"<<endl
#define no          cout<<"NO"<<endl
#define improve     ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define Node        ListNode
int dx[4]{-1, 0, 1, 0};
int dy[4]{0, 1, 0, -1};

/* 3ein39
                    " وَأَن لَّيْسَ لِلْإِنسَانِ إِلَّا مَا سَعَى ﴿39﴾ وَأَنَّ سَعْيَهُ سَوْفَ يُرَى ﴿40﴾ ثُمَّ يُجْزَاهُ الْجَزَاء الْأَوْفَى "
                                      My way to My dream....
*/
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;

     TreeNode() : val(0), left(nullptr), right(nullptr) {}

     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

// O(N) solution
class Solution {
public:
    TreeNode *helper(vector<int>& preorder, int min, int max, int& i) {
        if (i >= preorder.size() || preorder[i] < min || preorder[i] > min)
            return nullptr;
        TreeNode* root = new TreeNode(preorder[i++]);

        root->left = helper(preorder ,min, root->val, i);
        root->right = helper(preorder, root->val, max, i);

        return root;
    }

    TreeNode *bstFromPreorder(vector<int> &preorder) {
        int i = 0;
        return helper(preorder, INT32_MIN, INT32_MAX, i);
    }
};
