#ifndef DATE_H
#define DATE_H

class Date{
    public:
        Date();
        void init_date(int init_day, int init_month, int init_year);

        unsigned int getDay(int getDay)const;
        unsigned int getMonth(int getMonth)const;
        unsigned int getYear(int getYear)const;

        void setDay(unsigned int setDay);
        void setMonth(unsigned int setMonth);
        void setYear(unsigned int setYear);

        void displayDate();

    private:
        int day;
        int month;
        int year;

};

#endif
