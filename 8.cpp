#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
int main()
{
    ifstream in("input.txt");
    ofstream output("output.txt");
    int i, j, k, t, x, n, m;
    int a[100][100];
    in >> t;
    for (k = 0; k < t; k++) {
        in >> n >> m;
        for (i = 0; i < n; i++)for (j = 0; j < m; j++)
            in >> a[i][j];
        x = 1;
        for (i = 0; i < n - 1; i++)
            for (j = 0; j < m - 1; j++)
                if ((a[i][j] + a[i][j + 1] + a[i + 1][j] + a[i + 1][j + 1]) % 4 == 0) x = 0;
        if (x)output << "YES" << endl;
        else output << "NO" << endl;
    }

    return 0;
}
