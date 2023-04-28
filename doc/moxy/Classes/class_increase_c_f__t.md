---
title: IncreaseCF_t
summary: Abstract strategy class for IncreaseCF function. 

---

# IncreaseCF_t



Abstract strategy class for IncreaseCF function. 


`#include <IncreaseCF.hpp>`

Inherited by [IncreaseCF_Float](Classes/class_increase_c_f___float.md), [IncreaseCF_Int](Classes/class_increase_c_f___int.md)

## Public Functions

|                | Name           |
| -------------- | -------------- |
| virtual | **[~IncreaseCF_t](Classes/class_increase_c_f__t.md#function-~increasecf-t)**() =default |
| virtual void | **[IncreaseCF](Classes/class_increase_c_f__t.md#function-increasecf)**([DataStore](Classes/class_data_store.md) * ds) =0 |

## Public Functions Documentation

### function ~IncreaseCF_t

```cpp
virtual ~IncreaseCF_t() =default
```


### function IncreaseCF

```cpp
virtual void IncreaseCF(
    DataStore * ds
) =0
```


**Reimplemented by**: [IncreaseCF_Int::IncreaseCF](Classes/class_increase_c_f___int.md#function-increasecf), [IncreaseCF_Float::IncreaseCF](Classes/class_increase_c_f___float.md#function-increasecf)


-------------------------------

Updated on 2023-04-28 at 14:24:43 -0500