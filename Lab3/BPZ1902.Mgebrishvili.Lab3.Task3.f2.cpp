module BPZ1902.Mgebrishvili.Lab3.Task3;

namespace RBPO {
	namespace Lab3 {
		namespace Task3 {
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