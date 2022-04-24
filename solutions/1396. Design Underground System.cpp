class UndergroundSystem {
    unordered_map<int,pair<string,int>> checkInTrack;
    unordered_map<string,pair<int,int>> path;
​
public:
    UndergroundSystem() {}
    
    void checkIn(int id, string stationName, int t) {
        checkInTrack[id]={stationName,t};
    }
    
    void checkOut(int id, string stationName, int t) {
        // now to checkout get the cityName with the same if from where he starts travelling
        auto place = checkInTrack[id]; checkInTrack.erase(id);
        string pathName = place.first+"_"+stationName;
        path[pathName].first+=(t - place.second);
        path[pathName].second+=1;
​
    }
    
    double getAverageTime(string startStation, string endStation) {
        string pathName = startStation+"_"+endStation;
        auto &root = path[pathName];
        return (double)root.first/root.second;
    }
};
​
/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */
