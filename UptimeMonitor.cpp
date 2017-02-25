//
// Created by weston on 2/25/17.
//


#include "UptimeMonitor.h"

UptimeMonitor::UptimeMonitor() {
	uptime_seconds = 0;
}

void UptimeMonitor::update() {
	std::ifstream f;
	f.open("/proc/uptime");
	if(f.is_open()) {
		f >> uptime_seconds;
	}
	f.close();
}

std::string UptimeMonitor::getDisplay() {
	std::ostringstream os;
	long days = (uptime_seconds/86400);
	long hours = (uptime_seconds/3600)%24;
	long minutes = (uptime_seconds/60)%60;
	long seconds = uptime_seconds%60;
	os << "Uptime: " << days << " days, ";
	os << hours << " hours, ";
	os << minutes << " minutes, and ";
	os << seconds << " seconds.";
	return os.str();
}
