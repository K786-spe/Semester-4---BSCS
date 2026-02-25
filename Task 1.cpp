#include <iostream>
using namespace std;




class Course {
protected:

	virtual void Duration() = 0;
	
};

class OnlineCourse : virtual public Course {
private:
	int weeks;
	int houresperweeks;
public:
	void Weeks(int w) {
		weeks = w;
	}
	void Houresperweek(int h) {
		houresperweeks = h;
	}
	void Duration()override {
		cout << "Weeks: " << weeks << "\nHouresPerWeek: " << houresperweeks << endl;

	}
	
};

class OfflineCourse :public Course {
private:
	int monthes;
	int houresperday;
	
public:
	void Monthes(int m) {
		monthes = m;
	}
	void Houresperday(int h) {
		houresperday = h;
	}
	void Duration()override {
		cout << "Monthe's: " << monthes << "\nHouresPerday: " << houresperday << endl;

	}
	
};

int main() {
	OnlineCourse p;
	cout << "\nDuration Of OnlineCourse is:\n";
	p.Weeks(10);
	p.Houresperweek(3);
	p.Duration();
	OfflineCourse q;
	cout << "\n\n\nDuration Of OfflineCourse is:\n";
	q.Monthes(10);
	q.Houresperday(3);
	q.Duration();
	cout << endl;
}