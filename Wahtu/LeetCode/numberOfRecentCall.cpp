class RecentCounter {
public:
    RecentCounter() {
        
    }
    queue<int> q;

    int ping(int t) {
        q.push(t);

        while(q.front() < t-3000){
            q.pop();
        }

        return q.size();
    }
};
