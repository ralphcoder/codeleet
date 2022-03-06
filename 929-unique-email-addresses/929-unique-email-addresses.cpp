class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        int ans=0;
        map<string,int>a;
        for(int i=0;i<emails.size();i++)
        {
           size_t atr=emails[i].find('@');
            string temp="";
           for(int j=0;j<emails[i].size();j++)
           { char ch=emails[i][j];
                if(ch=='+' || ch=='@')break;
               if(ch!='.') temp+=ch;
           }
            cout<<temp<<" ";
            temp+=emails[i].substr(atr);
            cout<<temp<<"\n";
            if(a[temp]++ ==0)ans++;
        }
        return ans;
    }
};