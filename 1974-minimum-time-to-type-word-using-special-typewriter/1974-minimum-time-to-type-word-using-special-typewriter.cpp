class Solution {
public:
    int minTimeToType(string w,int ans=0) {
        
        if(w[0]!='a')w='a'+w;
        else ans=1;
        cout<<w;
        for(int i=1;i<w.size();i++){
          cout<<abs(w[i]-w[i-1])<<" "<<abs(w[i-1]-97)+abs(123-w[i])<<" "<<abs(w[i]-97)+abs(123-w[i-1])<<"  ";
            ans+=min(abs(w[i]-w[i-1]),min(abs(w[i-1]-97)+abs(123-w[i]),abs(w[i]-97)+abs(123-w[i-1])));
            ans++;
        }
        return ans;
    }
};