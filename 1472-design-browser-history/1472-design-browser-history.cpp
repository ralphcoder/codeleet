class BrowserHistory {
public:
    stack<string> history;
    stack<string> future;
    BrowserHistory(string homepage) {
       history.push(homepage);
        future = stack<string>();  // reinitialising 
    }
    
    void visit(string url) {
         history.push(url);
        future = stack<string>(); 
    }
    
    string back(int steps) {
        while(steps-- && history.size()>1)
        {
            future.push(history.top());
            history.pop();
        }
       return  history.top();
    }
    
    string forward(int steps) {
        while(steps-- && future.size()>0)
        {
            history.push(future.top());
            future.pop();
        }
      return  history.top();
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url); 
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */