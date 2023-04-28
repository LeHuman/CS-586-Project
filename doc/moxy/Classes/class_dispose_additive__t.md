---
title: DisposeAdditive_t
summary: Abstract strategy class for DisposeAdditive function. 

---

# DisposeAdditive_t



Abstract strategy class for DisposeAdditive function. 


`#include <DisposeAdditive.hpp>`

Inherited by [DisposeAdditive_1](Classes/class_dispose_additive__1.md), [DisposeAdditive_2](Classes/class_dispose_additive__2.md)

## Public Functions

|                | Name           |
| -------------- | -------------- |
| virtual | **[~DisposeAdditive_t](Classes/class_dispose_additive__t.md#function-~disposeadditive-t)**() =default |
| virtual void | **[DisposeAdditive](Classes/class_dispose_additive__t.md#function-disposeadditive)**(std::set< int > A) =0 |

## Public Functions Documentation

### function ~DisposeAdditive_t

```cpp
virtual ~DisposeAdditive_t() =default
```


### function DisposeAdditive

```cpp
virtual void DisposeAdditive(
    std::set< int > A
) =0
```


**Reimplemented by**: [DisposeAdditive_1::DisposeAdditive](Classes/class_dispose_additive__1.md#function-disposeadditive), [DisposeAdditive_2::DisposeAdditive](Classes/class_dispose_additive__2.md#function-disposeadditive)


-------------------------------

Updated on 2023-04-28 at 14:24:43 -0500