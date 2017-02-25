#include <iostream>
#include <vector>

#include "MemoryMonitor.h"
#include "UptimeMonitor.h"

int main() {
	std::cout << "Hello, World!" << std::endl << std::endl;

	std::vector<Monitorable*> monitors;
	std::vector<Monitorable*>::iterator it;


	monitors.push_back(new MemoryMonitor);
	monitors.push_back(new UptimeMonitor);

	do {
		it = monitors.begin();
		while (it != monitors.end()) {
			(*it)->update();
			std::cout << (*it)->getDisplay() << std::endl;
			it++;
		}
		std::cout << std::endl;
		std::cin.get();
	} while(false); // Change to true to run in a loop.

	monitors.clear();


	return 0;
}