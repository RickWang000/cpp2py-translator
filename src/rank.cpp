#include <iostream>
using namespace std;

int main() {  
	int n;
	cin >> n;
    int *num = new int[n];
    for(int i = 0;i < n; i++)
    {
        cin >> num[i];
    }
    for(int i = 1;i < n;i ++){
       for (int j = 0; j < n-i; j++) {
			if (num[j]>num[j + 1]) {
				int temp = num[j + 1];
				num[j + 1] = num[j];
				num[j] = temp;
			}
		}

    }

    for (int i = 0;i < n;i ++){
        cout << num[i] << endl;
    }
    delete[] num;
    return 0;
}

