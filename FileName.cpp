#include<iostream>
#include<algorithm>
using namespace  std;
int  main()
{
    int a[9];
    int i;
    for (i = 0;i < 9;i++) {
        cin >> a[i];
    }
    sort(a, a + 9);
        for (i = 0;i < 9;i++) {
            cout << a[i] << "";
        }
    cout << endl;
    return 0;
}

