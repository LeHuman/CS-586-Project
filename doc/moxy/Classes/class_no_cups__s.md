---
title: NoCups_s
summary: The NoCups state. 

---

# NoCups_s



The NoCups state. 


`#include <noCups.hpp>`

Inherits from State_t

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[NoCups_s](Classes/class_no_cups__s.md#function-nocups-s)**([MDA](Classes/class_m_d_a.md) * mda, [OP](Classes/class_o_p.md) * o, [Context_t](Classes/class_context__t.md) * ctx) |
| | **[~NoCups_s](Classes/class_no_cups__s.md#function-~nocups-s)**() override =default |
| void | **[coin](Classes/class_no_cups__s.md#function-coin)**(int n) override<br>Call this state's coin function.  |
| void | **[insert_cups](Classes/class_no_cups__s.md#function-insert-cups)**(int n) override<br>Call this state's insert_cups function.  |

## Public Functions Documentation

### function NoCups_s

```cpp
inline NoCups_s(
    MDA * mda,
    OP * o,
    Context_t * ctx
)
```


### function ~NoCups_s

```cpp
~NoCups_s() override =default
```


### function coin

```cpp
void coin(
    int n
) override
```

Call this state's coin function. 

**Parameters**: 

  * **f** whether to accept the coins 


Returns coins


### function insert_cups

```cpp
void insert_cups(
    int n
) override
```

Call this state's insert_cups function. 

**Parameters**: 

  * **n** cups to insert 


if n is > 0 then it saves it to context and changes state to idle


-------------------------------

Updated on 2023-04-28 at 14:24:43 -0500