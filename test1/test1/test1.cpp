#include <iostream>
#include <math.h>

using namespace std;

bool isSNT(int a) {
    int count = 0;
    for (int i = 2; i <= sqrt(a); i++)
        if (a % i) 
            count++;
    if (count)
        return true;
    else
        return false;
}

int max(int a, int b) {
    return a > b ? a : b;
}

int min(int a, int b) {
    return a < b ? a : b;
}
int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (isSNT(a[i]))
            count++;
    }

    int ma, mi;
    for (int i = 0; i < n-1; i++) {
        ma= max(a[i], a[i + 1]);
        mi= min(a[i], a[i + 1]);
    }

    if (max < 2)
        cout << "Khong co tong lon nhat.";
    else 

    cout << endl;
    system("pause");
}
