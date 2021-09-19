// Viết chương trình nhập vào một ngày. Tìm ngày kế tiếp và xuất kết quả
#include <iostream>
using namespace std;

struct Date
{
	int DD,MM,YYYY;
};

void input_date(Date& x, int& LastDay)
{
	cout << "Enter day (DD): ";
	cin >> x.DD;
	cout << "Enter month (MM): ";
	cin >> x.MM;
	cout << "Enter year (YYYY): ";
	cin >> x.YYYY;
	switch (x.MM)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		LastDay = 31;
		break;
	case 4: case 6: case 9: case 11:
		LastDay = 30;
		break;
	case 2:
		if (x.YYYY % 400 == 0 || (x.YYYY % 4 == 0 && x.YYYY % 100 != 0))
			LastDay = 29;
		else LastDay = 28;
		break;
	default: LastDay = 0;
	}
	if (LastDay == 0 || x.YYYY < 1 || (LastDay != 0 && (x.DD > LastDay || x.DD < 1)))
	{
		cout << "Invalid Date, please try again !:"<<endl;
		input_date(x, LastDay);
	}
}
void next_day(Date x,Date &y,int n)
{
	if (x.DD < n)
	{
		y.DD = x.DD + 1;
		y.MM = x.MM;
		y.YYYY = x.YYYY;
	}
	else
	{
		if (x.MM != 12)
		{
			y.DD = 1;
			y.MM = x.MM + 1;
			y.YYYY = x.YYYY;
		}
		else
		{
			y.DD = 1;
			y.MM = 1;
			y.YYYY = x.YYYY + 1;
		}
	}
}
int main()
{
	Date Day1, Day2;
	int LastDay;
	input_date(Day1,LastDay);
	next_day(Day1, Day2, LastDay);
    cout << "The next date is: " << Day2.DD << "/" << Day2.MM << "/" << Day2.YYYY<<endl;
	return 0;
}