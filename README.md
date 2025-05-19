# 🔗 C-Linked-List

A simple C program that allows users to build and print a **singly linked list** of words or phrases, demonstrating memory management, pointer manipulation, and structured output.

---

## 📂 Files

| File            | Description                                                  |
|-----------------|--------------------------------------------------------------|
| `LinkedList.c`  | Contains logic to create the list (`makeList`) and print it (`printList`) |
| `LinkedList.h`  | Header file with function prototypes                         |
| `Node.h`        | Struct definition for a linked list node                    |
| `driver.c`      | Main entry point to run the program                         |
| `makefile`      | Easy build/run/clean commands for your system               |

---

## 🚀 How to Compile & Run

Make sure you have `gcc` installed (or any C compiler), then from the project root:

```bash
make compile
make run

To clean up the build artifacts:
make clean
```

---

## 🧠 Program Behavior

Prompts the user to input words or phrases.
Type -99 to finish the input session.
The program prints the list:
One item? → Custom message
Two items? → item1 and item2
More than two? → item1, item2, ..., and itemN
💡 After printing, the program frees all dynamically allocated memory for clean exit.

---

## 💡 Sample Output

Welcome to the Linked List Builder!

Enter a word or phrase, or -99 to end: watermelon
Enter a word or phrase, or -99 to end: mango
Enter a word or phrase, or -99 to end: banana
Enter a word or phrase, or -99 to end: -99

Now printing your list:
You've entered the following nodes: watermelon, mango, and banana

 All memory successfully freed. Goodbye!

---

## ✅ Concepts Demonstrated

Manual memory allocation with malloc and free
Linked list traversal and manipulation in C
Clean string input handling using fgets and strcspn
Modular structure using headers

---

## 💡 Want to See a Visual Version?

🔗 📁 **GitHub Repo:** [https://github.com/TrishaAndres/linked-list-visualizer](https://github.com/TrishaAndres/linked-list-visualizer)
