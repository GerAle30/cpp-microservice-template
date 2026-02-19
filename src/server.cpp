#include "server.h"

void Server::run(int port)
{
    CROW_ROUTE(app, '/health")
([]{
  return crow::response(200, "OK");
});

  app.port(port).multithreaded().run();
}
