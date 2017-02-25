//
// Created by weston on 2/25/17.
//

#ifndef PINSCHR_SERVER_CPP_MEMORYMONITOR_H
#define PINSCHR_SERVER_CPP_MEMORYMONITOR_H

#include <iostream>
#include <fstream>

#include "Monitorable.h"

class MemoryMonitor : public Monitorable {
public:
	void update(void);
	std::string getDisplay(void);
};


#endif //PINSCHR_SERVER_CPP_MEMORYMONITOR_H
