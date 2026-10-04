# Contributing to PC-Control

Thank you for your interest in contributing to PC-Control! 🚀

PC-Control is a simple Windows utility built using C++. Contributions, suggestions, and improvements are welcome.

## How to Contribute

### 1. Fork the Repository

Fork the PC-Control repository to your own GitHub account.

### 2. Clone the Repository

```bash
git clone https://github.com/bhavyweb3/PC-Control.git
```

Then move into the project folder:

```bash
cd PC-Control
```

### 3. Create a Branch

Create a new branch for your changes:

```bash
git checkout -b feature-name
```

### 4. Make Your Changes

You can contribute by:

* Adding a useful Windows utility feature
* Improving existing functionality
* Fixing bugs
* Improving the terminal interface
* Improving the documentation
* Improving code organization

Please try to keep the project simple and easy to understand.

### 5. Test Your Changes

Before submitting your changes, make sure the project compiles and runs correctly on Windows.

Compile using:

```bash
g++ main.cpp system.cpp applications.cpp network.cpp power.cpp utils.cpp -o PC-Control.exe
```

Then run:

```bash
PC-Control.exe
```

Test the feature you changed and make sure existing features still work.

### 6. Commit Your Changes

Use a clear commit message:

```bash
git add .
git commit -m "Add your feature"
```

### 7. Push Your Branch

```bash
git push origin feature-name
```

### 8. Create a Pull Request

Open the PC-Control repository on GitHub and create a Pull Request.

In the Pull Request description, briefly explain:

* What you changed
* Why you made the change
* How you tested it

## Code Guidelines

* Keep the code simple and readable.
* Use meaningful function and variable names.
* Keep related functionality in the appropriate `.cpp` and `.h` files.
* Avoid unnecessary complexity.
* Test your changes before submitting them.

## Reporting Bugs

If you find a bug, please create a GitHub Issue and include:

* What happened
* What you expected to happen
* Steps to reproduce the problem
* Windows version, if relevant
* Any error message you received

## Suggestions

Suggestions for new features are welcome.

Some possible areas include:

* System monitoring
* Network utilities
* Useful Windows shortcuts
* Better terminal UI
* Additional Windows API features

## Important

PC-Control is currently designed for **Windows** because it uses Windows APIs and Windows-specific commands.

Thank you for helping improve PC-Control! 💻🚀
