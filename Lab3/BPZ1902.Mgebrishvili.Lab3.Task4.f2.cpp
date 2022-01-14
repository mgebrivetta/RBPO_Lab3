module BPZ1902.Mgebrishvili.Lab3.Task4:f2;

namespace RBPO {
	namespace Lab3 {
		namespace Task4 {
			double f2(double x) {
				if (x >= 0.0) {
					return cos(2 * x);
				}
				else {
					return (1 / (x * x + 1));
				}
			}
		}
	}
}