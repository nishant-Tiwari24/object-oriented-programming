
#include <iostream>

class TimeDuration {
public:
    int hours, minutes, seconds;

    TimeDuration(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    void add(const TimeDuration& other) {
        seconds += other.seconds;
        minutes += seconds / 60;
        seconds %= 60;
        minutes += other.minutes;
        hours += minutes / 60;
        minutes %= 60;
        hours += other.hours;
    }

    void display() const {
        std::cout << "Time: " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << std::endl;
    }
};

int main() {
    int h1, m1, s1, h2, m2, s2;
    std::cin >> h1 >> m1 >> s1;
    std::cin >> h2 >> m2 >> s2;

    TimeDuration duration1(h1, m1, s1);
    TimeDuration duration2(h2, m2, s2);

    duration1.add(duration2); 
    duration1.display(); 

    return 0;
}