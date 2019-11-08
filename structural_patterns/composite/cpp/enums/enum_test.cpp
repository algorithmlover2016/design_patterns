#include <functional>
#include <iostream>
#include <type_traits>

#include "enums/enum.hpp"

//Scoped enum
enum class Color {
 Red,
 Green,
 Blue
};

//Unscoped enum
enum Orientation {
 Horizontal,
 Vertical
};

//Another scoped enum
enum class ExecStatus {
 Idle,
 Started,
 Running
};

// template<typename T>
// std::ostream& operator<<(typename std::enable_if<std::is_enum<T>::value, std::ostream>::type& stream, const T& e) {
//  return stream <<static_cast<typename std::underlying_type<T>::type>(e);
// }
// g++ -std=c++11 enum_test.cpp -o enum_main

int main() {
 std::cout <<Color::Blue <<"\n";
 std::cout <<Vertical <<"\n";
 std::cout <<ExecStatus::Running <<"\n";
 return 0;
}

// g++ -std=c++11 -I. head.h enums/enum.hpp enum_test.cpp -o enum_main
