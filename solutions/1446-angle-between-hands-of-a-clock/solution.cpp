class Solution {
public:
    double angleClock(int hour, int minutes) {
        
        double angleahead = (1.0 * minutes) / 2;
        if(hour==12) hour = 0;
        double hourangle = hour*30.0 + angleahead;
        double minangle = minutes*6.0;
        return min(abs(hourangle - minangle),abs(360.0-max(hourangle,minangle)+min(hourangle,minangle)));
    }
};
