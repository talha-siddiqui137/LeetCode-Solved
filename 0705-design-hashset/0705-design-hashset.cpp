class MyHashSet {
public:
    int key;
    vector<int> vec;

    MyHashSet() {
    }
    
    void add(int key) {
        if(vec.size() == 0){
            vec.push_back(key);
        }else{
            bool isPresent = false;
            for(int i = 0 ; i < vec.size() ; i++){
                if(vec[i] == key){
                    isPresent = true;
                    break;
                }
            }
            if(isPresent == false){
                vec.push_back(key);
            }
        }
    }
    
    void remove(int key) {
        for(int i = 0; i< vec.size() ;i++){
            if(vec[i] == key){
                vec.erase(vec.begin()+i);
            }
        }
    }
    
    bool contains(int key) {
        for(int i = 0; i< vec.size() ; i++){
            if(vec[i] == key){
                return true;
            }
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */