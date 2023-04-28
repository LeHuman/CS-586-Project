---
title: Context_t
summary: Context data for states. 

---

# Context_t



Context data for states. 


`#include <state.hpp>`

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[Context_t](Classes/class_context__t.md#function-context-t)**() =default |
| | **[~Context_t](Classes/class_context__t.md#function-~context-t)**() =default |
| void | **[set_cups](Classes/class_context__t.md#function-set-cups)**(int n) |
| int | **[get_cups](Classes/class_context__t.md#function-get-cups)**() |
| void | **[clear_additives](Classes/class_context__t.md#function-clear-additives)**() |
| void | **[toggle_additive](Classes/class_context__t.md#function-toggle-additive)**(additive_e add) |
| std::set< int > | **[get_additives](Classes/class_context__t.md#function-get-additives)**() |

## Public Functions Documentation

### function Context_t

```cpp
Context_t() =default
```


### function ~Context_t

```cpp
~Context_t() =default
```


### function set_cups

```cpp
inline void set_cups(
    int n
)
```


### function get_cups

```cpp
inline int get_cups()
```


### function clear_additives

```cpp
inline void clear_additives()
```


### function toggle_additive

```cpp
inline void toggle_additive(
    additive_e add
)
```


### function get_additives

```cpp
inline std::set< int > get_additives()
```


-------------------------------

Updated on 2023-04-28 at 14:24:43 -0500