using double linked list
```
class LRUCache {
public:
class node{
public:
int val;
int key;
node *next;
node *prev;
node(int _key,int _val){
key=_key;
val=_val;
}
};
node *head=new node(-1,-1);
node *tail=new node(-1,-1);
int cap;
unordered_map<int,node*>a;
LRUCache(int capacity) {
cap=capacity;
head->next=tail;
tail->prev=head;
}
void addnode(node *tempr){