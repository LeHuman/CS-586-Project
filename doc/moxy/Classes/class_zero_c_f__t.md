---
title: ZeroCF_t
summary: Abstract strategy class for ZeroCF function. 

---

# ZeroCF_t



Abstract strategy class for ZeroCF function. 


`#include <ZeroCF.hpp>`

Inherited by [ZeroCF_Float](Classes/class_zero_c_f___float.md), [ZeroCF_Int](Classes/class_zero_c_f___int.md)

## Public Functions

|                | Name           |
| -------------- | -------------- |
| virtual | **[~ZeroCF_t](Classes/class_zero_c_f__t.md#function-~zerocf-t)**() =default |
| virtual void | **[ZeroCF](Classes/class_zero_c_f__t.md#function-zerocf)**([DataStore](Classes/class_data_store.md) * ds) =0 |

## Public Functions Documentation

### function ~ZeroCF_t

```cpp
virtual ~ZeroCF_t() =default
```


### function ZeroCF

```cpp
virtual void ZeroCF(
    DataStore * ds
) =0
```


**Reimplemented by**: [ZeroCF_Int::ZeroCF](Classes/class_zero_c_f___int.md#function-zerocf), [ZeroCF_Float::ZeroCF](Classes/class_zero_c_f___float.md#function-zerocf)


-------------------------------

Updated on 2023-04-28 at 14:24:43 -0500