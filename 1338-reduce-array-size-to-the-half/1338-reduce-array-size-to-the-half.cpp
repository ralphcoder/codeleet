class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> map={};
        for(auto i:arr)
        map[i]++;
        int sum=0,c=0;
        priority_queue<int> maxh;
        for(auto i:map)
          maxh.push(i.second);
        
        for(int i=0;i<maxh.size();i++)
        {
            sum+=maxh.top();
            ++c;
            if(sum>=(arr.size()/2))
                break;
            maxh.pop();
        }
        return c;
    }
};