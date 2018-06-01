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
    return 0;
}
