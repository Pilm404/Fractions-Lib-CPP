# Fractions‑Lib‑CPP

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

A lightweight C++ header‑only library for exact arithmetic with fractions.

## ✨ Features
* Build a fraction from numerator / denominator or from an integer
* Automatic simplification (uses GCD)
* Full set of operators  
  `+  –  *  /  ==  !=  <  <=  >  >=`
* Utility helpers: inversion, normalization, `toDouble()`, `toString()`
* No dynamic allocation, no dependencies

## 🚀 Quick Start

### Requirements
* **C++20 compiler or newer** – the library relies on `using enum`, etc.  
  Projects compiled with an older standard will fail to build.
* Recommended toolchains  
  * **Visual Studio 2022 (v17+)**  
  * **GCC 10+**  
  * **Clang 12+**

### Installation (Visual Studio example)
```bash
git clone https://github.com/Pilm404/Fractions-Lib-CPP.git
```
1. Add `include/` to **Additional Include Directories**.  
2. Make sure **/std:c++20** (or `/std:c++latest`) is set in project properties.


## 📝 Example in "example.cpp"


## 📄 License
MIT — use it freely in personal or commercial projects.
