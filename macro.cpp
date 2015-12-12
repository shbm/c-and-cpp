#include <iostream>

using namespace std;

#define itsfor 1000
#define loop(x,n) for(int x = 0; x < n; ++x)
#define min(a, b) (((a)<(b))?(a):(b))

int main(int argc, char *argv[]) {
    int i;
    i = itsfor;
    cout << min(10,1) << "\n";
    loop(i, 10);
        cout << i;
    return 0;
}
