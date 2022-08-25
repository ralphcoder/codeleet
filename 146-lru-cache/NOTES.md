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
​
/**
* Your LRUCache object will be instantiated and called as such:
* LRUCache* obj = new LRUCache(capacity);
* int param_1 = obj->get(key);
* obj->put(key,value);
*/
```