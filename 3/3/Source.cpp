#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int distribution(vector <int> a, int n) {
    int s1 = 0;
    int s2 = 0;
    for (int i = 0; i < n; i++) {
        if (s1 >= s2) {
            s2 = s2 + a[i];
        }
        else {
            s1 = s1 + a[i];
        }
    }
    return (abs(s1 - s2));
}
int main() {
    int n;
    cin >> n;
    vector <int> a;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    for (int j = 0; j < n; j++) { 
        int num_max = j; 
        for (int i = j; i < n; i++) { 
            if (a[i] > a[num_max]) {
                num_max = i;
            }
        int temp;
        temp = a[j];
        a[j] = a[num_max];
        a[num_max] = temp;
    }
    cout << distribution(a, n);
    return 0;
}