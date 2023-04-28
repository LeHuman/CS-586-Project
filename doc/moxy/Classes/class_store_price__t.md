---
title: StorePrice_t
summary: Abstract strategy class for StorePrice function. 

---

# StorePrice_t



Abstract strategy class for StorePrice function. 


`#include <StorePrice.hpp>`

Inherited by [StorePrice_Float](Classes/class_store_price___float.md), [StorePrice_Int](Classes/class_store_price___int.md)

## Public Functions

|                | Name           |
| -------------- | -------------- |
| virtual | **[~StorePrice_t](Classes/class_store_price__t.md#function-~storeprice-t)**() =default |
| virtual void | **[StorePrice](Classes/class_store_price__t.md#function-storeprice)**([DataStore](Classes/class_data_store.md) * ds) =0 |

## Public Functions Documentation

### function ~StorePrice_t

```cpp
virtual ~StorePrice_t() =default
```


### function StorePrice

```cpp
virtual void StorePrice(
    DataStore * ds
) =0
```


**Reimplemented by**: [StorePrice_Int::StorePrice](Classes/class_store_price___int.md#function-storeprice), [StorePrice_Float::StorePrice](Classes/class_store_price___float.md#function-storeprice)


-------------------------------

Updated on 2023-04-28 at 14:24:43 -0500