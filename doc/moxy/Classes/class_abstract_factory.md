---
title: AbstractFactory
summary: Abstract class for VM factory objects. 

---

# AbstractFactory



Abstract class for VM factory objects. 


`#include <abstractFactory.hpp>`

Inherited by [VM1Factory](Classes/class_v_m1_factory.md), [VM2Factory](Classes/class_v_m2_factory.md)

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[AbstractFactory](Classes/class_abstract_factory.md#function-abstractfactory)**() =default |
| virtual | **[~AbstractFactory](Classes/class_abstract_factory.md#function-~abstractfactory)**() =default |
| virtual [DataStore](Classes/class_data_store.md) * | **[createDS](Classes/class_abstract_factory.md#function-createds)**() =0<br>returns a specific object from this factory  |
| virtual [StorePrice_t](Classes/class_store_price__t.md) * | **[createSP](Classes/class_abstract_factory.md#function-createsp)**() =0<br>returns a specific object from this factory  |
| virtual [ZeroCF_t](Classes/class_zero_c_f__t.md) * | **[createZCF](Classes/class_abstract_factory.md#function-createzcf)**() =0<br>returns a specific object from this factory  |
| virtual [IncreaseCF_t](Classes/class_increase_c_f__t.md) * | **[createICF](Classes/class_abstract_factory.md#function-createicf)**() =0<br>returns a specific object from this factory  |
| virtual [ReturnCoins_t](Classes/class_return_coins__t.md) * | **[createRC](Classes/class_abstract_factory.md#function-createrc)**() =0<br>returns a specific object from this factory  |
| virtual [DisposeDrink_t](Classes/class_dispose_drink__t.md) * | **[createDD](Classes/class_abstract_factory.md#function-createdd)**() =0<br>returns a specific object from this factory  |
| virtual [DisposeAdditive_t](Classes/class_dispose_additive__t.md) * | **[createDA](Classes/class_abstract_factory.md#function-createda)**() =0<br>returns a specific object from this factory  |

## Protected Attributes

|                | Name           |
| -------------- | -------------- |
| [DataStore](Classes/class_data_store.md) * | **[cacheDS](Classes/class_abstract_factory.md#variable-cacheds)**  |
| [StorePrice_t](Classes/class_store_price__t.md) * | **[cacheSP](Classes/class_abstract_factory.md#variable-cachesp)**  |
| [ZeroCF_t](Classes/class_zero_c_f__t.md) * | **[cacheZCF](Classes/class_abstract_factory.md#variable-cachezcf)**  |
| [IncreaseCF_t](Classes/class_increase_c_f__t.md) * | **[cacheICF](Classes/class_abstract_factory.md#variable-cacheicf)**  |
| [ReturnCoins_t](Classes/class_return_coins__t.md) * | **[cacheRC](Classes/class_abstract_factory.md#variable-cacherc)**  |
| [DisposeDrink_t](Classes/class_dispose_drink__t.md) * | **[cacheDD](Classes/class_abstract_factory.md#variable-cachedd)**  |
| [DisposeAdditive_t](Classes/class_dispose_additive__t.md) * | **[cacheDA](Classes/class_abstract_factory.md#variable-cacheda)**  |

## Public Functions Documentation

### function AbstractFactory

```cpp
AbstractFactory() =default
```


### function ~AbstractFactory

```cpp
virtual ~AbstractFactory() =default
```


### function createDS

```cpp
virtual DataStore * createDS() =0
```

returns a specific object from this factory 

**Return**: DataStore* factory specific object 

**Reimplemented by**: [VM1Factory::createDS](Classes/class_v_m1_factory.md#function-createds), [VM2Factory::createDS](Classes/class_v_m2_factory.md#function-createds)


### function createSP

```cpp
virtual StorePrice_t * createSP() =0
```

returns a specific object from this factory 

**Return**: StorePrice_t* factory specific object 

**Reimplemented by**: [VM1Factory::createSP](Classes/class_v_m1_factory.md#function-createsp), [VM2Factory::createSP](Classes/class_v_m2_factory.md#function-createsp)


### function createZCF

```cpp
virtual ZeroCF_t * createZCF() =0
```

returns a specific object from this factory 

**Return**: ZeroCF_t* factory specific object 

**Reimplemented by**: [VM1Factory::createZCF](Classes/class_v_m1_factory.md#function-createzcf), [VM2Factory::createZCF](Classes/class_v_m2_factory.md#function-createzcf)


### function createICF

```cpp
virtual IncreaseCF_t * createICF() =0
```

returns a specific object from this factory 

**Return**: IncreaseCF_t* factory specific object 

**Reimplemented by**: [VM1Factory::createICF](Classes/class_v_m1_factory.md#function-createicf), [VM2Factory::createICF](Classes/class_v_m2_factory.md#function-createicf)


### function createRC

```cpp
virtual ReturnCoins_t * createRC() =0
```

returns a specific object from this factory 

**Return**: ReturnCoins_t* factory specific object 

**Reimplemented by**: [VM1Factory::createRC](Classes/class_v_m1_factory.md#function-createrc), [VM2Factory::createRC](Classes/class_v_m2_factory.md#function-createrc)


### function createDD

```cpp
virtual DisposeDrink_t * createDD() =0
```

returns a specific object from this factory 

**Return**: DisposeDrink_t* factory specific object 

**Reimplemented by**: [VM1Factory::createDD](Classes/class_v_m1_factory.md#function-createdd), [VM2Factory::createDD](Classes/class_v_m2_factory.md#function-createdd)


### function createDA

```cpp
virtual DisposeAdditive_t * createDA() =0
```

returns a specific object from this factory 

**Return**: DisposeAdditive_t* factory specific object 

**Reimplemented by**: [VM1Factory::createDA](Classes/class_v_m1_factory.md#function-createda), [VM2Factory::createDA](Classes/class_v_m2_factory.md#function-createda)


## Protected Attributes Documentation

### variable cacheDS

```cpp
DataStore * cacheDS = nullptr;
```


### variable cacheSP

```cpp
StorePrice_t * cacheSP = nullptr;
```


### variable cacheZCF

```cpp
ZeroCF_t * cacheZCF = nullptr;
```


### variable cacheICF

```cpp
IncreaseCF_t * cacheICF = nullptr;
```


### variable cacheRC

```cpp
ReturnCoins_t * cacheRC = nullptr;
```


### variable cacheDD

```cpp
DisposeDrink_t * cacheDD = nullptr;
```


### variable cacheDA

```cpp
DisposeAdditive_t * cacheDA = nullptr;
```


-------------------------------

Updated on 2023-04-28 at 14:24:43 -0500