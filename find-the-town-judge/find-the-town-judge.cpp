class Solution {
public:
int findJudge(int N, vector<vector<int>>& trust) {
  vector<int> trusts(N + 1), trusted(N + 1);
  for (auto &t : trust) ++trusts[t[0]], ++trusted[t[1]];
  for (auto i = 1; i <= N; ++i) if (trusts[i] == 0 && trusted[i] == N - 1) return i;
  return -1;
}
};