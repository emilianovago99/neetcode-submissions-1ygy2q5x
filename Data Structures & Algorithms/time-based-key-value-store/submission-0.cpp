class TimeMap {
private:

    
    map<string,map<int,string>>mapa; 
public:

    TimeMap() {
       
    }
    
    void set(string key, string value, int timestamp) {
        mapa[key][timestamp] = value;
    }
    
    string get(string key, int timestamp) {

          if (mapa.find(key) == mapa.end()) {
            return "";
        }

        const auto& time_map = mapa[key];

        auto it = time_map.upper_bound(timestamp);

       
        if (it == time_map.begin()) {
            return "";
        }

        --it;
        return it->second;
        
    }
};
