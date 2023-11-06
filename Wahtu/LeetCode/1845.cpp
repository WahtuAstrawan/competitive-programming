class SeatManager {
public:
    set<int> seat;

    SeatManager(int n) {
        for(int i = 1; i <= n; i++){
            seat.insert(i);
        }
    }
    
    int reserve() {
        int reserve = *begin(seat);
        seat.erase(begin(seat));
        return reserve;
    }
    
    void unreserve(int seatNumber) {
        seat.insert(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */
