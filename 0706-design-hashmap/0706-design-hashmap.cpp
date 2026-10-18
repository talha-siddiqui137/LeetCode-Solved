class MyHashMap {
public:
    vector<int> k;
    vector<int> v;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        if(k.size()== 0){
            k.push_back(key);
            v.push_back(value);
        }else{
            bool isPresent = false;
            for(int i = 0 ; i < k.size(); i++){
                if(k[i] == key){
                    v[i] = value;
                    isPresent = true;
                    break;
                }
            }
            if(isPresent == false){
                k.push_back(key);
                v.push_back(value);
            }
        }
    }
    
    int get(int key) {
        for(int i = 0 ; i < k.size() ; i++){
            if(k[i] == key){
                return v[i];
            }
        }
        return -1;
    }
    
    void remove(int key) {
        for(int i = 0 ; i < k.size(); i++){
            if(k[i] == key){
                k.erase(k.begin() + i);
                v.erase(v.begin() + i);
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */