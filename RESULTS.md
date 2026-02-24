Assignment 3 – Lottery Scheduling

1. settickets System Call
The settickets(int n) system call was implemented in sysproc.c.
It validates input and ensures tickets > 0.
If n <= 0, it returns -1.

Test Results:
ticketstest 5  → OK
ticketstest 0  → FAILED (correct behavior)
ticketstest -3 → FAILED (correct behavior)

2. Lottery Scheduler

The scheduler was modified to:
- Compute total tickets across RUNNABLE processes
- Generate a random winning ticket
- Select the process whose cumulative ticket count exceeds the winning number

A simple RNG function was added to proc.c.

3. Correctness Testing

The following tests were executed:

forktest        → OK
stressfs        → OK
usertests       → ALL TESTS PASSED

During usertests, expected trap and memory exhaustion messages appeared.
These are intentional kernel validation tests and do not indicate failure.

Final Result:
ALL TESTS PASSED

The lottery scheduler operates correctly and does not break existing xv6 functionality.

