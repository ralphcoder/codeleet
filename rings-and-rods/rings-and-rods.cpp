class Solution {
public:
    int countPoints(string rings) {
        map<int,string>ans;
        int count=0;
        for(int i =0;i<rings.size();i+=2)
        {   int pos=int(rings[(i+1)])-'0';
                char ch=rings[i];
         cout<<ans[pos];
             if(ans[pos].size()==0)
                ans[pos]+=ch;
            else if(ans[pos].size()==1 &&ans[pos][0]!=ch)
                ans[pos]+=ch;
            else if(ans[pos].size()==2 && ans[pos][0]!=ch && ans[pos][1]!=ch) ans[pos]+=ch,count++;
               
        }
            return count;
    }
};