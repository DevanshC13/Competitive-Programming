#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function to compute the mean of a vector
double mean(const vector<double>& v) {
    double sum = 0;
    for (double x : v) {
        sum += x;
    }
    return sum / v.size();
}

// Function to compute the variance of a vector
double variance(const vector<double>& v, double mean) {
    double sum = 0;
    for (double x : v) {
        sum += (x - mean) * (x - mean);
    }
    return sum / v.size();
}

// Function to compute the covariance of two vectors
double covariance(const vector<double>& x, const vector<double>& y, double mean_x, double mean_y) {
    double sum = 0;
    for (int i = 0; i < x.size(); i++) {
        sum += (x[i] - mean_x) * (y[i] - mean_y);
    }
    return sum / x.size();
}

int main() {
    int n;
    cin >> n;

    vector<double> x(n), y(n);
    for (int i = 0; i < n; i++) {
        double h;
        cin >> x[i] >> h;
        double s = (h - 1) / 99; // scale and shift to get a value between 0 and 1
        y[i] = -log((1 / s) - 1); // apply the inverse of the sigmoid function
    }

    double mean_x = mean(x);
    double mean_y = mean(y);

    double var_x = variance(x, mean_x);
    double cov_xy = covariance(x, y, mean_x, mean_y);

    double a = cov_xy / var_x;
    double b = mean_y - a * mean_x;

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        double x_query;
        cin >> x_query;

        double y_query = a * x_query + b;
        double s_query = 1 / (1 + exp(-y_query)); // apply the sigmoid function
        double h_query = 1 + 99 * s_query; // scale and shift to get a value between 1 and 100

        cout << round(h_query) << endl;
    }

    return 0;
}
