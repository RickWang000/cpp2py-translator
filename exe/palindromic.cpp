#include <iostream>  
#include <string>
using namespace std;
int main() {
	string a; 
	cin >> a;
    int l = a.size();
    string b;
    for (int i = l; i > 0; i--) {
        b = b + a[i - 1];
    }
    int succeeded = 1;
    int failed = 0;
    if (a == b) 
    {
        cout << succeeded << endl;
    }
    else 
    {
        cout << failed << endl;
    }
	return 0;
}
