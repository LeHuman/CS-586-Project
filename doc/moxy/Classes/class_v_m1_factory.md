---
title: VM1Factory
summary: Concrete Factory for VM 1. 

---

# VM1Factory



Concrete Factory for VM 1. 


`#include <VM1Factory.hpp>`

Inherits from [AbstractFactory](Classes/class_abstract_factory.md)

## Public Functions

|                | Name           |
| -------------- | -------------- |
| virtual [DataStore](Classes/class_data_store.md) * | **[createDS](Classes/class_v_m1_factory.md#function-createds)**() override<br>Create a new DataSto object for this strategy.  |
| virtual [StorePrice_t](Classes/class_store_price__t.md) * | **[createSP](Classes/class_v_m1_factory.md#function-createsp)**() override<br>Create a new StorePrice object for this strategy.  |
| virtual [ZeroCF_t](Classes/class_zero_c_f__t.md) * | **[createZCF](Classes/class_v_m1_factory.md#function-createzcf)**() override<br>Create a new ZeroCF object for this strategy.  |
| virtual [IncreaseCF_t](Classes/class_increase_c_f__t.md) * | **[createICF](Classes/class_v_m1_factory.md#function-createicf)**() override<br>Create a new IncreaseCF object for this strategy.  |
| virtual [ReturnCoins_t](Classes/class_return_coins__t.md) * | **[createRC](Classes/class_v_m1_factory.md#function-createrc)**() override<br>Create a new ReturnCoins object for this strategy.  |
| virtual [DisposeDrink_t](Classes/class_dispose_drink__t.md) * | **[createDD](Classes/class_v_m1_factory.md#function-createdd)**() override<br>Create a new DisposeDrink object for this strategy.  |
| virtual [DisposeAdditive_t](Classes/class_dispose_additive__t.md) * | **[createDA](Classes/class_v_m1_factory.md#function-createda)**() override<br>Create a new DisposeAdditive object for this strategy.  |

## Additional inherited members

**Public Functions inherited from [AbstractFactory](Classes/class_abstract_factory.md)**

|                | Name           |
| -------------- | -------------- |
| | **[AbstractFactory](Classes/class_abstract_factory.md#function-abstractfactory)**() =default |
| virtual | **[~AbstractFactory](Classes/class_abstract_factory.md#function-~abstractfactory)**() =default |

**Protected Attributes inherited from [AbstractFactory](Classes/class_abstract_factory.md)**

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

### function createDS

```cpp
virtual DataStore * createDS() override
```

Create a new DataSto object for this strategy. 

**Return**: DataStore* 

**Reimplements**: [AbstractFactory::createDS](Classes/class_abstract_factory.md#function-createds)


### function createSP

```cpp
virtual StorePrice_t * createSP() override
```

Create a new StorePrice object for this strategy. 

**Return**: StorePrice_t* 

**Reimplements**: [AbstractFactory::createSP](Classes/class_abstract_factory.md#function-createsp)


### function createZCF

```cpp
virtual ZeroCF_t * createZCF() override
```

Create a new ZeroCF object for this strategy. 

**Return**: ZeroCF_t* 

**Reimplements**: [AbstractFactory::createZCF](Classes/class_abstract_factory.md#function-createzcf)


### function createICF

```cpp
virtual IncreaseCF_t * createICF() override
```

Create a new IncreaseCF object for this strategy. 

**Return**: IncreaseCF_t* 

**Reimplements**: [AbstractFactory::createICF](Classes/class_abstract_factory.md#function-createicf)


### function createRC

```cpp
virtual ReturnCoins_t * createRC() override
```

Create a new ReturnCoins object for this strategy. 

**Return**: ReturnCoins_t* 

**Reimplements**: [AbstractFactory::createRC](Classes/class_abstract_factory.md#function-createrc)


### function createDD

```cpp
virtual DisposeDrink_t * createDD() override
```

Create a new DisposeDrink object for this strategy. 

**Return**: DisposeDrink_t* 

**Reimplements**: [AbstractFactory::createDD](Classes/class_abstract_factory.md#function-createdd)


### function createDA

```cpp
virtual DisposeAdditive_t * createDA() override
```

Create a new DisposeAdditive object for this strategy. 

**Return**: DisposeAdditive_t* 

**Reimplements**: [AbstractFactory::createDA](Classes/class_abstract_factory.md#function-createda)


-------------------------------

Updated on 2023-04-28 at 14:24:43 -0500