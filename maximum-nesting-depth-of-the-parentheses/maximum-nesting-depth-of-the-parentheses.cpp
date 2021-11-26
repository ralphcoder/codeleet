class Solution {
public:
    int maxDepth(string s) {
        int depth=0;int val=0;
        for(char ch:s)
        {
            if(ch=='(')
                depth++;
            if(ch==')')
                depth--;
            if(depth>val)
                val=depth;
        }
        return val;
    }
};