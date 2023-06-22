#include <stdio.h>
#include "main.h"

int calculate_day_of_year(int month, int day);

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        if (month > 2 || (month == 2 && day == 29))
        {
            printf("Day of the year: %d\n", calculate_day_of_year(month, day));
            printf("Remaining days: %d\n", 366 - calculate_day_of_year(month, day));
        }
        else
        {
            printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        }
    }
    else
    {
        if (month == 2 && day == 29)
        {
            printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        }
        else
        {
            printf("Day of the year: %d\n", calculate_day_of_year(month, day));
            printf("Remaining days: %d\n", 365 - calculate_day_of_year(month, day));
        }
    }
}

/**
 * calculate_day_of_year - calculates the day of the year for a given date
 * @month: month in number format
 * @day: day of month
 * Return: the day of the year
 */
int calculate_day_of_year(int month, int day)
{
    int dayOfYear = 0;
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};

    for (int i = 1; i < month; i++)
    {
        dayOfYear += daysInMonth[i];
    }

    dayOfYear += day;
    return dayOfYear;
}

