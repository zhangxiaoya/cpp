#include <iostream>
#include <chrono>
#include <ctime>

using namespace std;
using namespace std::chrono;

// 计算从计算机元年时间到现在一共多少天
int main()
{
    typedef chrono::duration<int, std::ratio<60 * 60 * 24, 1>> day_type;
    chrono::time_point<system_clock, day_type> today = chrono::time_point_cast<day_type, system_clock, system_clock::duration>(
            system_clock::now());

    auto day_time = today.time_since_epoch().count();
    cout << day_time << "天" << endl;


    day_type one_day(1);

    auto now = chrono::system_clock::now();
    auto tomorrow = now + one_day;
    time_t tommorow_t = system_clock::to_time_t(tomorrow);
    cout << "明天是 " << ctime(&tommorow_t) << endl;


    chrono::time_point<chrono::steady_clock, day_type> today_steady =
            chrono::time_point_cast<day_type, chrono::steady_clock, chrono::steady_clock::duration>(
            chrono::steady_clock::now());

    cout << "稳定版本的now " << today_steady.time_since_epoch().count() << "天" << endl;

    // 使用steady_clock的时候，返回的时间点不会计算到计算机元年的时间，两者的定义就不同
    // systen_clock -- Time returned represents wall time from the system-wide clock.
    // steady clcck -- Time returned has the property of only increasing at a uniform rate.
    return 0;
}
