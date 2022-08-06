#include <QCoreApplication>
#include <QDate>
#include <QTime>

void test1()
{
    QDate dt1{2022, 4, 12};
    qDebug() << "The date is " << dt1.toString();
    QDate dt2;
    dt2.setDate(2022, 3, 3);
    qDebug() << "this date is" << dt2.toString();

    QTime tm1{17, 30, 12, 55};
    qDebug() << "The time is " << tm1.toString("hh:mm:ss.zzz");
    QTime tm2;
    tm2.setHMS(13, 52, 45, 155);
    qDebug() << "The time is " << tm2.toString("hh:mm:ss AP"); // AP or A
}

void test2()
{
    QDate cd = QDate::currentDate();
    QTime ct = QTime::currentTime();
    qDebug() << "Current date is: " << cd.toString();
    qDebug() << "Current date is: " << cd.toString("yyyy-MM-dd");
    qDebug() << "Current date is: " << cd.toString(Qt::TextDate);
    qDebug() << "Current date is: " << cd.toString(Qt::ISODate);
    qDebug() << "Current date is: " << cd.toString(Qt::RFC2822Date);
    qDebug() << "Current date is: " << cd.toString("d-MMMM-yyyy");

    qDebug() << "Current time is: " << ct.toString();
    qDebug() << "Current time is: " << ct.toString("hhmmss");
}

void test3()
{
    QList<int> years = {2012, 2013, 2014, 2015, 2016, 2017, 2018, 2019, 2020};
    for (auto year : years)
    {
        if (QDate::isLeapYear(year))
            qDebug() << year << " is a leap year";
        else
            qDebug() << year << " is not a leap year";
    }

    QList<QDate> dates{QDate{2020, 5, 11},QDate{2020, 5, 31}, QDate{2020, 2, 30}};
    for(auto date: dates){
        if(date.isValid())
            qDebug() << "Date" << date << "is valid";
        else
            qDebug() << "Date" << date << "is not valid";
    }
}

void test4()
{
    QDate cd = QDate::currentDate();
    int wd = cd.dayOfWeek();
    QLocale locale(QLocale("zh-CN"));
    qDebug() << "今天是" << locale.dayName(wd);
    qDebug() << "今天是" << locale.dayName(wd, QLocale::ShortFormat);

    QLocale usa(QLocale("en_US"));
    qDebug() << "Today is " << usa.dayName(wd);
    qDebug() << "Today is " << usa.dayName(wd, QLocale::ShortFormat);
}

void test5()
{
    QList<QString> months = {"January",
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
                             "December"};

    QDate dt1{2020, 9, 18};
    QDate dt2{2020, 2, 11};
    QDate dt3{2020, 5, 1};
    QDate dt4{2020, 12, 11};
    QDate dt5{2020, 2, 29};
    qDebug() << "There are" << dt1.daysInMonth() << "day in" << months.at(dt1.month() - 1);
    qDebug() << "There are" << dt2.daysInMonth() << "day in" << months.at(dt2.month() - 1);
    qDebug() << "There are" << dt3.daysInMonth() << "day in" << months.at(dt3.month() - 1);
    qDebug() << "There are" << dt4.daysInMonth() << "day in" << months.at(dt4.month() - 1);
    qDebug() << "There are" << dt5.daysInMonth() << "day in" << months.at(dt5.month() - 1);
    qDebug() << "There are" << dt1.daysInYear() << "day in" << dt1.year();
}

void test6(){
    QDate dt{2022,5,11};
    QDate nd = dt.addDays(55);
    QDate nm = dt.addMonths(2);
    qDebug() << dt.toString("yyyy-MM-dd") << "55 days laster is " << nd.toString("yyyy-MM-dd");
    qDebug() << dt.toString("yyyy-MM-dd") << "2 month laster is " << nm.toString("yyyy-MM-dd");

}

void test7(){
    QDateTime dt;
    dt.setSecsSinceEpoch(0);
    qDebug() << dt.toString(Qt::ISODate);

    dt.setSecsSinceEpoch(time(0)); // time(0) current time
    qDebug() << dt.toString();

    QDateTime cd = QDateTime::currentDateTime();
    qDebug() << cd.toString();

    qDebug() << time(0);
    qDebug() << cd.toSecsSinceEpoch();

}

int main(int argc, char *argv[])
{
    // QCoreApplication a(argc, argv);
    // return a.exec();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();
}
