# Drone Desktop Interface with QT
This project provides a desktop interface for controlling a drone using C++ and QT. The interface includes various features such as a map display, baud rate and port selection, motor speed control, a flight simulator cockpit, battery percentage indicator, and flight mode indicator.

![image](https://github.com/segri544/QT/assets/111482228/6eb6e630-2283-45b3-931e-9e436e4ea398)


## Features
### Map Feature
The interface includes a map display that shows the real-time position of the drone. It utilizes mapping data to provide a visual representation of the drone's location.

### Baudrate and Port Selection
The user can select the appropriate baud rate and port to establish communication between the desktop interface and the drone. This enables the interface to send commands and receive data from the drone.

### Motor Speed Control
The interface allows the user to control the motor speeds of the drone. The motor speed can be adjusted using a slider or input fields. This feature provides fine-grained control over the drone's movement.

### Stop Motor
A dedicated button is provided to instantly stop all the motors of the drone. This emergency feature ensures the safety of the drone and prevents any unintended movements.

### Adjustable Motor Speed
In addition to the motor speed control, the interface offers the flexibility to adjust the speed of individual motors. This allows the user to fine-tune the performance of the drone based on specific requirements.

### Cockpit Flight Simulator
To enhance the user experience, the interface provides a cockpit flight simulator. This simulator offers a realistic representation of the drone's flight controls and enables the user to practice and familiarize themselves with drone operations.

### Battery Percentage Indicator
The interface includes a battery percentage indicator that provides real-time information about the remaining battery power. This feature helps the user keep track of the drone's battery status and plan flights accordingly.

### Flight Mode Indicator
To provide insights into the current flight mode of the drone, the interface includes a flight mode indicator. It displays the active flight mode, such as manual, autonomous, or hover mode, ensuring clear visibility of the drone's operational state.

### References
QFlightinstruments - A reference project that provides flight instruments for QT applications. This project can be used as a resource for implementing flight mode indicators and other relevant features in the drone desktop interface.
### important Note
You need to change serial port variables and lenght depending on your system in the function readSerialData()
