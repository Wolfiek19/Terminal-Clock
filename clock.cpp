#include "clock.h"

Clock::Clock(){
    seconds = 0;
    minutes = 0;
    hours = 0;
    days = 0;
}

Clock::Clock(int days){
    this -> days = days;
    hours = 0;
    minutes = 0;
    seconds = 0;
}

Clock::Clock(int seconds, int minutes){
    this -> seconds = seconds;
    this -> minutes = minutes;
    hours = 0;
    days = 0;
}

Clock::Clock(int seconds, int minutes, int hours, int days){
    this -> seconds = seconds;
    this -> minutes = minutes;
    this -> hours = hours;
    this -> days = days;
}
void Clock::set_Days(int days){
    this -> days = days;
}
void Clock::set_Hours(int hours){
    if(hours < 24 && hours >= 0){
        this -> hours = hours;
    }
    else{
        days = hours/24;
        this -> hours = hours %24;
    }
}
void Clock::set_Minutes(int minutes){
    if(minutes < 60 && minutes >= 0){
        this -> minutes = minutes;
    }
    else{
        hours = minutes/60;
        this -> minutes = minutes %60;
    }
}
void Clock::set_Seconds(int seconds){
    if(seconds < 60 && seconds >= 0){
        this -> seconds = seconds;
    }
    else{
        minutes = seconds/60;
        this -> seconds = seconds %60;
    }
}
int Clock::get_Days() const{
    return days;
}
int Clock::get_Hours() const{
    return hours;
}
int Clock::get_Minutes() const{
    return minutes;
}
int Clock::get_Seconds() const{
    return seconds;
}
void Clock::reset(){
    seconds = 0;
    minutes = 0;
    hours = 0;
    days = 0;
}
Clock operator+(Clock a, Clock b){
    int newSeconds = a.seconds + b.seconds;
    int newMinutes = a.minutes + b.minutes;
    int newHours = a.hours + b.hours;
    int newDays = a.days + b.days;

    if(newSeconds > 60){
        int remainder = newSeconds%60;
        newSeconds = remainder;
        newMinutes = newMinutes + 1;
    }
    if(newMinutes > 60){
        int remainder = newMinutes%60;
        newMinutes = remainder;
        newHours = newHours + 1;
    }

    if(newHours > 24){
        int remainder = newHours%24;
        newHours = remainder;
        newDays = newDays + 1;
    }

    return Clock(newSeconds, newMinutes, newHours, newDays);
    
}
Clock operator-(Clock a, Clock b){
    int newSeconds = a.seconds - b.seconds;
    int newMinutes = a.minutes - b.minutes;
    int newHours = a.hours - b.hours;
    int newDays = a.days - b.days;
    return Clock(newSeconds, newMinutes, newHours, newDays);
}
Clock operator-(Clock a){
    int newSeconds = -a.seconds;
    int newMinutes = -a.minutes;
    int newHours = -a.hours;
    int newDays = -a.days;
    return Clock(newSeconds, newMinutes, newHours, newDays);
}
bool operator==(Clock a, Clock b){
    if((a.seconds == b.seconds) && (a.minutes == b.minutes) && (a.hours == b.hours) && (a.days == b.days)){
        return true;
    }
    else{
        return false;
    }
}
bool operator<(Clock a, Clock b){
    if((a.seconds < b.seconds)&&(a.minutes < b.minutes)&&(a.hours < b.hours)&&(a.days < b.days)){
        return true;
    }
    else{
        return false;
    }
}
bool operator>(Clock a, Clock b){
    if((a.seconds > b.seconds)&&(a.minutes > b.minutes)&&(a.hours > b.hours)&&(a.days > b.days)){
        return true;
    }
    else{
        return false;
    }
}
ostream& operator<<(ostream& o, const Clock& myClock){
    o << myClock.days << ":" << myClock.hours << ":" << myClock.minutes << ":" << myClock.seconds;
    return o;
}
