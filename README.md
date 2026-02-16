# 42 Piscine - Istanbul 2026

Welcome! This repository is a collection of my work during the **42 Piscine**, an intensive 4-week C programming bootcamp at 42 Istanbul.

The Piscine is a deep dive into low-level programming, where we learn everything from basic syntax to memory management, all while following the strict **Norminette** coding standard.

## 📊 Progress Tracker

| Module | Status | Key Topics |
| :--- | :--- | :--- |
| **C00** | ✅ Finished | Shell basics, standard output, nested loops. |
| **C01** | ✅ Finished | Pointers, memory addresses, basic algorithms. |
| **C02** | 🏃 In Progress | String manipulation and memory operations. |
| **C03** | 🔒 Locked | Advanced string functions and memory. |

---

## 🛠️ Skills & Tools Learned

* **Language:** Pure C (following C99/C11 standards).
* **Editor:** **Vim** (no IDEs allowed!).
* **Version Control:** Git & GitHub.
* **Operating System:** Linux / macOS.
* **The Norm:** Strict adherence to 42's coding rules (Norminette).



## 🧠 Key Philosophies

1.  **Peer-to-Peer Learning:** No teachers, only colleagues and evaluation.
2.  **No Hand-holding:** Finding solutions through research and trial-and-error.
3.  **Code Quality:** If it's not "Norm" compliant, it's not finished.

---

## 📂 Repository Structure

Each directory represents a module (e.g., `C00`, `C01`). Inside, you will find exercise folders (`ex00`, `ex01`, etc.) containing the source code.

> **Note:** As per 42 rules, these files only contain the requested functions. You will need to provide your own `main.c` to test them.

```bash
.
├── C00/
│   ├── ex00/
│   └── ...
├── C01/
│   ├── ex00/
│   └── ...
└── README.md
```

---

## 💻 How to Compile & Test

To compile any exercise, you can use the `cc` (or `gcc`) compiler. Since these files do not contain a main function, you must link them with your own test file:

```bash
# Compile command:
cc -Wall -Wextra -Werror ex0X/ft_filename.c your_main.c -o program

# Run the program:
./program
```
