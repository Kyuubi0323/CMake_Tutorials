# CMake_Tutorials for Windows

1.Download Cmake on Windows PowerShell with the below cmd
```
winget install kitware.cmake
```
2.Steps to build a projects

#In Project's Directory Path on Windows PowerShell
```
mkdir build
cd build
cmake ..
cmake --build .
```
The output files will be stored in /build directory

___________________________________________________

For linux users
#install package and dependencies on Debian or Ubuntu
```
sudo apt install cmake g++ make
```
#then verify the installation
```
cmake --version
```
#all the steps to build a simple program will be the same with Windows




