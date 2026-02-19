#pragma once
#include <crow.h>

class Server
{
public:
	void run(int port);

private:
	crow::SimpleApp app;
};
