
//日常刷题
//朱永强，记住啊!

//#include<iostream>
//using namespace std;
//int main() {
//	int n, a, i, sum;
//	while (cin >> n) {
//		sum = 1;
//		for (i = 0; i < n; i++) {
//			cin >> a;
//			if (a % 2 != 0)
//				sum *= a;
//		}
//		cout << sum << endl;
//	}
//}

//#include<iostream>
//using namespace std;
//int main() {
//	int n,i, sum, t;
//	cin >> t;
//	while (t--) {
//		cin >> n;
//		double m = sqrt(1.0 * n);
//		sum = 0;
//		for (i = 2; i <= m; i++) {
//			if (n % i == 0) {
//				sum += i;
//				if (i!=m)
//					sum += n / i;//12的因子找到了2，就不需要再找6
//			}
//		}
//		if (n == 1)
//			cout << sum << endl;
//		else
//			cout << sum + 1 << endl;
//	}
//}

//#include<iostream>
//using namespace std;
//int main() {
//	int n, k, i, s;
//	double m;
//	cin >> n;
//	while (n--) {
//		cin >> k;
//		s = 0;
//		m = sqrt(1.0 * k);
//		for (i = 2; i <= m; i++) {
//			if (k % i == 0) {
//				s += i;
//				if (i != m)
//					s += k / i;
//			}
//		}
//		if (k == 1)
//			cout << s << endl;
//		else
//			cout << s + 1 << endl;
//	}
//}

//#include<iostream>
//using namespace std;
//#define maxn 5000001
//int main() {
//	int a[maxn], i, n;
//	cin >> n;
//	for (i = 1; i < n; i++) {
//		
//	}
//}

//#include<iostream>
//using namespace std;
//int main() {
//	int n, m, i, sum, t;
//	cin >> t;
//	while (t--) {
//		cin >> n;
//		m = n;
//		sum = 1;
//		for (i = 2; i < m; i++) {
//			if (n % i == 0) {
//				sum += i;
//				if (i * i != n)
//					sum += n / i;//12的因子找到了2，就不需要再找6
//				m = n / i;//如果相等，因为前面加了i，只需加一次就行，所以直接结束
//			}
//		}
//		cout << sum << endl;
//	}
//}

//#include<iostream>
//using namespace std;
//int main() {
//	int n, a, i;
//	cin >> n;
//	while (n--) {
//		cin >> a;
//		 int s = 0;
//		for (i = 1; i < a; i++) {
//			if (a % i == 0) {
//				s += i;
//			}
//		}
//		cout << s << endl;
//	}
//}

//#include<iostream>
//using namespace std;
//int main() {
//	int n, a[1000], i, k, count;
//	while (cin >> n && n) {
//		count = 0;
//		for (i = 0; i < n; i++) {
//			cin >> a[i];
//		}
//		cin >> k;
//		for (i = 0; i < n; i++) {
//			if (a[i] == k)
//				count++;
//		}
//		cout << count << endl;
//	}
//}

//#include<iostream>
//using namespace std;
//int main() {
//	long long a, b;
//	int n, ans;
//	while (cin >> n) {
//		while (n--) {
//			cin >> a;
//			b = a;
//			ans = 1;
//			a = a % 10;
//			while (b > 0) {
//				if (b % 2 == 1)
//					ans = (ans * a) % 10;
//				b /= 2;
//				a = (a * a) % 10;
//			}
//			cout << ans << endl;
//		}
//	}
//}

////hdoj 1021 找规律
//
//#include<iostream>
//using namespace std;
//int main() {
//	long n;
//	while (cin >> n) {
//		if (n % 8 == 2 || n % 8 == 6)
//			cout << "yes" << endl;
//		else
//			cout << "no" << endl;
//	}
//}

//#include<iostream>
//using namespace std;
//int main() {
//	int i;
//	long long int a[100] = { 7,11 };
//	for (i = 2; i < 100; i++) {
//		a[i] = a[i - 1] + a[i - 2];
//	}
//	for (i = 0; i < 100; i++) {
//		cout << a[i] % 3 << " ";
//		if ((i+1) % 8 == 0) {
//			cout << endl;
//		}
//		
//	}
//}

//#include<iostream>
//using namespace std;
//int main() {
//	long long int s[51] = { 0,1 };
//	int i, n;
//	for (i = 2; i < 51; i++) {
//		s[i] = s[i - 1] + s[i - 2];
//	}
//	while (cin >> n && n != -1) {
//		cout << s[n] << endl;
//	}
//}

//#include<iostream>
//using namespace std;
//int main() {
//	long long a = 0, b = 1, c, n;
//	while (cin >> n && n != -1) {
//		a = 0, b = 1;
//		for (int i = 2; i <= n; i++) {
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		cout << b << endl;
//	}
//}

//#include<iostream>
//using namespace std;
//int main() {
//	int n;
//	scanf_s("%d", &n);
//	cout << n << endl;
//}

//#include<iostream>
//using namespace std;
//int main() {
//	int n, a[100] = { 7,11 }, i;
//	for (i = 2; i < 50; i++) {
//		a[i] = a[i - 1] + a[i - 2];
//		if (a[i] % 3 == 0)
//			a[i] = 1;
//		else
//			a[i] = 0;
//	}
//	for (i = 0; i < 50; i++) {
//		cout << a[i] << " ";
//		if ((i+1) % 8 == 0)
//			cout << endl;
//	}
//	cout << endl;
//}