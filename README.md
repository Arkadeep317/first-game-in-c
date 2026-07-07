# 🎮 CLI Rock, Paper, Scissors

> A classic, interactive command-line implementation of Rock, Paper, Scissors written in C! 

Test your luck against the computer in this lightweight terminal game. The computer uses a randomized algorithm to pick its weapon—can you outsmart it?

---

## 🚀 Features

* **Interactive Gameplay:** Simple, easy-to-use menu system.
* **Input Validation:** Prevents invalid inputs (only accepts 1, 2, or 3).
* **Randomized AI:** Uses C's `rand()` seeded with system time for truly unpredictable computer choices.
* **Infinite Replayability:** Automatically asks if you want to play another round without needing to restart the program.

---

## 📜 How to Play

The rules are simple. Choose your weapon, and see what the computer picked!

| Your Choice | Computer Choice | Result |
| :---: | :---: | :--- |
| 🪨 **Rock (1)** | ✂️ Scissors (3) | **You Win!** 🎉 |
| 📄 **Paper (2)** | 🪨 Rock (1) | **You Win!** 🎉 |
| ✂️ **Scissors (3)**| 📄 Paper (2) | **You Win!** 🎉 |
| *Any* | *Same as yours* | **It's a Tie!** 🤝 |
| *Any* | *The counter to yours*| **You Lose!** 💀 |

---

## 🛠️ Getting Started

### Prerequisites
You will need a C compiler installed on your system (such as `GCC` for Linux/Windows or `Clang` for macOS).

### 1. Compilation
Open your terminal, navigate to the folder containing your code, and run the following command to compile the game:

```bash
gcc game.c -o rps_game
***********Rock Paper Scissor Game*********** Choose between rock paper and scissor

 1.Rock
 2.paper
 3.scissor

> 1
you choose Rock
computer choose scissor
you win

Do you want to continue[Y/N]
> y