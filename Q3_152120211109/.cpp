#include <iostream>
#include <ctime>

using namespace std;


void assignAndDisplay(int m) {
    const int depth = 10;
    const int rows = 10;
    const int cols = 10;
    int array[depth][rows][cols];


    for (int i = 0; i < m; ++i) {
        array[i / (rows * cols)][(i / cols) % rows][i % cols] = i;
    }


    for (int d = 0; d < depth; ++d) {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << array[d][i][j] << " ";
            }
            cout << endl;
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