#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

// H�m so s�nh d? s?p x?p c?p <s?, t?n su?t> theo t?n su?t gi?m d?n
bool compare(pair<int, int>& a, pair<int, int>& b) {
    // N?u t?n su?t xu?t hi?n b?ng nhau, s? n�o xu?t hi?n tru?c s? du?c in ra tru?c
    if (a.second == b.second) {
        return a.first < b.first;
    }
    return a.second > b.second;
}

void printTop3FrequentNumbers(vector<int>& nums) {
    map<int, int> freqMap;

    // �?m t?n su?t xu?t hi?n c?a t?ng s?
    for (int num : nums) {
        freqMap[num]++;
    }

    // Chuy?n c�c c?p s? v� t?n su?t xu?t hi?n th�nh m?t vector
    vector<pair<int, int>> freqVec(freqMap.begin(), freqMap.end());

    // S?p x?p vector theo th? t? gi?m d?n c?a t?n su?t xu?t hi?n
    sort(freqVec.begin(), freqVec.end(), compare);

    // In ra ba s? c� t?n su?t xu?t hi?n cao nh?t
    int count = 0;
    for (auto& p : freqVec) {
        if (count == 3) break;
        cout << "Number: " << p.first << ", Frequency: " << p.second << endl;
        count++;
    }
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 1, 2, 3, 4, 1, 2, 1};
    cout << "Top 3 frequent numbers:" << endl;
    printTop3FrequentNumbers(nums);
    return 0;
}

