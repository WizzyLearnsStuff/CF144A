#include<iostream>
 
using namespace std;
 
int main() {
    int n;
    int a[100];
    cin >> n;
    for (int i = 0 ; i < n; i++) cin >> a[i];
    
    int m = a[0], mi = a[0];
    int idm = 0, idmi = 0;
    for (int i = 0; i < n; i++) {
        if(m < a[i]) { m = a[i]; idm = i; }
        if(mi >= a[i]) { mi = a[i]; idmi = i; }
    }
    
    int segs = idm + (n - 1 - idmi);
    if (idmi < idm) segs--;
    
    cout << segs;
}
