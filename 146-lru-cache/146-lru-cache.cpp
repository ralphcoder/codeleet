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
        node* tt=head->next;
        tempr->next=tt;
        tempr->prev=head;
        head->next=tempr;
        tt->prev=tempr;
    }
    void deletenode(node*temp){
        node *tprev=temp->prev;
        node *tnext=temp->next;
        tprev->next=tnext;
        tnext->prev=tprev;
    }

    int get(int key) {
        if(a.find(key)!=a.end())
        {
            node*tempe=a[key];
            int value=tempe->val;
            a.erase(key);
            deletenode(tempe);
            addnode(tempe);
            a[key]=head->next;
            return value;
        }
        return -1;
    }

    void put(int key, int value) {
        if(a.find(key)!=a.end())
         {
             node *exis=a[key];
             a.erase(key);
             deletenode(exis);
         }
        if(a.size()==cap)
        {
            a.erase(tail->prev->key);
            deletenode(tail->prev);
        }
        addnode(new node(key,value));
        a[key]=head->next;
    }
};