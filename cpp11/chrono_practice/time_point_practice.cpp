#include <iostream>
#include <chrono>
#include <ctime>

using namespace std;
using namespace std::chrono;


int main()
{
    // 记录距离计算机元年时间1秒的时间点
    time_point <system_clock,duration<int>> tp_seconds (duration<int>(1));
    cout << tp_seconds.time_since_epoch().count() << endl;
    // 100毫秒的时候
    time_point<system_clock, duration<int, milli>> ss(duration<int, milli>(100));
    cout << ss.time_since_epoch().count()<< endl;
    return 0;
}

