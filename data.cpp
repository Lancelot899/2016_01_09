#include <iostream>
#include <boost/date_time/gregorian/gregorian.hpp>
#include <string>

using namespace boost::gregorian;

int main(){
    date d1(2016,1,9);
    std::cout << d1 << std::endl;
    std::cout << day_clock::local_day() << std::endl;
    std::cout << day_clock::universal_day() << std::endl;
    std::cout << d1.year() << std::endl;
    std::cout << d1.day_of_week() << std::endl;

    days dd1(10);
    weeks w1(2);
    std::cout << dd1 + w1 <<std::endl;
    // std::cout << w1 + dd1 <<std::endl;

    return 0;
}

