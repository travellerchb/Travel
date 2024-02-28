#include<iostream>
using namespace std;
#include<stack>

int main() {
	char ch;
	double n;
	while (true) {
		scanf_s("%lf", &n);
		if (n == 0 || n == EOF) break;
		stack<double>s;
		s.push(n);
		getchar();
		while (true) {
			ch = getchar();
			if (ch == '+') {
				getchar();
				scanf_s("%lf", &n);
				s.push(n);
			}
			else if (ch == '-') {
				getchar();
				scanf_s("%lf", &n);
				s.push(-n);
			}
			else if (ch == '*') {
				getchar();
				scanf_s("%lf", &n);
				n = s.top() * n;
				s.pop();
				s.push(n);
			}
			else if (ch == '/') {
				getchar();
				scanf_s("%lf", &n);
				n = s.top() / n;
				s.pop();
				s.push(n);
			}
			else if (ch == ' ') {
				;
			}
			else break;
		}
		double num = 0;
		while (!s.empty()) {
			n = s.top();
			num += n;
			s.pop();
		}
		printf("%lf", num);
		printf("\n");
	}
	return 0;
}