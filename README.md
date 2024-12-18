# Dangling Pointer in std::vector Example

This repository demonstrates a common C++ error related to using pointers with std::vector.  When a std::vector is resized, its internal memory can be reallocated, causing previously valid pointers to become invalid. Accessing an invalidated pointer leads to undefined behavior, commonly resulting in crashes.

**The bug:** The code attempts to create a pointer `ptr` to the beginning of a vector. Later, the vector is resized using `push_back`. This resize invalidates `ptr`, making it a 'dangling pointer'.

**The solution:** Avoid using raw pointers to vector elements if the vector might be resized.  Use iterators or vector indexing instead, which are safe even after resizing.

This example highlights the importance of understanding memory management and the potential pitfalls of using raw pointers with dynamic data structures in C++.