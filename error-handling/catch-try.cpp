#include <iostream>
#include <vector>
#include <algorithm>

class InvalidIDException : public std::exception {
public:
    const char* what() const throw() {
        return "Invalid eyeglass ID. Eyeglass not added";
    }
};

class OutOfStockException : public std::exception {
public:
    const char* what() const throw() {
        return "Eyeglass out of stock. Cannot add more eyeglasses";
    }
};

class OpticalShowroom {
private:
    static const int MAX_STOCK = 50;
    std::vector<int> stock;

public:
    void addEyeglasses(const std::vector<int>& eyeglasses) {
        try {
            for (int eyeglassID : eyeglasses) {
                if (stock.size() >= MAX_STOCK) {
                    throw OutOfStockException();
                }

                if (!(1 <= eyeglassID && eyeglassID <= 107)) {
                    throw InvalidIDException();
                }

                stock.push_back(eyeglassID);
                std::cout << "Eyeglass with ID " << eyeglassID << " added to the showroom\n";
            }
        } catch (const InvalidIDException& e) {
            std::cout << "Exception caught. " << e.what() << std::endl;
        } catch (const OutOfStockException& e) {
            std::cout << "Exception caught. " << e.what() << std::endl;
        }
    }

    void sellEyeglass(int customerID) {
        try {
            auto it = std::find(stock.begin(), stock.end(), customerID);
            if (it == stock.end()) {
                throw InvalidIDException();
                
            // std::cout << "Eyeglass with ID " << customerID << " sold\n";
            }
            std::cout << "Eyeglass with ID " << customerID << " sold\n";
            stock.erase(it);
            // std::cout << "Eyeglass with ID " << customerID << " sold\n";
        } catch (const InvalidIDException& e) {
            std::cout << "Exception caught. " << e.what() << std::endl;
        }
    }
    
};

int main() {
    int n;
    std::cin >> n;

    std::vector<int> eyeglasses(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> eyeglasses[i];
    }

    int customerID;
    std::cin >> customerID;
    OpticalShowroom showroom;
    showroom.addEyeglasses(eyeglasses);
    showroom.sellEyeglass(customerID);

    return 0;
}