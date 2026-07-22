#include "my_math.h"
#include "math_utils.h"
#include <nlohmann/json.hpp>

using namespace std;

int main()
{
    cout << "here" << endl;
    cout << my_math::add(21, 21) << endl;
    cout << math_utils::multiply(10, 2) << endl;
    cout << math_utils::subtract(20, 1) << endl;
}