#include <iostream>
using namespace std;

class CustomerSubscription {
public:
    // Constructor for new user (Initially inactive)
    CustomerSubscription() {
        cout << "Inactive Subscription" << endl;
    }

    // Constructor for checking subscription renewal
    CustomerSubscription(bool isRenewed) {
        cout << "Inactive Subscription" << endl;
        if (isRenewed)
            cout << "Subscription Active" << endl;
        else
            cout << "Subscription Expired" << endl;
    }
};

int main() {
    bool renewalStatus;
    
    // Simulating a new user
    CustomerSubscription user1; 

    // Asking user if they renewed after a month
    cout << "Has the user renewed the subscription? (1 for Yes, 0 for No): ";
    cin >> renewalStatus;

    // Checking subscription status
    CustomerSubscription user2(renewalStatus);

    return 0;
}
