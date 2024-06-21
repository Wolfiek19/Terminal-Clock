#include <iostream>
using namespace std;
class Clock{
    friend Clock operator+(Clock a,Clock b);
    friend Clock operator-(Clock a,Clock b);
    friend Clock operator-(Clock a);
    friend bool operator==(Clock a, Clock b);
    friend bool operator<(Clock a, Clock b);
    friend bool operator>(Clock a, Clock b);
    friend ostream& operator<<(ostream& o, const Clock& myClock);
    public:
        Clock();
        Clock(int days);
        Clock(int seconds, int minutes);
        Clock(int second, int minutes, int hours, int days);
        void reset();
        void set_Days(int days);
        void set_Hours(int hours);
        void set_Minutes(int minutes);
        void set_Seconds(int seconds);
        int get_Days() const;
        int get_Hours() const;
        int get_Minutes() const;
        int get_Seconds() const;
    private:
        int seconds;
        int minutes;
        int hours;
        int days;

};