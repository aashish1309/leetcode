class MyCalendar {
public:
    vector<int> s;
    vector<int> e;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        for(int i = 0; i < s.size(); i++) {
            if((start < s[i] && end <= s[i]) || (s[i] < start && e[i] <= start)) continue;
            else return false;
        }
        s.push_back(start);
        e.push_back(end);
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */