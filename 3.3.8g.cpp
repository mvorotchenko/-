#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<vector<int>> matrix;
    vector<int> row;
    int x = 4;

    for (int i = 1; i < x; i++) {
        row.push_back(i);
    }

    for (int i = 1; i < x; i++) {
        matrix.push_back(row);
    }

    int newElement = 4;

    for (auto &row : matrix) {
        row.push_back(newElement);
    }
    
    for (auto &row : matrix) {
        for (auto &cell : row) {
            cout << cell << ' ';
        }

        cout << endl;
    }
}
