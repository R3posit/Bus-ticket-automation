# Syncrof Bus Reservation System

This project is a bus reservation system simulation written in C. It collects user information and allows seat selection based on availability and gender compatibility rules.

## Features
- Collects student ID, name-surname, and gender information from the user.
- Seat selection is restricted based on availability and gender compatibility.
- Dynamically displays available seats to the user.
- Provides interactive seat selection functionality.
- Includes animations for loading screens and welcome messages.

## Technologies Used
- **C Programming Language**: Core logic implementation.
- **Windows.h Library**: For console interface and functions like `Sleep`.
- **locale.h Library**: To support Turkish characters.
- **conio.h and stdlib.h**: For console control and system commands.

## Usage
1. Download and compile the project.
2. Run the application and input your answers.
3. View the current seat layout and select your preferred seat.
4. The application will display a confirmation message upon successful reservation.

## Limitations
- Gender mismatch may prevent certain adjacent seat selections.
- The project is console-based and does not include a graphical user interface.

## How to Compile and Run
On a Windows system:
1. Use a C compiler (e.g., GCC) to compile the program:  
   `gcc -o travel travel.c`
2. Run the executable file:  
   `bus-automation.exe`

## Future Enhancements
- Add support for multiple bus models and layouts.
- Develop a user-friendly graphical interface.
- Save reservations to a file for persistence and future reference.

## Contributing
We welcome contributions! Feel free to open a pull request or create an issue for suggestions or bug reports.

---
