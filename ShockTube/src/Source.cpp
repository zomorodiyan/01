#include <iostream>
#include "ShockTube.h"
int main() {
	std::cout << "hi" << std::endl;
	ShockTube st;
	st.allocHostMemory();
	st.initialize();
	double* averages = st.getAverages();
	std::cout << averages[0] << "\t" << averages[1] << "\t" << averages[2] << "\t" << averages[3] << std::endl;
	return 0;
}