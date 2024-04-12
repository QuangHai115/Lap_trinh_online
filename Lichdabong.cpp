#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void taoLichDau(vector<vector<int>>& lichDau, vector<vector<vector<int>>>& buoiCoTheDau) {
    int soDoiBong = 25;
    int soBang = 5;
    int doiMotBang = soDoiBong / soBang;

    for (int bang = 0; bang < soBang; ++bang) {
        vector<int> doiBong(doiMotBang);
        for (int i = 0; i < doiMotBang; ++i) {
            doiBong[i] = bang * doiMotBang + i + 1;
        }

        int soVong = doiMotBang - 1;
        for (int vong = 0; vong < soVong; ++vong) {
            vector<int> tranDau;
            for (int i = 0; i < doiMotBang / 2; ++i) {
                int doi1 = i;
                int doi2 = doiMotBang - 1 - i;
                tranDau.push_back(doiBong[doi1]);
                tranDau.push_back(doiBong[doi2]);
            }
            lichDau.push_back(tranDau);

            rotate(doiBong.begin() + 1, doiBong.end() - 1, doiBong.end());
        }
    }

    for (auto& buoi : buoiCoTheDau) {
        for (auto& slot : buoi) {
            random_shuffle(slot.begin(), slot.end());
        }
    }

    for (auto& tranDau : lichDau) {
        for (int i = 0; i < tranDau.size(); ++i) {
            int doi = tranDau[i];
            int viTriBuoi = 0;
            for (; viTriBuoi < buoiCoTheDau[doi - 1][i % buoiCoTheDau[doi - 1].size()].size(); ++viTriBuoi) {
                int buoi = buoiCoTheDau[doi - 1][i % buoiCoTheDau[doi - 1].size()][viTriBuoi];
                if ((i % 3 == 0 && buoi >= 10) || (i % 3 != 0 && buoi < 10)) {
                    tranDau[i] = buoi;
                    buoiCoTheDau[doi - 1][i % buoiCoTheDau[doi - 1].size()].erase(buoiCoTheDau[doi - 1][i % buoiCoTheDau[doi - 1].size()].begin() + viTriBuoi);
                    break;
                }
            }
        }
    }
}

void inLichDau(const vector<vector<int>>& lichDau) {
    int ngay = 1;
    for (const auto& tranDau : lichDau) {
        cout << "Ngày " << ngay << ":\n";
        for (int i = 0; i < tranDau.size(); ++i) {
            if (i % 3 == 0 && i != 0) {
                cout << endl;
            }
            cout << "Ð?i " << tranDau[i] << " ";
            if (tranDau[i] < 10) {
                cout << "Sáng, ";
            } else {
                cout << "Chi?u, ";
            }
        }
        cout << endl << endl;
        ++ngay;
    }
}

int main() {
    vector<vector<int>> lichDau;
    vector<vector<vector<int>>> buoiCoTheDau(25);

    // Nh?p vào nh?ng bu?i d?i có th? dá du?c trong tu?n
    for (int i = 0; i < 25; ++i) {
        int soBuoi;
        cout << "Nh?p s? bu?i có th? dá c?a Ð?i " << i + 1 << ": ";
        cin >> soBuoi;
        for (int j = 0; j < soBuoi; ++j) {
            int buoi;
            cout << "Nh?p bu?i th? " << j + 1 << " c?a Ð?i " << i + 1 << " (Sáng là 1, Chi?u là 2): ";
            cin >> buoi;
            buoiCoTheDau[i].push_back({buoi});
        }
    }

    taoLichDau(lichDau, buoiCoTheDau);
    inLichDau(lichDau);

    return 0;
}

