#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int number; // 1 to 31
    int month; // 0 to 12
    int year; // 1900 to 3000
    int day; // 1 to 7
}date;


const int month_has[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

const char day_txt[][20] =
{
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday",
    "Sunday"
};


char month_txt[][20] =
{
    "Junary",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "Dicember"
};




void date_zero(date *);
void date_print(date);
date date_add (date);


int main()
{
    date one_day;
    int count = 0;

    date_zero(&one_day);
    date_print(one_day);

    do
    {
        one_day = date_add(one_day);
        if((one_day.day == 5)&&(one_day.number ==1))
        {
            count++;
        }

    }
    while((one_day.year != 2000) || (one_day.month != 11) || (one_day.number != 31));

    date_print(one_day);
    printf("Sabado como dia 1 = %d", count);
    return 0;
}


void date_zero(date *my_day)
{
    my_day->number = 1;
    my_day->month = 0;
    my_day->year = 1901;
    my_day->day = 1;
}


void date_print(date my_day)
{
    printf("%d ", my_day.number);
    printf("%s ", month_txt[my_day.month]);
    printf("%d, ", my_day.year);
    printf("%s \n", day_txt[my_day.day]);
}


date date_add(date my_date)
{
    my_date.day++;
    my_date.number++;
    int leap = 0;

    if((my_date.month == 1) && (my_date.number ==  29)) // it is February

    {
        if((my_date.year%4) == 0) // is leap is year is divisible by 4
        {
            leap = 1;
        }
        if(my_date.year == 1900) // not leap
        {
                leap = 0;
        }
    }
    if(my_date.day > 6)
    {
        my_date.day = 0;
    }
    if(my_date.number > (month_has[my_date.month]+leap))
    {
        my_date.number = 1;
        my_date.month ++;
    }

    if(my_date.month > 11)
    {
        my_date.month = 0;
        my_date.year++;
    }



    return my_date;
}

