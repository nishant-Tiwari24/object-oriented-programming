// You are using GCC
#include <iostream>
#include <iomanip>

using namespace std;

class Currency {
public:
    double amount;
    string code;

    Currency(double amt, const string& currencyCode) : amount(amt), code(currencyCode) {}
};

class Converter {
public:
    static double convertCurrency(double amount, const string& fromCurrencyCode, const string& toCurrencyCode) {
        if (fromCurrencyCode == "USD" && toCurrencyCode == "EUR") {
            return amount * 0.85;
        } else if (fromCurrencyCode == "EUR" && toCurrencyCode == "USD") {
            return amount * 1.18;
        } else {
            return -1.0;
        }
    }
};

int main() {
    double amount;
    string fromCurrencyCode, toCurrencyCode;

    cin >> amount >> fromCurrencyCode >> toCurrencyCode;

    Currency sourceCurrency(amount, fromCurrencyCode);
    Currency targetCurrency(0, toCurrencyCode);

    double convertedAmount = Converter::convertCurrency(sourceCurrency.amount, sourceCurrency.code, targetCurrency.code);

    cout << fixed << setprecision(2);
    if (sourceCurrency.code == "USD") {
        cout << sourceCurrency.amount << " USD is equivalent to " << convertedAmount << " " << targetCurrency.code << endl;
    } else if (sourceCurrency.code == "EUR") {
        cout << sourceCurrency.amount << " EUR is equivalent to " << convertedAmount << " " << targetCurrency.code << endl;
    }

    return 0;
}