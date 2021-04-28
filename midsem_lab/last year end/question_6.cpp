#include <iostream>
using namespace std;

class Time{
	
	public:
		int hour;
		int min;
		void settime(int min, int hour);
		void showtime();
		Time sumtime(Time time2);
};

void Time::settime(int min_in, int hour_in){
	min = min_in;
	hour = hour_in;
}

void Time::showtime(){
	cout<<hour<<":"<<min<<endl;
}


Time Time::sumtime(Time time2){
	Time time3;
	time3.hour = hour + time2.hour;
	time3.min = min + time2.min;
	while(time3.min>=60){
		time3.min -= 60;
		time3.hour++;
	} 
	return time3;
}


int main(void){
	Time time1;
	Time time2;
	Time time3;
	
	int min;
	int hour;
	cout<<"Time t1"<<endl;
	cin>>hour>>min;
	time1.settime(min, hour);
	cout<<"Time t2"<<endl;
	cin>>hour>>min;
	time2.settime(min, hour);
	time3 = time1.sumtime(time2);
	time1.showtime();
	time2.showtime();
	time3.showtime();
	return 0;
}