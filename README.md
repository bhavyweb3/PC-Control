# PC-Control 💻

A simple Windows utility program developed in C++ that provides quick access to common system, application, network, security, and power-related operations through a terminal-based menu.

## Features

### System

* System information
* CPU and RAM information
* Disk space
* Battery status
* Date and time

### Applications

* Open default browser
* Open VS Code
* Open YouTube
* Open Downloads folder
* Open File Explorer

### Network

* Check internet connection
* Display IP and network information

### Security

* Lock the computer
* Display username and computer information

### Power

* Shutdown computer
* Restart computer
* Exit program

## Technologies Used

* C++
* Windows API
* Windows Command Prompt commands
* MinGW / GCC
* Visual Studio Code

## Project Structure

```text
PC-Control/
│
├── main.cpp
├── system.cpp
├── system.h
├── applications.cpp
├── applications.h
├── network.cpp
├── network.h
├── power.cpp
├── power.h
├── utils.cpp
├── utils.h
├── README.md
└── .gitignore
```

## How to Run

### 1. Clone the repository

```bash
git clone https://github.com/bhavyweb3/PC-Control.git
```

### 2. Open the project folder

```bash
cd PC-Control
```

### 3. Compile the project

```bash
g++ main.cpp system.cpp applications.cpp network.cpp power.cpp utils.cpp -o PC-Control.exe
```

### 4. Run the program

```bash
PC-Control.exe
```

## Requirements

* Windows operating system
* MinGW / GCC compiler
* C++ compiler supporting Windows APIs

## Demo ScreenShots
<img width="1917" height="1018" alt="PC-Control Code" src="https://github.com/user-attachments/assets/3a160545-1846-42d6-9a4c-de1c799e77ef" />
<img width="1917" height="1020" alt="PC-Control All Options" src="https://github.com/user-attachments/assets/237bf7df-bb1c-442d-a3cf-20fbfa5254e7" />
<img width="1917" height="1018" alt="PC-Control Date" src="https://github.com/user-attachments/assets/6e54e69b-470a-42f1-b834-4808a2997fd7" />
<img width="1917" height="1018" alt="PC-Control Disk Usuage" src="https://github.com/user-attachments/assets/340c0625-b7e1-451d-8340-b7c8b9991ceb" />

## Note

This project is designed specifically for Windows because it uses Windows APIs and Windows system commands.

## Author

**Bhavya Goel**

B.Tech CSE Blockchain
