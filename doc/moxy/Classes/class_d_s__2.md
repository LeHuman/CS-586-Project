---
title: DS_2
summary: Datastore for VM 2. 

---

# DS_2



Datastore for VM 2. 


`#include <DS_2.hpp>`

Inherits from [DataStore](Classes/class_data_store.md)

## Public Functions

|                | Name           |
| -------------- | -------------- |
| void | **[set_temp_price](Classes/class_d_s__2.md#function-set-temp-price)**(float p)<br>Set the temporary price.  |
| float | **[get_temp_price](Classes/class_d_s__2.md#function-get-temp-price)**()<br>Get the temporary price.  |
| void | **[set_temp_value](Classes/class_d_s__2.md#function-set-temp-value)**(int v)<br>Set the temporary funds.  |
| int | **[get_temp_value](Classes/class_d_s__2.md#function-get-temp-value)**()<br>Get the temporary value.  |
| void | **[set_price](Classes/class_d_s__2.md#function-set-price)**(float p)<br>Set the price.  |
| float | **[get_price](Classes/class_d_s__2.md#function-get-price)**()<br>Get the price.  |
| void | **[set_coins](Classes/class_d_s__2.md#function-set-coins)**(int c)<br>Set coins.  |
| int | **[get_coins](Classes/class_d_s__2.md#function-get-coins)**()<br>Get coins.  |

## Additional inherited members

**Public Functions inherited from [DataStore](Classes/class_data_store.md)**

|                | Name           |
| -------------- | -------------- |
| | **[DataStore](Classes/class_data_store.md#function-datastore)**() =default |
| virtual | **[~DataStore](Classes/class_data_store.md#function-~datastore)**() =default |


## Public Functions Documentation

### function set_temp_price

```cpp
inline void set_temp_price(
    float p
)
```

Set the temporary price. 

**Parameters**: 

  * **p** price to set 


### function get_temp_price

```cpp
inline float get_temp_price()
```

Get the temporary price. 

**Return**: float current temp price 

### function set_temp_value

```cpp
inline void set_temp_value(
    int v
)
```

Set the temporary funds. 

**Parameters**: 

  * **v** funds to set 


### function get_temp_value

```cpp
inline int get_temp_value()
```

Get the temporary value. 

**Return**: int current temporary value 

### function set_price

```cpp
inline void set_price(
    float p
)
```

Set the price. 

**Parameters**: 

  * **p** price to set 


### function get_price

```cpp
inline float get_price()
```

Get the price. 

**Return**: float current price 

### function set_coins

```cpp
inline void set_coins(
    int c
)
```

Set coins. 

**Parameters**: 

  * **c** coins to set 


### function get_coins

```cpp
inline int get_coins()
```

Get coins. 

**Return**: int 

-------------------------------

Updated on 2023-04-28 at 14:24:43 -0500