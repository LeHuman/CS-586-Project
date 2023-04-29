---
title: OP
summary: The Output Processor receives actions from a state and uses the appropriate strategy. 

---

# OP

The Output Processor receives actions from a state and uses the appropriate strategy. 


`#include <OP.hpp>`

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[OP](Classes/class_o_p.md#function-op)**([AbstractFactory](Classes/class_abstract_factory.md) * a) |
| virtual | **[~OP](Classes/class_o_p.md#function-~op)**() |
| void | **[StorePrice](Classes/class_o_p.md#function-storeprice)**()<br>call StorePrice using the pointer to the set strategy  |
| void | **[ZeroCF](Classes/class_o_p.md#function-zerocf)**()<br>call ZeroCF using the pointer to the set strategy  |
| void | **[IncreaseCF](Classes/class_o_p.md#function-increasecf)**()<br>call IncreaseCF using the pointer to the set strategy  |
| void | **[ReturnCoins](Classes/class_o_p.md#function-returncoins)**()<br>call ReturnCoins using the pointer to the set strategy  |
| void | **[DisposeDrink](Classes/class_o_p.md#function-disposedrink)**(int d)<br>call DisposeDrink using the pointer to the set strategy  |
| void | **[DisposeAdditive](Classes/class_o_p.md#function-disposeadditive)**(std::set< int > a)<br>call DisposeAdditive using the pointer to the set strategy  |

## Public Functions Documentation

### function OP

```cpp
OP(
    AbstractFactory * a
)
```


### function ~OP

```cpp
virtual ~OP()
```


### function StorePrice

```cpp
void StorePrice()
```

call StorePrice using the pointer to the set strategy 

### function ZeroCF

```cpp
void ZeroCF()
```

call ZeroCF using the pointer to the set strategy 

### function IncreaseCF

```cpp
void IncreaseCF()
```

call IncreaseCF using the pointer to the set strategy 

### function ReturnCoins

```cpp
void ReturnCoins()
```

call ReturnCoins using the pointer to the set strategy 

### function DisposeDrink

```cpp
void DisposeDrink(
    int d
)
```

call DisposeDrink using the pointer to the set strategy 

### function DisposeAdditive

```cpp
void DisposeAdditive(
    std::set< int > a
)
```

call DisposeAdditive using the pointer to the set strategy 

-------------------------------

Updated on 2023-04-28 at 14:24:43 -0500