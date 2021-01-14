int numberOfLessonsPerDay[7]{};

constexpr int daysPerWeek{7};
int numberOfLessonsPerDay[daysPerWeek]{};

enum Weekday
{
	monday,		tuesday,
	wednesday,		thursday,
	friday,		saturday,	sunday,
	
	maxWeekday
};
int numberOfLessonsPerDay[maxWeekDay]{};

#define DAYS_PER_WEEK 7
int numberOfLessonsPerDay[DAYS_PER_WEEK]{};
