#include <stdio.h>

int main(void)
{
	int year;
	int month;
	int day;
	int nDay;
	int i, leap = 0;;
	int monthDays[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 31, 30, 31, 30};
	int monthDays1[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 31, 30, 31, 30};

	printf("Input the date pls[yyyy-mm-dd]:");
	scanf("%d-%d-%d", &year, &month, &day);
	if (year<=0 | month<=0 | month > 12) {
		printf("check your input\n");
		return 0;
	}

	/*If leap year*/
	if ((!(year % 4) && (year % 100)) | !(year % 400)) {
		if (day < 0 | day > monthDays1[month]) {
			printf("check your input\n");
			return 0;
		}

		for (i = 0; i < month; i++){	
			nDay += monthDays1[i];
		}

	} else {
		if (day < 0 | day > monthDays[month]) {
			printf("check your input\n");
			return 0;
		}

		for (i = 0; i < month; i++){	
			nDay += monthDays[i];
		}
	}
		
   nDay += day;

   printf("Your date is the %d day of the year!\n", nDay);

	return 0;
}
