#include <iostream>

using namespace std;

bool is_leap(int year)
{
	if(year%400 == 0 || (year%4 == 0 && year%100 != 0)) return true;
	else return false;
}

bool is_valid_day(int day, int month, int year)
{
	if(day < 1) return false;
	switch(month)
	{
		case 1: 
		case 3: 
		case 5: 
		case 7: 
		case 8: 
		case 10: 
		case 12:
			if(day<=31) return true;
		case 4: 
		case 6: 
		case 9: 
		case 11:
			if(day<=30) return true;
		case 2:
			if(day<=28) return true;
			else if(is_leap(year) && day<=29) return true;
			default: return false;
	}
	return false;
}
int main(){
		int day, month, year;
		char a, b;
		cin >> day >> a >> month >> b >> year;
		while(!is_valid_day(day, month, year))
		{
			cout << "Invalid day - Please try with a valid day !" << endl;
			cin >> day >> a >> month >> b >> year;
			
		}
		
		int k, difference[100], n = 0;
		do
		{
			cin >> k;
			if(k!=0) difference[n] = k;
			n++;
		} while(k!=0);
		
		for(int i = 0; i<n-1; i++)
		{
			int day_ = day, month_ = month, year_ = year;
			while(difference[i] > 0)
			{
				difference[i]--;
				day_++;
				if(!is_valid_day(day_,month_,year_))
				{
					if(month_ < 12) {month_++; day_ = 1;}
					else if(month_ = 12) {month_=1; day_=1;year_++;}
				}
			}
			while(difference[i] < 0)
			{
				difference[i]++;
				day_--;
				if(!is_valid_day(day_,month_,year_))
				{
					if(month_>1)
					{
						month_--;
						day_ = 31;
						while(!is_valid_day(day_,month_,year_))
						{
							day_--;
						}
					}
					else if(month_=1)
					{
						month_=12; day_=31;year_--;
					}
				}
			}
		if (day_ < 10) cout << 0 << day_;
		else cout << day_;
		cout << '-';
		if (month_ < 10) cout << 0 << month_;
		else cout << month_;
		cout << '-' << year_ << endl;
	}
		return 0;
	}

