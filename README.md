# PC-Control

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

## Note

This project is designed specifically for Windows because it uses Windows APIs and Windows system commands.

## Author

**Bhavya Goel**

B.Tech CSE Blockchain
