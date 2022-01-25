C++, Follow up - for any no of adjacent and equal letters
```
string removeDuplicates(string s) {
string res = "";
for (char  ch : s)
if (res.size() && ch == res.back())
res.pop_back();
else
res.push_back(ch);
return res;
}
```