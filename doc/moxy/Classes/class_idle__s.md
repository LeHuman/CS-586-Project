---
title: Idle_s
summary: The Idle state. 

---

# Idle_s



The Idle state. 


`#include <idle.hpp>`

Inherits from State_t

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[Idle_s](Classes/class_idle__s.md#function-idle-s)**([MDA](Classes/class_m_d_a.md) * mda, [OP](Classes/class_o_p.md) * o, [Context_t](Classes/class_context__t.md) * ctx) |
| | **[~Idle_s](Classes/class_idle__s.md#function-~idle-s)**() override =default |
| void | **[coin](Classes/class_idle__s.md#function-coin)**(int f) override<br>Call this state's coin function.  |
| void | **[insert_cups](Classes/class_idle__s.md#function-insert-cups)**(int n) override<br>Call this state's insert_cups function.  |
| void | **[set_price](Classes/class_idle__s.md#function-set-price)**() override<br>Call this state's set_price function.  |
| void | **[card](Classes/class_idle__s.md#function-card)**() override<br>Call this state's card function.  |

## Public Functions Documentation

### function Idle_s

```cpp
inline Idle_s(
    MDA * mda,
    OP * o,
    Context_t * ctx
)
```


### function ~Idle_s

```cpp
~Idle_s() override =default
```


### function coin

```cpp
void coin(
    int f
) override
```

Call this state's coin function. 

**Parameters**: 

  * **f** whether to accept the coins 


if f is true, change state to coinsinserted and clear additives, IncreaseCF as well


### function insert_cups

```cpp
void insert_cups(
    int n
) override
```

Call this state's insert_cups function. 

**Parameters**: 

  * **n** cups to insert 


if n > 0, add onto current context cups


### function set_price

```cpp
void set_price() override
```

Call this state's set_price function. 

Calls Storeprice 


### function card

```cpp
void card() override
```

Call this state's card function. 

Card accepted, clear additives and funds, change state to CoinsInserted 


-------------------------------

Updated on 2023-04-28 at 14:24:43 -0500