# ax ⚡

A fast, lightweight CLI utility for competitive programmers to instantly scaffold C++ solution templates.

[![Build and Release](https://github.com/Sanskar-Awachar-commits/ax/actions/workflows/release.yml/badge.svg)](https://github.com/Sanskar-Awachar-commits/ax/actions/workflows/release.yml)
[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](LICENSE)
[![C++20](https://img.shields.io/badge/C%2B%2B-20-00599C?logo=c%2B%2B)](https://en.wikipedia.org/wiki/C%2B%2B20)

---

## ✨ Features

- **Instant Template Generation**: Generates a standard competitive programming boilerplate with fast I/O and multi-test case loop in milliseconds.
- **Automatic Letter Capitalization**: Automatically normalizes problem names (e.g. `ax 1899a` or `ax 1899A` creates `1899A.cpp`).
- **Overwrite Protection**: Safely halts if a file with the target name already exists in the current directory so you never lose your code.
- **Interactive & CLI Argument Modes**: Accepts problem names directly as command-line arguments or prompts interactively when executed without parameters.
- **fetchd Compatible**: Seamlessly synchronized and updated via the [`fetchd`](https://github.com/Sanskar-Awachar-commits/fetchd) auto-sync daemon.

---

## 🚀 Generated Boilerplate Template

When running `ax 111A`, it produces `111A.cpp` containing:

```cpp
// g++ -O2 -std=c++20 111A.cpp -o 111A
#include <bits/stdc++.h>
using namespace std;

void solve() {
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
```

---

## 📦 Installation

### Option 1: Automatic Sync with `fetchd` (Recommended)

If you use [`fetchd`](https://github.com/Sanskar-Awachar-commits/fetchd), add `ax` to your `config.json`:

```json
{
  "repo": "Sanskar-Awachar-commits/ax",
  "binary_name": "ax",
  "env": true,
  "build_command": "g++ -O3 -std=c++20 ax.cpp -o ax"
}
```

`fetchd` will automatically download the latest prebuilt release for your operating system or compile from source.

---

### Option 2: Prebuilt Binaries

Download the standalone binary for your platform from the [GitHub Releases](https://github.com/Sanskar-Awachar-commits/ax/releases) page:

- **Linux**: `ax-linux`
- **macOS**: `ax-macos`
- **Windows**: `ax-windows.exe`

Move the executable into a folder in your system `$PATH` (e.g., `~/bin`, `~/programs/bin`, or `C:\Program Files`).

---

### Option 3: Build from Source

#### Prerequisites
- A modern C++ compiler with C++17/C++20 support (`g++`, `clang++`, or MSVC).

#### Linux / macOS
```bash
git clone https://github.com/Sanskar-Awachar-commits/ax.git
cd ax
c++ -O3 -std=c++20 ax.cpp -o ax
sudo mv ax /usr/local/bin/
```

#### Windows (PowerShell / Command Prompt)
```powershell
git clone https://github.com/Sanskar-Awachar-commits/ax.git
cd ax
g++ -O3 -std=c++20 ax.cpp -o ax.exe
```

---

## 🛠️ Usage

### CLI Argument
```bash
ax 1899A
# Output: Successfully created 1899A.cpp
```

```bash
ax 1899b
# Output: Successfully created 1899B.cpp
```

### Interactive Prompt
```bash
ax
# Enter problem name (e.g., 111A): 2038C
# Output: Successfully created 2038C.cpp
```

---

## 📄 License

This project is licensed under the [MIT License](LICENSE).
