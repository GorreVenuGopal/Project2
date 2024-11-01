#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the array size: " << endl;
    cin >> n;

    cout << "Enter the values in the array" << endl;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_map<int, int> mpp;
    for (int num : arr) {
        mpp[num]++;
    }

    int highFreq = 0, lowFreq = INT_MAX;
    int highnum, lownum;

    for (const auto& entry : mpp) {
        int num = entry.first;
        int freq = entry.second;

        if (freq > highFreq) {
            highFreq = freq;
            highnum = num;
        }

        if (freq < lowFreq) {
            lowFreq = freq;
            lownum = num;
        }
    }
    cout << "Elements of high Frequency: " << highnum << "(Frequency: " << highFreq << ") times" << endl;
    cout << "Elements of lowest Frequency: " << lownum << "(Frequency: " << lowFreq << ") times" << endl;
    return 0;

}