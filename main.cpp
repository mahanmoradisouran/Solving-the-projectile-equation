#include <bits/stdc++.h>

using namespace std;

int main()
{
    double PI = 3.14159265359, v, a, g, landing_point, landing_time, climax, climax_time, climax_x;

    cout << "Please enter the values of the initial velocity, the angle with the x-axis, and the acceleration of gravity, respectively (v , a , g) : ";
    cin >> v >> a >> g;

    // تبدیل درجه به رادیان
    a = a * (PI / 180);

    landing_point = pow(v, 2) * sin(2 * a) / g;
    landing_time = (v * sin(a)) / (0.5 * g);
    climax = ((0 - pow(v, 2)) / (-2 * g));
    climax_time = v * sin(a) / g;
    climax_x = v * sin(a) * climax_time;

    cout << "The horizontal distance of the landing point from the launch point : " << climax << endl;
    cout << "The highest point relative to the surface of the earth : " << landing_point << endl;
    cout << "Time to reach the surface of the earth : " << landing_time << endl;
    cout << "Time to reach the climax : " << climax_time << endl;
    cout << "Horizontal distance to reach the apex : " << climax_x << endl;

    return 0;
}