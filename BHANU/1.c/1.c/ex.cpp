//#include<stdio.h>
//int factorial(int);
//int main(){
//	int x,y;
//	scanf("%d",&x);
//	y = factorial(x);
//	printf("%d",y);
//}
//int factorial(int fact){
//	if(fact==0 || fact ==1){
//		return 1;
//	}
//	else{
//		fact * factorial(fact - 1);
//	}
//}





#include <iostream>

#include <iomanip>
using namespace std;
class Calendar {
private:
    int month, year;
    string months[12] = {"January", "February", "March", "April", "May", "June","July", "August", "September", "October", "November", "December"};
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

public:
    // Constructor
    Calendar(int m, int y) {
        month = m;
        year = y;
        if (isLeapYear()) days[1] = 29;
    }

    // Check leap year
    bool isLeapYear() {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }

    // Print calendar
    void printCalendar() {
        cout << "\t" << months[month - 1] << " " << year << endl;
        cout << "Su Mo Tu We Th Fr Sa" << endl;

        int day = 1;
        for (int i = 0; i < days[month - 1]; i++) {
            cout << setw(3) << day;
            if ((i + 1) % 7 == 0) cout << endl;
            day++;
        }
    }
};

int main() {
    int month, year;
    cout<<"hello world"<<endl;
    cout << "Enter month (1-12): ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;

    Calendar cal(month, year);
    cal.printCalendar();

    return 0;
}

