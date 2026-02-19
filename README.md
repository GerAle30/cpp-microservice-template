This project uses a minimal entry point (main.cpp) 
that delegates all server logic to a decicated Server class.
The server is built on Crow and exposes a standard /health endpoint for production monitoring.
The architecture is designed for scalability, clean separation of concerns, and high performance.

C++ Crow Microservice Template

High-perfomance C++ microservice template built with Crow, designed for production-oriented backend systems where performance, control, and clean
architecture matter.

This project servesas a commercial-ready foundation for building scalable REST APIs backend services in modern C++.

---

## Architecture Design

The project follows a clean and modular structure:

cpp-crow-microservice/
├── CMakeLists.txt
├── README.md
├── include/
│ └── server.h
├── src/
│ ├── main.cpp
│ └── server.cpp
└── build/


###  main.cpp

The entry point of the application.

Its responsibility is intentionally minimal:

- Instantiate the `Server` class
- Start the server on a configurable port

This keeps business logic out of `main()` and promotes clean architecture.

---

###  server.h

Defines the `Server` class interface.

Encapsulates:
- Crow application instance
- Public `run()` method to start the service

This ensures that the HTTP engine remains abstracted from the entry point.

---

###  server.cpp

Implements the server logic.

Responsibilities:

- Define HTTP routes
- Configure server port
- Enable multithreading
- Start the application runtime loop

Currently implemented endpoint:

GET/health

Returns:

HTTP 200 OK


This endpoint is typically used in:
- Load balancers
- Kubernetes readiness/liveness checks
- Monitoring systems

---

##  Technologies Used

- **C++17**
- **Crow (C++ micro web framework)**
- **CMake**
- Multithreaded HTTP server

---

##  Build Instructions

###  Clone the repository

```bash
igit clone https://github.com/your-username/cpp-crow-microservice.git
cd cpp-crow-microservice
"==============================
Create build directory.

- mkdir build
- cd build

Generate build files
- cmake ..
"=============================
- make

Run the server
./server

Server will run on:

- http://localhost:18080

"===========================

Test thew health endpoint:
- curl http://localhost:18080/health

expected response:
- ok

-. Design Philosophy
This template follows three core engineering principles:
1- Separation of Concerns
main.cpp handles startup only.
Server encapsulates HTTP behavior.
2- Encapsulation
Crow’s SimpleApp is private inside the Server class.
3- Scalability
The structure allows easy extension:
Route separation
Middleware
Logging
Database integration
Authentication layers

- Roadmap (Next Steps)
Planned production enhancements:
JSON-based responses
Structured error handling
Config file support
Logging system
Database integration (PostgreSQL / SQLite)
Docker containerization
CI/CD integration
- Commercial Use Case
This template is ideal for:
High-performance backend APIs
Microservices architecture
System tools requiring HTTP interfaces
Performance-sensitive services
Modern C++ backend systems
- Production Notes
For production environments, consider:
Reverse proxy (NGINX)
HTTPS termination
Structured logging
Centralized monitoring
Containerization
-. License
MIT License

Author 
Alejandro Garcia Sanchez
Software Engineer
C++ Backend & Systems Development

