#include <iostream>
#include <iomanip>

int main() {
    int principal, num_years;
    float rate_of_interest;

    std::cin >> principal >> num_years >> rate_of_interest;

    float simple_profit = principal * rate_of_interest * num_years / 100.0;

    std::cout << std::fixed << std::setprecision(2) << simple_profit << std::endl;

    return 0;
}
