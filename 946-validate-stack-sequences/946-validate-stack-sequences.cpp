class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>stk;
        int start=0;
        for(int x:pushed){
            stk.push(x);
            while(stk.size()>0 && popped[start]==stk.top()){
                stk.pop();
                start++;
            }
        }
        int end=popped.size();
        return start==end;
    }
};