```
vector<int> nextLargerNodes(ListNode* h) {
vector<int> res, stack;
for (auto p = h; p != nullptr; p = p->next) res.push_back(p->val);
for (int i = res.size() - 1; i >= 0; --i) {
auto val = res[i];
while (!stack.empty() && stack.back() <= res[i]) stack.pop_back();
res[i] = stack.empty() ? 0 : stack.back();
stack.push_back(val);
}
return res;
}
```