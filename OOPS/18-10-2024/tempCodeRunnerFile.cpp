// You are using GCC
#include<iostream>
using namespace std;
 
class Time
{
	int hours;
	int minutes;
	public:
 
	Time()
	{
    	hours=0;
    	minutes=0;
	}
	Time(int hours, int minutes)
	{
    	this->hours=hours;
    	this->minutes=minutes;
	}
	void displayTime();
	Time operator++();
	Time operator++(int);
};
void Time::displayTime()
{
//Write your code here
    int Hours = hours % 12;
    // if (Hours == 0) {
    //     Hours = 12;
    // }
    if (Hours < 10) {
        cout << "0" << Hours << ":";
    } else {
        cout << Hours << ":";
    }
    
    if (minutes < 10) {
        cout << "0" << minutes << " ";
    } else {
        cout << minutes % 60 << " ";
    }
    
    if (hours / 12 >= 1) {
        if (hours < 24) {
            cout << "pm";
        } else {
            cout << "am";
        }
    } else {
        cout << "am";
    }
    
    cout << endl;
    
}
Time Time::operator++(int)
{
	//Write your code here
	Time t = *this;
	minutes += 1;
	
	if (minutes >= 60) {
	    minutes = 0;
	    hours += 1;
	}
	
	return t;
}
Time Time::operator++()
{
	//Write your code here
	minutes += 1;
	
	if (minutes >= 60) {
	    minutes = 0;
	    hours += 1;
	}
	
}
 
int main()
{
	int h,m;
	cin>>h;
	cin>>m;
 
	Time T1(h,m);
	++T1;
	T1.displayTime();
	T1++;
	T1.displayTime();
 
	return 0;
}


// You are using GCC
// #include<iostream>
// using namespace std;
 
// class Time
// {
// 	int hours;
// 	int minutes;
// 	public:
 
// 	Time()
// 	{
//     	hours=0;
//     	minutes=0;
// 	}
// 	Time(int hours, int minutes)
// 	{
//     	this->hours=hours;
//     	this->minutes=minutes;
// 	}
// 	void displayTime();
// 	Time operator++();
// 	Time operator++(int);
// };
// void Time::displayTime()
// {   
//     hours += minutes % 60;
//     cout << hours % 12 << ":";
//     cout << minutes % 60 << " ";
//     if (hours / 12 >= 1) {
//         cout << "pm";
//     } else {
//         cout << "am";
//     }
    
//     cout << endl;
// }
// Time Time::operator++()
// {
// 	minutes += 1;
// }
// Time Time::operator++(int)
// {
// 	minutes += 1;
// }
 
// int main()
// {
// 	int h,m;
// 	cin>>h;
// 	cin>>m;
 
// 	Time T1(h,m);
// 	++T1;
// 	T1.displayTime();
// 	T1++;
// 	T1.displayTime();
 
// 	return 0;
// }