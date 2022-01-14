
module BPZ1902.Mgebrishvili.Lab3.Task2;

namespace RBPO {
	namespace Lab3 {
		namespace Task2 {
			double f1(double x) {
				return (cos(x) + sin(x)) / (cos(x) - sin(x));
			}
			double f2(double x) {
				if (x >= 0.0) {
					return cos(2 * x);
				}
				else {
					return (1 / (x * x + 1));
				}
			}
			double a(int i) { 
				return  (pow(-1.0, i) * ((1 + 3 * i) / (double)pow(3, i)));
			}
			double f3(int n) {
				double sum = 0.0;
				int i = 0;
				while (i <= n) {
					sum += a(i);
					i++;
				}
				return sum;
			}
			double f4(double eps) {
				double pred = a(0);
				double sled = a(1);
				double sum = pred + sled;
				int i = 2;
				while (abs(a(i) - a(i - 1)) > eps) {
					sum += a(i);
					i++;
				}
				return sum;
			}
		}
	}
}
