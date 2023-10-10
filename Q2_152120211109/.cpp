#include <iostream>
#include <ctime>

using namespace std;


void assignAndDisplay(int m) {
    const int rows = 100;
    const int cols = 100;
    int array[rows][cols];


    for (int i = 0; i < m; ++i) {
        array[i / cols][i % cols] = i;
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int m_values[] = { 100, 500, 1000 };

    for (int i = 0; i < 3; ++i) {
        int m = m_values[i];

        clock_t start_time = clock();
        assignAndDisplay(m);
        clock_t end_time = clock();
        double elapsed_time = double(end_time - start_time) / CLOCKS_PER_SEC * 1000;

        cout << "For m = " << m << ":" << endl;
        cout << "Elapsed Time: " << elapsed_time << " ms" << endl;
        cout << "Complexity: O(" << m << ")" << endl << endl;
    }

    return 0;
}


