### 1️⃣ Position-Independent Code (-fPIC)
* **Meaning**: Position-Independent Code is machine code that can run correctly **no matter where it is loaded in memory**.  
* **Why needed for shared libraries**:  
  * A shared library (`.so`) may be loaded at **different memory addresses** in different programs or even in the same program on different runs.  
  * If the compiled code used fixed (absolute) addresses, it would have to be rewritten (relocated) every time it’s loaded, which is slow and wasteful.  
  * Compiling with **`-fPIC`** tells the compiler to generate relative addressing so the library can be mapped anywhere without modification.

### 2️⃣ Static vs. Dynamic Client File Size
* **Observation**:  
  * The **static client** binary is **much larger** because it contains a full copy of all the library code inside the executable.  
  * The **dynamic client** binary is **smaller** because it only stores:
    * references to the shared library,
    * the symbol table needed to link at runtime.  
* **Reason**: Static linking duplicates library code in every executable, while dynamic linking shares a single `.so` file across all programs.

### 3️⃣ `LD_LIBRARY_PATH` Environment Variable
* **Purpose**: A colon-separated list of directories that the **dynamic loader** (`ld.so` or `ld-linux.so`) searches **at runtime** to find shared libraries.  
* **Why you set it**:  
  * Your custom library (`libmyutils.so`) was in a **non-standard path** (`./lib`), not in the system default (like `/usr/lib`).  
  * Setting  
    ```bash
    export LD_LIBRARY_PATH=$PWD/lib:$LD_LIBRARY_PATH
    ```  
    told the loader where to look so your program could run.
* **What it shows about the OS loader**:  
  * The **dynamic loader is responsible** for locating and mapping shared libraries into memory before the program starts.  
  * If the loader can’t find the `.so` file, the program fails with an “cannot open shared object file” error.
