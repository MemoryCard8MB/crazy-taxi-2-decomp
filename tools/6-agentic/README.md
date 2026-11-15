# Step 6: agentic decomp

| tool | what it does |
|---|---|
| [codeaddr.py](codeaddr.py) | Addresses of the game's own functions written as numbers in the C become the functions' names. |
| [frametest.py](frametest.py) | The C against the original on a real RAM snapshot of the game (the display lists, memory, results): finds a missing stack word or a wrong argument the cases cannot. |
| [framesnap.py](framesnap.py) | A RAM snapshot of the running original (Flycast GDB) at the frame loop's scene call, with its registers: what frametest.py and snapcases.py start from. |
| [handcase.py](handcase.py) | Prove a function on cases written by hand, with the C the generator writes. |
| [poolconst.py](poolconst.py) | Turn the C's reads of the original code's literal pools into constants. |
| [poollist.py](poollist.py) | What a function's literal pool holds, and which of it still has no name. |
| [snapcases.py](snapcases.py) | Holdout cases from real game state for the worst-covered functions: the state at their entry in a snapshot's frame, cut to the bytes the original reads, with the real answers of its calls; kept only when the pokes give the same path. |
| [unpoke_code.py](unpoke_code.py) | Take the code out of what a test case may change. |
