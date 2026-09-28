class TimeMap {
public:
    unordered_map<string, map<int, string>> m;

    TimeMap() {}

    void set(string key, string value, int timestamp) {
        m[key].insert({timestamp, value});
    }

    string get(string key, int timestamp) {
       if(m.find(key) != m.end()) {
        auto& mp = m[key];
        auto it = mp.upper_bound(timestamp);
        if(it == mp.begin()) return "";
        it--;
        return it->second;
       }
       return "";
    }
};