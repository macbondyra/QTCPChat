Qt TCP Chat (Server)
High-performance server application designed for direct communication with a connected client. This project leverages the Qt Network module to manage socket lifecycles and facilitate bidirectional text transmission through an event-driven architecture.

🛡️ Key Functionality
Connection Hosting Utilizes QTcpServer to listen for and accept incoming client requests on a specified port.

Direct Messaging Enables full-duplex, real-time communication between the server and the connected client.

Signal-Driven Logic Asynchronous data handling via readyRead() and newConnection() signals to ensure a responsive UI.

Status Monitoring Provides instant visual feedback on connection establishment, packet loss, or termination.
