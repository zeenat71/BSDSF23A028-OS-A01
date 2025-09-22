## Report – Static Library Build (Feature-3)

### 1. Makefile Differences (Part 2 vs Part 3)
- **Variables:**  
  - Part 2 (multifile build) me `SRC` directly saare .c files include the.  
  - Part 3 me humne `LIBSRC` (ya similar) rakha jo sirf utility .c files ke liye hai, aur unka output `.o` files me compile karke `lib/libmyutils.a` banaya.
- **Rules:**  
  - Multifile me final target directly `gcc` se sab .c ko link karta tha.  
  - Static build me naya rule hai `ar rcs lib/libmyutils.a $(OBJ)` jo object files ko archive karta hai.  
  - Client build rule me `-Llib -lmyutils` add hua jo static library se link karta hai.

### 2. Purpose of `ar` and `ranlib`
- **ar**: “archiver” utility jo multiple object files ko ek hi `.a` static library me bundle karta hai.  
- **ranlib**: library ke symbol index ko update karta hai taa-ke linker ko functions jaldi mil saken.

### 3. `nm` on client_static
- `nm bin/client_static` chalane par `mystrlen`, `mystrcpy` jaise symbols dikhenge.  
- Ye batata hai ke **static linking** me object code final executable ke andar copy ho jata hai, isliye functions ke symbols executable me maujood rehte hain.

---
*Prepared by: Zeenat Fatima*  
*Version: v0.2.1-static*
