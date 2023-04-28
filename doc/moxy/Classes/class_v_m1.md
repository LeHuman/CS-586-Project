---
title: VM1
summary: User Interface for VM1. 

---

# VM1



User Interface for [VM1](). 


`#include <VM1.hpp>`

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[VM1](Classes/class_v_m1.md#function-vm1)**([AbstractFactory](Classes/class_abstract_factory.md) * a, [MDA](Classes/class_m_d_a.md) * m) |
| virtual | **[~VM1](Classes/class_v_m1.md#function-~vm1)**() |
| void | **[create](Classes/class_v_m1.md#function-create)**(int p)<br>Create a new instance, and set inital price.  |
| void | **[coin](Classes/class_v_m1.md#function-coin)**(float v)<br>insert coins  |
| void | **[sugar](Classes/class_v_m1.md#function-sugar)**()<br>Request sugar as an additive.  |
| void | **[tea](Classes/class_v_m1.md#function-tea)**()<br>Request tea to be disposed.  |
| void | **[latte](Classes/class_v_m1.md#function-latte)**()<br>Request latte to be disposed.  |
| void | **[insert_cups](Classes/class_v_m1.md#function-insert-cups)**(int n)<br>Request to insert cups.  |
| void | **[set_price](Classes/class_v_m1.md#function-set-price)**(float p)<br>Request a price change of a drink.  |
| void | **[cancel](Classes/class_v_m1.md#function-cancel)**()<br>Request cancellation of current selection.  |

## Public Functions Documentation

### function VM1

```cpp
VM1(
    AbstractFactory * a,
    MDA * m
)
```


### function ~VM1

```cpp
inline virtual ~VM1()
```


### function create

```cpp
void create(
    int p
)
```

Create a new instance, and set inital price. 

**Parameters**: 

  * **p** inital price 


### function coin

```cpp
void coin(
    float v
)
```

insert coins 

**Parameters**: 

  * **v** coins to insert 


### function sugar

```cpp
void sugar()
```

Request sugar as an additive. 

### function tea

```cpp
void tea()
```

Request tea to be disposed. 

### function latte

```cpp
void latte()
```

Request latte to be disposed. 

### function insert_cups

```cpp
void insert_cups(
    int n
)
```

Request to insert cups. 

**Parameters**: 

  * **n** cups to insert 


### function set_price

```cpp
void set_price(
    float p
)
```

Request a price change of a drink. 

**Parameters**: 

  * **p** price to set 


### function cancel

```cpp
void cancel()
```

Request cancellation of current selection. 

-------------------------------

Updated on 2023-04-28 at 14:24:43 -0500