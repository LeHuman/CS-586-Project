---
title: Create_s
summary: The Create state. 

---

# Create_s



The Create state. 


`#include <create.hpp>`

Inherits from State_t

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[Create_s](Classes/class_create__s.md#function-create-s)**([MDA](Classes/class_m_d_a.md) * mda, [OP](Classes/class_o_p.md) * o, [Context_t](Classes/class_context__t.md) * ctx) |
| | **[~Create_s](Classes/class_create__s.md#function-~create-s)**() override =default |
| void | **[create](Classes/class_create__s.md#function-create)**() override<br>Call this state's create function.  |

## Public Functions Documentation

### function Create_s

```cpp
inline Create_s(
    MDA * mda,
    OP * o,
    Context_t * ctx
)
```


### function ~Create_s

```cpp
~Create_s() override =default
```


### function create

```cpp
void create() override
```

Call this state's create function. 

Stores price and changes state to NO_CUPS 


-------------------------------

Updated on 2023-04-28 at 14:24:43 -0500