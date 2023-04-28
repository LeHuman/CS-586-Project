---
title: State_t

---

# State_t





Inherited by [CoinsInserted_s](Classes/class_coins_inserted__s.md), [Create_s](Classes/class_create__s.md), [Idle_s](Classes/class_idle__s.md), [NoCups_s](Classes/class_no_cups__s.md)

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[State_t](Classes/class_state__t.md#function-state-t)**([MDA](Classes/class_m_d_a.md) * mda, [OP](Classes/class_o_p.md) * o, [Context_t](Classes/class_context__t.md) * ctx) |
| virtual | **[~State_t](Classes/class_state__t.md#function-~state-t)**() =default |
| virtual void | **[create](Classes/class_state__t.md#function-create)**()<br>Call the state's create function.  |
| virtual void | **[insert_cups](Classes/class_state__t.md#function-insert-cups)**(int n)<br>Call the state's insert_cups function.  |
| virtual void | **[coin](Classes/class_state__t.md#function-coin)**(int n)<br>Call the state's coin function.  |
| virtual void | **[card](Classes/class_state__t.md#function-card)**()<br>Call the state's card function.  |
| virtual void | **[cancel](Classes/class_state__t.md#function-cancel)**()<br>Call the state's cancel function.  |
| virtual void | **[set_price](Classes/class_state__t.md#function-set-price)**()<br>Call the state's set_price function.  |
| virtual void | **[dispose_drink](Classes/class_state__t.md#function-dispose-drink)**(int d)<br>Call the state's dispose_drink function.  |
| virtual void | **[additive](Classes/class_state__t.md#function-additive)**(int d)<br>Call the state's additive function.  |

## Protected Attributes

|                | Name           |
| -------------- | -------------- |
| [Context_t](Classes/class_context__t.md) * | **[ctx](Classes/class_state__t.md#variable-ctx)** <br>Context data for states.  |
| [MDA](Classes/class_m_d_a.md) * | **[mda](Classes/class_state__t.md#variable-mda)** <br>The related [MDA](Classes/class_m_d_a.md) object.  |
| [OP](Classes/class_o_p.md) * | **[op](Classes/class_state__t.md#variable-op)** <br>The related [OP](Classes/class_o_p.md) object.  |

## Public Functions Documentation

### function State_t

```cpp
inline State_t(
    MDA * mda,
    OP * o,
    Context_t * ctx
)
```


### function ~State_t

```cpp
virtual ~State_t() =default
```


### function create

```cpp
inline virtual void create()
```

Call the state's create function. 

### function insert_cups

```cpp
inline virtual void insert_cups(
    int n
)
```

Call the state's insert_cups function. 

### function coin

```cpp
inline virtual void coin(
    int n
)
```

Call the state's coin function. 

### function card

```cpp
inline virtual void card()
```

Call the state's card function. 

### function cancel

```cpp
inline virtual void cancel()
```

Call the state's cancel function. 

### function set_price

```cpp
inline virtual void set_price()
```

Call the state's set_price function. 

### function dispose_drink

```cpp
inline virtual void dispose_drink(
    int d
)
```

Call the state's dispose_drink function. 

### function additive

```cpp
inline virtual void additive(
    int d
)
```

Call the state's additive function. 

## Protected Attributes Documentation

### variable ctx

```cpp
Context_t * ctx;
```

Context data for states. 

### variable mda

```cpp
MDA * mda;
```

The related [MDA](Classes/class_m_d_a.md) object. 

### variable op

```cpp
OP * op;
```

The related [OP](Classes/class_o_p.md) object. 

-------------------------------

Updated on 2023-04-28 at 14:24:43 -0500