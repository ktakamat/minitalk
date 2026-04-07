# minitalk - 42 Paris

The purpose of this project is to code a small data exchange program using UNIX signals. It is an introductory project for the bigger UNIX events, teaching how to handle communication between different processes.

## 📝 About The Project

This project consists of two separate programs: a **client** and a **server**. They communicate with each other using only two UNIX signals: `SIGUSR1` and `SIGUSR2`.

* **The Server:** Must be started first. Upon startup, it prints its Process ID (PID). It then waits to receive signals from a client, reconstructs the message bit by bit, and prints it to the standard output.
* **The Client:** Takes two parameters: the server's PID and the string to send. It converts each character of the string into binary (8 bits) and sends it to the server using the designated signals.

This implementation also reuses functions from previous 42 projects, integrating `ft_printf` for formatted output and `ft_atoi` for parsing the PID argument.

## 🛠️ Project Structure

The project builds two executables using the following files:
* **`server.c`**: Contains the logic to catch incoming signals, shift the bits back into characters, and print the resulting string.
* **`client.c`**: Contains the logic to convert a string into bits and send them to the server's PID one by one.
* **Utils (`ft_printf.*`, `ft_atoi.c`)**: Utility functions included directly in the compilation process to handle printing and string-to-integer conversion.
