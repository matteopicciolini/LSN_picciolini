<link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/4.7.0/css/font-awesome.min.css">

# Laboratory of Numeric Simulation
## Matteo Picciolini
This directory contains the exercises of the Laboratory of Numeric Simulation A.A. 2022-2023. 

### Prerequisites
In order to execute the comnands described in this file you will need several tools, such as `cmake`, `make`, `gcc`. On a Debian-based system you can install them with:

```
sudo apt-get install cmake make gcc
```



### Build
`cmake` introduces a configuration step, just before the build step. `cmake` input consists of [CMakeLists.txt](CMakeLists.txt) files, which describes the project to be built, `*.cmake` files, which contains collections of cmake macro that can be used in `CMakeLists.txt` for specific tasks, `*.in` files that are used as templates for automatically generated files.


### Configure and Compile ###
1. Clone the project repository onto your local machine using Git or download the zip file and extract it.

2. Open a terminal or command prompt and navigate to the root directory of the project.

3. Create a new directory called "build" (or any other name you prefer), navigate to the build directory and run CMake to generate the build files using the following commands:
```
mkdir -p build
cd build
cmake .. 
```
4. Once CMake has finished generating the build files, you can build the project using the following commands.
If you want to compile all the Exercise_XX.X.cpp files contained in all the Lezioni_XX folders, you can use:
```
make
```
Otherwise, if you want to compile a specific file, you can type:
```
cd Lesson_XX
make Exercise_XX.X.cpp
```

### Tree structure

```
.
├── 📁 Assignments
│   ├── 📓 LSN_Exercises_01.ipynb
│   ├── 📓 LSN_Exercises_02.ipynb
│   ├── 📓 LSN_Exercises_03.ipynb
│   ├── 📓 LSN_Exercises_04.ipynb
│   ├── 📓 LSN_Exercises_05.ipynb
│   ├── 📓 LSN_Exercises_06.ipynb
│   ├── 📓 LSN_Exercises_07.ipynb
│   ├── 📓 LSN_Exercises_08.ipynb
│   ├── 📓 LSN_Exercises_09.ipynb
│   ├── 📓 LSN_Exercises_10.ipynb
│   ├── 📓 LSN_Exercises_11.ipynb
│   └── 📓 LSN_Exercises_12.ipynb
├── 📁 JupyterNotebooks
│   ├── 📓 Exercises_01.ipynb
│   ├── 📓 Exercises_02.ipynb
│   ├── 📓 Exercises_03.ipynb
│   ├── 📓 Exercises_04.ipynb
│   ├── 📓 Exercises_05.ipynb
│   ├── 📓 Exercises_06.ipynb
│   ├── 📓 Exercises_07.ipynb
│   ├── 📓 Exercises_08.ipynb
│   ├── 📓 Exercises_09.ipynb
│   ├── 📓 Exercises_10.ipynb
│   ├── 📓 Exercises_11.ipynb
│   └── 📓 Exercises_12.ipynb
├── 📁 Lesson_01
│   ├── 🏗️ CMakeLists.txt
│   ├── 🌟 Exercise_01.1.cpp
│   ├── 🌟 Exercise_01.2.cpp
│   ├── 🌟 Exercise_01.3.cpp
│   ├── 🌟 Library_01.cpp
│   └── 📜 Library_01.h
├── 📁 Lesson_02
│   ├── 🏗️ CMakeLists.txt
│   ├── 🌟 Exercise_02.1.cpp
│   ├── 🌟 Exercise_02.2.cpp
│   ├── 🌟 Library_02.cpp
│   ├── 📜 Library_02.h
│   └── 🐍 sphere.py
├── 📁 Lesson_03
│   ├── 🏗️ CMakeLists.txt
│   ├── 🌟 Exercise_03.1.cpp
│   ├── 🌟 Library_03.cpp
│   └── 📜 Library_03.h
├── 📁 Lesson_04
│   ├── 🏗️ CMakeLists.txt
│   ├── 🌟 Exercise_04.1.cpp
│   ├── 📁 frames
│   ├── 📁 input
│   │   ├── 📁 eq
│   │   │   ├── 📄 config.in
│   │   │   ├── 📁 gas
│   │   │   │   └── 📄 input.gas
│   │   │   ├── 📁 liquid
│   │   │   │   └── 📄 input.liquid
│   │   │   └── 📁 solid
│   │   │       └── 📄 input.solid
│   │   ├── 📄 input.gas
│   │   ├── 📄 input.liquid
│   │   └── 📄 input.solid
│   ├── 🌟 Library_04.cpp
│   └── 📜 Library_04.h
├── 📁 Lesson_05
│   ├── 📝 clean.sh
│   ├── 🏗️ CMakeLists.txt
│   ├── 🌟 Exercise_05.1.cpp
│   ├── 📁 input-output
│   │   └── 📄 input.dat
│   ├── 🌟 Library_05.cpp
│   ├── 📜 Library_05.h
│   └── 🌟 try.cpp
├── 📁 Lesson_06
│   ├── 📝 clean.sh
│   ├── 🏗️ CMakeLists.txt
│   ├── 🌟 Exercise_06.1.cpp
│   ├── 📁 input-output
│   │   └── 📄 input.dat
│   ├── 🌟 Library_06.cpp
│   ├── 📜 Library_06.h
│   └── 📝 run_all_temp.sh
├── 📁 random-library
│   ├── 🏗️ CMakeLists.txt
│   ├── 📄 config.final
│   ├── 📄 Primes
│   ├── 📄 primes32001.in
│   ├── 🌟 random.cpp
│   ├── 📜 random.h
│   └── 📄 seed.in
├── 📁 Data
│   └── [...]
├── 📄 README.md
├── 📄 version_config.h.in
└── 🏗️ CMakeLists.txt 
```
#### Legend
```
📁 folders
🌟 .cpp files
📜 .h files
🏗️ CMakeLists.txt files
📓 Jupyter Notebooks
🐍 .py files
📄 .md, input/output files
📝 .sh files
```
