#include <fstream>
using namespace std;
int main()
{
    ifstream f("xyz.in");
    int x, y, z;
    f >> x >> y >> z;
    f.close();
    while (x > 1)
    {
        y = y*10 + z;
        x--;
    }
    ofstream g("xyz.out");
    g << y;
    g.close();
    return 0;
}
