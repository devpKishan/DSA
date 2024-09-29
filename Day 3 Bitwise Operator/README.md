Bitwise operators in C++ are used to perform operations on individual bits of data. They are particularly useful for low-level programming tasks, such as optimizing memory usage, manipulating flags, and performing efficient arithmetic operations. Here's a detailed breakdown of each bitwise operator in C++:

### Bitwise Operators in C++

| **Operator** | **Symbol** | **Description**                                                                                                                                                                                |
|--------------|------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| AND          | `&`        | Performs a bitwise **AND** operation. For each bit, the result is `1` if both corresponding bits of the operands are `1`; otherwise, it's `0`.                                                  |
| OR           | `|`        | Performs a bitwise **OR** operation. For each bit, the result is `1` if at least one corresponding bit of the operands is `1`; otherwise, it's `0`.                                             |
| XOR          | `^`        | Performs a bitwise **XOR (exclusive OR)** operation. For each bit, the result is `1` if the corresponding bits of the operands are different; otherwise, it's `0`.                               |
| NOT          | `~`        | Performs a bitwise **NOT** operation, also known as bitwise negation. It inverts the bits of the operand, turning `1` into `0` and `0` into `1`.                                                |
| Left Shift   | `<<`       | Shifts the bits of the first operand to the left by the number of positions specified by the second operand. Each left shift doubles the value of the number (multiplies by `2^n`).                |
| Right Shift  | `>>`       | Shifts the bits of the first operand to the right by the number of positions specified by the second operand. Each right shift halves the value of the number (divides by `2^n`).                  |

### Explanation with Examples:

1. **Bitwise AND (`&`)**:
   - **Description**: The `&` operator compares each bit of two numbers. The result is `1` only if both bits are `1`.
   - **Example**:
     ```cpp
     int a = 5;  // 5 in binary:  0101
     int b = 3;  // 3 in binary:  0011
     int result = a & b;  // result: 0001 (binary), which is 1 in decimal
     ```
   - **Explanation**:
     ```
     0101 (5)
     & 0011 (3)
     --------
       0001 (1)
     ```

2. **Bitwise OR (`|`)**:
   - **Description**: The `|` operator compares each bit of two numbers. The result is `1` if at least one bit is `1`.
   - **Example**:
     ```cpp
     int a = 5;  // 5 in binary:  0101
     int b = 3;  // 3 in binary:  0011
     int result = a | b;  // result: 0111 (binary), which is 7 in decimal
     ```
   - **Explanation**:
     ```
     0101 (5)
     | 0011 (3)
     --------
       0111 (7)
     ```

3. **Bitwise XOR (`^`)**:
   - **Description**: The `^` operator compares each bit of two numbers. The result is `1` if the bits are different, and `0` if they are the same.
   - **Example**:
     ```cpp
     int a = 5;  // 5 in binary:  0101
     int b = 3;  // 3 in binary:  0011
     int result = a ^ b;  // result: 0110 (binary), which is 6 in decimal
     ```
   - **Explanation**:
     ```
     0101 (5)
     ^ 0011 (3)
     --------
       0110 (6)
     ```

4. **Bitwise NOT (`~`)**:
   - **Description**: The `~` operator inverts the bits of the number (also called **one's complement**). `1` becomes `0` and `0` becomes `1`.
   - **Example**:
     ```cpp
     int a = 5;  // 5 in binary:  0101
     int result = ~a;  // result: 1010 (binary), which is -6 in decimal (due to two's complement representation)
     ```
   - **Explanation**:
     ```
     ~0101 (5) = 1010 (which is -6 in two's complement)
     ```
     - In C++, negative numbers are stored in **two's complement** format, so the result of `~5` is `-6`.

5. **Left Shift (`<<`)**:
   - **Description**: The `<<` operator shifts the bits of the number to the left by a specified number of positions, effectively multiplying the number by powers of 2.
   - **Example**:
     ```cpp
     int a = 5;  // 5 in binary:  0101
     int result = a << 1;  // result: 1010 (binary), which is 10 in decimal
     ```
   - **Explanation**:
     ```
     0101 (5) << 1 = 1010 (10)
     ```
     - Each shift left by 1 position doubles the number.

6. **Right Shift (`>>`)**:
   - **Description**: The `>>` operator shifts the bits of the number to the right by a specified number of positions, effectively dividing the number by powers of 2.
   - **Example**:
     ```cpp
     int a = 5;  // 5 in binary:  0101
     int result = a >> 1;  // result: 0010 (binary), which is 2 in decimal
     ```
   - **Explanation**:
     ```
     0101 (5) >> 1 = 0010 (2)
     ```
     - Each shift right by 1 position halves the number.

### Bitwise Shift Example (with Multiple Shifts):

- **Left Shift**:
  ```cpp
  int x = 3;   // 3 in binary: 0000 0011
  int result = x << 2;  // 0000 1100 (binary) = 12 (decimal)
  ```
  - Explanation: Shifting the bits of `3` by 2 positions to the left results in `12`.

- **Right Shift**:
  ```cpp
  int x = 16;   // 16 in binary: 0001 0000
  int result = x >> 3;  // 0000 0010 (binary) = 2 (decimal)
  ```
  - Explanation: Shifting the bits of `16` by 3 positions to the right results in `2`.

### Practical Uses of Bitwise Operators:

1. **Setting a Flag (OR `|`)**:
   - In systems with limited memory, each bit in a byte can represent a different flag (true/false condition).
   - Example:
     ```cpp
     int flags = 0;      // Initially, all flags are off (0000 0000)
     flags |= 1 << 3;    // Set the 3rd flag (0000 1000), result: 8
     ```

2. **Clearing a Flag (AND `&` with NOT `~`)**:
   - Example:
     ```cpp
     flags &= ~(1 << 3); // Clear the 3rd flag (turn off bit 3)
     ```

3. **Toggling a Flag (XOR `^`)**:
   - Example:
     ```cpp
     flags ^= 1 << 3;  // Toggles the 3rd flag
     ```

4. **Checking if a Bit is Set**:
   - Example:
     ```cpp
     if (flags & (1 << 3)) {
         // Do something if the 3rd flag is set
     }
     ```

### Summary:
Bitwise operators are powerful tools in C++ for manipulating individual bits of data. They are often used in low-level programming, optimizing algorithms, working with hardware interfaces, and performing efficient mathematical operations. Understanding how to use them effectively can enhance the performance and control of your programs.