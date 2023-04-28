---
title: CoinsInserted_s
summary: The CoinsInserted state. 

---

# CoinsInserted_s



The CoinsInserted state. 


`#include <coinsInserted.hpp>`

Inherits from State_t

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[CoinsInserted_s](Classes/class_coins_inserted__s.md#function-coinsinserted-s)**([MDA](Classes/class_m_d_a.md) * mda, [OP](Classes/class_o_p.md) * o, [Context_t](Classes/class_context__t.md) * ctx) |
| | **[~CoinsInserted_s](Classes/class_coins_inserted__s.md#function-~coinsinserted-s)**() override =default |
| void | **[coin](Classes/class_coins_inserted__s.md#function-coin)**(int f) override<br>Call this state's coin function.  |
| void | **[cancel](Classes/class_coins_inserted__s.md#function-cancel)**() override<br>Call this state's cancel function.  |
| void | **[dispose_drink](Classes/class_coins_inserted__s.md#function-dispose-drink)**(int d) override<br>Call this state's dispose_drink function.  |
| void | **[additive](Classes/class_coins_inserted__s.md#function-additive)**(int d) override<br>Call this state's additive function.  |

## Public Functions Documentation

### function CoinsInserted_s

```cpp
inline CoinsInserted_s(
    MDA * mda,
    OP * o,
    Context_t * ctx
)
```


### function ~CoinsInserted_s

```cpp
~CoinsInserted_s() override =default
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


returns coins


### function cancel

```cpp
void cancel() override
```

Call this state's cancel function. 

returns coins, zeros funds, and changes state to Idle 


### function dispose_drink

```cpp
void dispose_drink(
    int d
) override
```

Call this state's dispose_drink function. 

**Parameters**: 

  * **d** drink enum as int 


disposes drink and additives, changes state to NO_CUPS if cups are <= 1, else zero funds and change state to IDLE state


### function additive

```cpp
void additive(
    int d
) override
```

Call this state's additive function. 

**Parameters**: 

  * **d** additive enum as int 


Toggles an additive to be output with drink


-------------------------------

Updated on 2023-04-28 at 14:24:43 -0500