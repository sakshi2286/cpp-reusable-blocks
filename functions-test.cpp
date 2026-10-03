// ========================================================
// 💻 TOPIC 1: C++ FUNCTIONS (REUSABLE CODE BLOCK)
// ========================================================

#include <iostream>
#include <string>

// Function definition to validate coupons
void checkCoupon(std::string studentName, std::string couponCode) {
    std::cout << "\n⏳ Validating coupon code in system..." << std::endl;
    
    if (couponCode == "WELCOME10") {
        std::cout << "✅ Success: 10% Discount applied for " << studentName << "!" << std::endl;
    } else {
        std::cout << "❌ Invalid: Coupon code '" << couponCode << "' does not exist." << std::endl;
    }
}

int main() {
    std::cout << "--- Coupon Verification System ---" << std::endl;
    
    // Testing the function with separate arguments
    checkCoupon("Priyanka Kumari", "WELCOME10");
    checkCoupon("Rahul Kumar", "WRONG50");
    
    return 0;
}