module BPZ1902.Mgebrishvili.Lab3.Task1;

namespace RBPO {
	namespace Lab3 {
		namespace Task1 {
			double f1(double x) {
				return (cos(x) + sin(x)) / (cos(x) - sin(x));
			}
			double f2(double x) {
				return (x >= 0.0) ? (cos(2*x)) : (1/(x*x+1));
			}
			double a(int i) {
				return  (pow(-1.0, i) * ( (1+3*i) / (double)pow(3, i)));
			}
			double f3(int n) {
				double sum = 0.0;
				for (int i = 0; i <= n; i++) {
					sum += a(i);
				}
				return sum;
			}
			double f4(double eps) {
				double pred = a(0);
				double sled = a(1);
				double sum = pred+sled;
				for (int i = 2; abs(a(i) - a(i - 1)) > eps; i++) {
					sum += a(i);
				}
				return sum;
			}
		}
	}
}
