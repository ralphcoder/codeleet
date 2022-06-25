class Solution {
public:
    int fib(int n) {
      if(n <= 1) // base condition
		return n;
	return fib(n - 1) + fib(n - 2);
	// or 1-liner:
	// return n <= 1  ? n : fib(n - 1) + fib(n - 2);  
    }
};