#include <iostream>
#include <iomanip>
#include "unitlib.h"

using namespace unitlib;

void show_menu() {
    std::cout << "\n===== 单位转换器 =====\n"
              << " 1. 摄氏度 -> 华氏度\n"
              << " 2. 华氏度 -> 摄氏度\n"
              << " 3. 米 -> 英尺\n"
              << " 4. 英尺 -> 米\n"
              << " 5. 磅 -> 千克\n"
              << " 6. 千克 -> 磅\n"
              << " 0. 退出\n"
              << "请选择: ";
}

int main() {
    while (true) {
        show_menu();
        int choice = -1;
        if (!(std::cin >> choice)) break;

        if (choice == 0) { std::cout << "已退出。\n"; break; }

        std::cout << "请输入数值: ";
        double v = 0.0;
        if (!(std::cin >> v)) break;

        double r = 0.0;
        std::string from, to;

        switch (choice) {
            case 1: r = celsius_to_fahrenheit(v); from = "C";   to = "F";    break;
            case 2: r = fahrenheit_to_celsius(v); from = "F";   to = "C";    break;
            case 3: r = meters_to_feet(v);        from = "m";   to = "ft";   break;
            case 4: r = feet_to_meters(v);        from = "ft";  to = "m";    break;
            case 5: r = pounds_to_kilograms(v);   from = "lb";  to = "kg";   break;
            case 6: r = kilograms_to_pounds(v);   from = "kg";  to = "lb";   break;
            default: std::cout << "无效选项。\n"; continue;
        }

        std::cout << std::fixed << std::setprecision(4)
                  << "结果: " << v << " " << from << " = " << r << " " << to << "\n";
    }
    return 0;
}