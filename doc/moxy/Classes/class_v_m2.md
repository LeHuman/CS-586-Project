---
title: VM2
summary: User Interface for VM2. 

---

# VM2



User Interface for [VM2](). 


`#include <VM2.hpp>`

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[VM2](Classes/class_v_m2.md#function-vm2)**([AbstractFactory](Classes/class_abstract_factory.md) * a, [MDA](Classes/class_m_d_a.md) * m) |
| virtual | **[~VM2](Classes/class_v_m2.md#function-~vm2)**() |
| void | **[CREATE](Classes/class_v_m2.md#function-create)**(float p)<br>Create a new instance, and set inital price.  |
| void | **[COIN](Classes/class_v_m2.md#function-coin)**(int v)<br>insert coins  |
| void | **[SUGAR](Classes/class_v_m2.md#function-sugar)**()<br>Request sugar as an additive.  |
| void | **[CREAM](Classes/class_v_m2.md#function-cream)**()<br>Request cream as an additive.  |
| void | **[COFFEE](Classes/class_v_m2.md#function-coffee)**()<br>Request coffee to be disposed.  |
| void | **[InsertCups](Classes/class_v_m2.md#function-insertcups)**(int n)<br>Request to insert cups.  |
| void | **[SetPrice](Classes/class_v_m2.md#function-setprice)**(int p)<br>Request a price change of a drink.  |
| void | **[CANCEL](Classes/class_v_m2.md#function-cancel)**()<br>Request cancellation of current selection.  |
| void | **[CARD](Classes/class_v_m2.md#function-card)**(int x) |

## Public Functions Documentation

### function VM2

```cpp
VM2(
    AbstractFactory * a,
    MDA * m
)
```


### function ~VM2

```cpp
inline virtual ~VM2()
```


### function CREATE

```cpp
void CREATE(
    float p
)
```

Create a new instance, and set inital price. 

**Parameters**: 

  * **p** inital price 


### function COIN

```cpp
void COIN(
    int v
)
```

insert coins 

**Parameters**: 

  * **v** coins to insert 


### function SUGAR

```cpp
void SUGAR()
```

Request sugar as an additive. 

### function CREAM

```cpp
void CREAM()
```

Request cream as an additive. 

### function COFFEE

```cpp
void COFFEE()
```

Request coffee to be disposed. 

### function InsertCups

```cpp
void InsertCups(
    int n
)
```

Request to insert cups. 

**Parameters**: 

  * **n** cups to insert 


### function SetPrice

```cpp
void SetPrice(
    int p
)
```

Request a price change of a drink. 

**Parameters**: 

  * **p** price to set 


### function CANCEL

```cpp
void CANCEL()
```

Request cancellation of current selection. 

### function CARD

```cpp
void CARD(
    int x
)
```


-------------------------------

Updated on 2023-04-28 at 14:24:43 -0500