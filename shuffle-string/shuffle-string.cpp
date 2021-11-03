class Solution {
public:
    string restoreString(string s, vector<int>& v) {
        int max=v[0];
         int min=v[0];
        string str="";
        for(int i:v)
        {
            if(i>max)max=i;
            if(i<min)min=i;
        }
        for(int i=min;i<=max;i++)
        {
             auto it = find(v.begin(), v.end(), i);
             int index = it - v.begin();
            str+=s[index];
        }
        return str;
    }
};