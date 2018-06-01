#include <iostream>
#include <chrono>
#include <ratio>

using namespace std;

/*
 *
  typedef ratio<1,       1000000000000000000> atto;
  typedef ratio<1,          1000000000000000> femto;
  typedef ratio<1,             1000000000000> pico;
  typedef ratio<1,                1000000000> nano;
  typedef ratio<1,                   1000000> micro;
  typedef ratio<1,                      1000> milli;
  typedef ratio<1,                       100> centi;
  typedef ratio<1,                        10> deci;
  typedef ratio<                       10, 1> deca;
  typedef ratio<                      100, 1> hecto;
  typedef ratio<                     1000, 1> kilo;
  typedef ratio<                  1000000, 1> mega;
  typedef ratio<               1000000000, 1> giga;
  typedef ratio<            1000000000000, 1> tera;
  typedef ratio<         1000000000000000, 1> peta;
  typedef ratio<      1000000000000000000, 1> exa;

 */

int main()
{
    typedef chrono::duration<int> second_type;
    typedef chrono::duration<int, std::milli> millisecond_type;
    typedef chrono::duration<int, std::ratio<60 * 60>> hour_type;

    hour_type h_one_day(24);
    second_type s_one_day(60 * 60 * 24);
    millisecond_type ms_one_day(s_one_day);

    second_type s_one_hour(60 * 60);
    hour_type h_one_hour(std::chrono::duration_cast<hour_type>(s_one_hour));
    millisecond_type ms_one_hour(s_one_hour);

    cout << ms_one_hour.count() << "ms in 1h" << endl;
    cout << h_one_day.count() << "h in 1day" << endl;
    cout << ms_one_day.count() << "ms in 1day" << endl;

    return 0;
}