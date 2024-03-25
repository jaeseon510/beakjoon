#include<iostream>
#define endl '\n'
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	long long int a[95] = { 0, };
	long long int b[95] = { 0, };
	cin >> n;
	a[0] = 1;
	a[1] = 1;
	for (int i = 2; i < n; i++) {
		a[i] = a[i - 1] + b[i - 1];
		b[i] = a[i - 1];
	}
	cout << a[n-1]+b[n-1] << endl;
}
