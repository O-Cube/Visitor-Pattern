# Visitor-Pattern
Adding additional functionalities to state-pattern using a visitor pattern without breaking the initial code structure. This uses a double dispatch mechanism. Each position modifies the nFlags:
- Position A sets a vlaue 5
- Position B sets a vlaue 9
- Position C sets a vlaue 32
- Position D sets a vlaue 31
- Position E sets a vlaue 224

# Requirements
- linus OS (ubuntu)
- g++ compiler
- google test and mock framework development packages
- gcov
- lcov

# Procedure
- clone repository
- In repo folder, make -F Makefile to build the application
- make -f Makefile Run to run the application. The outcome is as follows:

  ![image](https://github.com/O-Cube/Visitor-Pattern/assets/65163799/2f903ec2-71b6-4e41-887c-6772906e25de)
- make -f Makefile clean to delete unwanted object files and executables
  
in test test directory,
- make -f Makefile to build test application
- make -f Makefile Run to execute test applications
- make -f Makefike clean to delete build components, executable, test output folder.
Test output looks as follows:
![image](https://github.com/O-Cube/Visitor-Pattern/assets/65163799/0b7f5bf1-0a7a-4b33-bbb3-a58b035e1b1d)

The test output folder contains information about coverage of the initial source files. Below is a sample coverage information
![image](https://github.com/O-Cube/Visitor-Pattern/assets/65163799/554eb4a5-6a42-4f5c-995b-006db49d731d)

