//
// Created by weston on 2/25/17.
//

#ifndef PINSCHR_SERVER_CPP_MONITORABLE_H
#define PINSCHR_SERVER_CPP_MONITORABLE_H

class Monitorable {
public:
	virtual void update(void) = 0;
	virtual std::string getDisplay(void) = 0;
};

#endif //PINSCHR_SERVER_CPP_MONITORABLE_H
