---
title: MDA
summary: Model Driven Architecture class This servers as the connection between VM and states. 

---

# MDA



Model Driven Architecture class This servers as the connection between VM and states. 


`#include <MDA.hpp>`

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[MDA](Classes/class_m_d_a.md#function-mda)**([OP](Classes/class_o_p.md) * op)<br>Construct a new [MDA](Classes/class_m_d_a.md) object.  |
| virtual | **[~MDA](Classes/class_m_d_a.md#function-~mda)**()<br>Destroy the [MDA](Classes/class_m_d_a.md) object.  |
| void | **[change_state](Classes/class_m_d_a.md#function-change-state)**(state_e stateID)<br>Changes state for this [MDA](Classes/class_m_d_a.md).  |
| void | **[create](Classes/class_m_d_a.md#function-create)**()<br>Call the equivalent create function on the current state.  |
| void | **[insert_cups](Classes/class_m_d_a.md#function-insert-cups)**(int n)<br>Call the equivalent insert_cups function on the current state.  |
| void | **[coin](Classes/class_m_d_a.md#function-coin)**(int f)<br>Call the equivalent coin function on the current state.  |
| void | **[card](Classes/class_m_d_a.md#function-card)**()<br>Call the equivalent card function on the current state.  |
| void | **[cancel](Classes/class_m_d_a.md#function-cancel)**()<br>Call the equivalent cancel function on the current state.  |
| void | **[set_price](Classes/class_m_d_a.md#function-set-price)**()<br>Call the equivalent set_price function on the current state.  |
| void | **[dispose_drink](Classes/class_m_d_a.md#function-dispose-drink)**(int d)<br>Call the equivalent dispose_drink function on the current state.  |
| void | **[additive](Classes/class_m_d_a.md#function-additive)**(int d)<br>Call the equivalent additive function on the current state.  |

## Public Functions Documentation

### function MDA

```cpp
MDA(
    OP * op
)
```

Construct a new [MDA](Classes/class_m_d_a.md) object. 

**Parameters**: 

  * **op** The output processor 


### function ~MDA

```cpp
virtual ~MDA()
```

Destroy the [MDA](Classes/class_m_d_a.md) object. 

### function change_state

```cpp
void change_state(
    state_e stateID
)
```

Changes state for this [MDA](Classes/class_m_d_a.md). 

**Parameters**: 

  * **stateID** state enum 


### function create

```cpp
void create()
```

Call the equivalent create function on the current state. 

### function insert_cups

```cpp
void insert_cups(
    int n
)
```

Call the equivalent insert_cups function on the current state. 

**Parameters**: 

  * **n** cups to insert 


### function coin

```cpp
void coin(
    int f
)
```

Call the equivalent coin function on the current state. 

**Parameters**: 

  * **f** coins to insert 


### function card

```cpp
void card()
```

Call the equivalent card function on the current state. 

### function cancel

```cpp
void cancel()
```

Call the equivalent cancel function on the current state. 

### function set_price

```cpp
void set_price()
```

Call the equivalent set_price function on the current state. 

### function dispose_drink

```cpp
void dispose_drink(
    int d
)
```

Call the equivalent dispose_drink function on the current state. 

**Parameters**: 

  * **d** drink enum d to dispose 


### function additive

```cpp
void additive(
    int d
)
```

Call the equivalent additive function on the current state. 

**Parameters**: 

  * **d** additive enum d to dispose 


-------------------------------

Updated on 2023-04-28 at 14:24:43 -0500