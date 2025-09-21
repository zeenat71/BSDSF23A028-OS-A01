# Feature-2: Multi-file Project - Report

## 1. Linking rule in Makefile: $(TARGET): $(OBJECTS)
$(TARGET) is the final executable (e.g., client).
$(OBJECTS) are all object files (.o) compiled from source.
This rule tells Make: "To build $(TARGET), first make sure $(OBJECTS) exist, then link them."
Difference from library linking: When linking against a library (e.g., libmylib.a), the library is included in the link command. Here, only object files are linked directly.

## 2. Git Tag
A git tag marks a specific commit in the repo, usually for versioning.
- **Why useful:** Easily reference stable versions or releases.
- **Simple tag:** Marks commit only (git tag v1.0)
- **Annotated tag:** Marks commit + stores tagger info, date, and message (git tag -a v1.0 -m "Release 1.0")

## 3. Purpose of creating a Release on GitHub
- Share a stable version of the project publicly.
- Users can directly download binaries without compiling source code.
- **Attaching binaries:** Users get ready-to-run programs (e.g., client.zip), no compilation needed.
