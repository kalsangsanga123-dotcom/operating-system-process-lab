# Process Lifecycles and OS Interaction Lab

Five C programs demonstrating Linux processes, PID and PPID, exit codes, standard input and output, and conditional termination.

## Learning Objectives

- Compile and run C programs in Linux.
- View a running process with `ps`.
- Read a process ID and parent process ID.
- Understand success code `0` and failure code `1`.
- Use standard input and output in C.
- Control how a program ends from user input.

## Tasks

| Task | Source | Concept |
|---:|---|---|
| 1 | `src/task1_alive.c` | Background process |
| 2 | `src/task2_identity.c` | PID and PPID |
| 3 | `src/task3_exit.c` | Exit codes |
| 4 | `src/task4_input.c` | Standard input and output |
| 5 | `src/task5_control.c` | Conditional termination |

## Compile Commands

```bash
cd src
gcc task1_alive.c -o task1_alive
gcc task2_identity.c -o task2_identity
gcc task3_exit.c -o task3_exit
gcc task4_input.c -o task4_input
gcc task5_control.c -o task5_control
```

Run a compiled program with `./program_name`. For example:

```bash
./task1_alive
```

## Evidence

### Task 1

![Task 1 process evidence](evidence/task1_process.png)

### Task 2

![Task 2 PID evidence](evidence/task2_pid_ppid.png)

### Task 3

![Task 3 success evidence](evidence/task3_success.png)

![Task 3 failure evidence](evidence/task3_failure.png)

### Task 4

![Task 4 input evidence](evidence/task4_input.png)

### Task 5

![Task 5 continue evidence](evidence/task5_continue.png)

![Task 5 exit evidence](evidence/task5_exit.png)

## Flow Diagrams

### Task 1

```mermaid
flowchart LR
    A[Start] --> B[Print starting]
    B --> C[Sleep for 30 seconds]
    C --> D[Print finished]
    D --> E[Exit 0]
```

### Task 2

```mermaid
flowchart LR
    A[Start] --> B[Read PID and PPID]
    B --> C[Print identifiers]
    C --> D[Sleep for 20 seconds]
    D --> E[Exit 0]
```

### Task 3

```mermaid
flowchart LR
    A[Read number] --> B{Positive}
    B -->|Yes| C[Exit 0]
    B -->|No| D[Exit 1]
```

### Task 4

```mermaid
flowchart LR
    A[Ask for name] --> B[Read input]
    B --> C[Print greeting]
    C --> D[Exit 0]
```

### Task 5

```mermaid
flowchart LR
    A[Read choice] --> B{Choice is 1}
    B -->|Yes| C[Continue and exit 0]
    B -->|No| D[Terminate and exit 1]
```

## Conclusion

I learned how C programs become Linux processes and how Linux reports process identity and exit status. The screenshots show that each program compiled and produced the expected result.
