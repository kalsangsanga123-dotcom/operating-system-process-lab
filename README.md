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

The program is running in the background while the terminal is still available. The `ps` command finds `task1_alive`, and the final message shows that it finished normally.

### Task 2

![Task 2 PID evidence](evidence/task2_pid_ppid.png)

The program prints its process ID and parent process ID, then waits for 20 seconds. The `ps` output shows the same PID and PPID values.

### Task 3

![Task 3 success evidence](evidence/task3_success.png)

A positive number follows the success path. The command `echo $?` displays `0`, which means the program ended successfully.

![Task 3 failure evidence](evidence/task3_failure.png)

A negative number follows the failure path. The command `echo $?` displays `1`, showing that the program returned a failure code.

### Task 4

![Task 4 input evidence](evidence/task4_input.png)

The first compile command uses the wrong filename, so GCC reports an error. After correcting the command, the program reads a name and prints a greeting.

### Task 5

![Task 5 continue evidence](evidence/task5_continue.png)

Entering `1` continues the program successfully. The command `echo $?` displays `0` because the program returned a success code.

![Task 5 exit evidence](evidence/task5_exit.png)

Entering `0` terminates the program as requested. The command `echo $?` displays `1` because the program returned a failure code.

## Conclusion

I learned how C programs become Linux processes and how Linux reports process identity and exit status. The screenshots show that each program compiled and produced the expected result.
