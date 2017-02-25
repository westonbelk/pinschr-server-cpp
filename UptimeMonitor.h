//
// Created by weston on 2/25/17.
//

#ifndef PINSCHR_SERVER_CPP_UPDATEMONITOR_H
#define PINSCHR_SERVER_CPP_UPDATEMONITOR_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#include "Monitorable.h"

class UptimeMonitor : public Monitorable {
public:
	UptimeMonitor(void);
	void update(void);
	std::string getDisplay(void);
private:
	long uptime_seconds;
};


#endif //PINSCHR_SERVER_CPP_UPDATEMONITOR_H
