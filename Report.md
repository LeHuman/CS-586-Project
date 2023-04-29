---
geometry:

- margin=0.75in
- letterpaper

classoption:    table
documentclass:  extarticle
urlcolor:       blue
fontsize:       11pt
header-includes: |
    \usepackage{multicol}
    \usepackage{graphicx}
    \usepackage{float}
    \rowcolors{2}{gray!10}{gray!5}
    \usepackage{pdflscape}
    \newcommand{\blandscape}{\begin{landscape}}
    \newcommand{\elandscape}{\end{landscape}}
    \usepackage{pdfpages}
...

\normalsize
\pagenumbering{gobble}
\pagenumbering{arabic}

**CS 586 - Spring 2023**  
**Isaias Rivera**  
**A20442116**

# Project - Part 2

# 1 - MDA-EFSM model for the VM components

\includepdf[pages=-]{Sample MDA-EFSM.pdf}

# 2 - Class diagram of the MDA of the VM components

# 3 - Class Descriptions and documentation

## VM1

User Interface for [VM1]().

`#include <VM1.hpp>`

### Public Functions

|         |                                                                   Name                                                                   |
| ------- | ---------------------------------------------------------------------------------------------------------------------------------------- |
|         | **[VM1](Classes/class_v_m1.md#function-vm1)**([AbstractFactory](Classes/class_abstract_factory.md) *a, [MDA](Classes/class_m_d_a.md)* m) |
| virtual | **[~VM1](Classes/class_v_m1.md#function-~vm1)**()                                                                                        |
| void    | **[create](Classes/class_v_m1.md#function-create)**(int p)<br>Create a new instance, and set inital price.                               |
| void    | **[coin](Classes/class_v_m1.md#function-coin)**(float v)<br>insert coins                                                                 |
| void    | **[sugar](Classes/class_v_m1.md#function-sugar)**()<br>Request sugar as an additive.                                                     |
| void    | **[tea](Classes/class_v_m1.md#function-tea)**()<br>Request tea to be disposed.                                                           |
| void    | **[latte](Classes/class_v_m1.md#function-latte)**()<br>Request latte to be disposed.                                                     |
| void    | **[insert_cups](Classes/class_v_m1.md#function-insert-cups)**(int n)<br>Request to insert cups.                                          |
| void    | **[set_price](Classes/class_v_m1.md#function-set-price)**(float p)<br>Request a price change of a drink.                                 |
| void    | **[cancel](Classes/class_v_m1.md#function-cancel)**()<br>Request cancellation of current selection.                                      |

## VM2

User Interface for [VM2]().

`#include <VM2.hpp>`

### Public Functions

|         |                                                                   Name                                                                   |
| ------- | ---------------------------------------------------------------------------------------------------------------------------------------- |
|         | **[VM2](Classes/class_v_m2.md#function-vm2)**([AbstractFactory](Classes/class_abstract_factory.md) *a, [MDA](Classes/class_m_d_a.md)* m) |
| virtual | **[~VM2](Classes/class_v_m2.md#function-~vm2)**()                                                                                        |
| void    | **[CREATE](Classes/class_v_m2.md#function-create)**(float p)<br>Create a new instance, and set inital price.                             |
| void    | **[COIN](Classes/class_v_m2.md#function-coin)**(int v)<br>insert coins                                                                   |
| void    | **[SUGAR](Classes/class_v_m2.md#function-sugar)**()<br>Request sugar as an additive.                                                     |
| void    | **[CREAM](Classes/class_v_m2.md#function-cream)**()<br>Request cream as an additive.                                                     |
| void    | **[COFFEE](Classes/class_v_m2.md#function-coffee)**()<br>Request coffee to be disposed.                                                  |
| void    | **[InsertCups](Classes/class_v_m2.md#function-insertcups)**(int n)<br>Request to insert cups.                                            |
| void    | **[SetPrice](Classes/class_v_m2.md#function-setprice)**(int p)<br>Request a price change of a drink.                                     |
| void    | **[CANCEL](Classes/class_v_m2.md#function-cancel)**()<br>Request cancellation of current selection.                                      |
| void    | **[CARD](Classes/class_v_m2.md#function-card)**(int x)                                                                                   |

**Abstract Factory Pattern**

## VM1Factory

Concrete Factory for VM 1.

`#include <VM1Factory.hpp>`

Inherits from [AbstractFactory](Classes/class_abstract_factory.md)

### Public Functions

|                                                                     |                                                                 Name                                                                 |
| ------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------ |
| virtual [DataStore](Classes/class_data_store.md) *                  | **[createDS](Classes/class_v_m1_factory.md#function-createds)**() override<br>Create a new DataSto object for this strategy.         |
| virtual [StorePrice_t](Classes/class_store_price__t.md) *           | **[createSP](Classes/class_v_m1_factory.md#function-createsp)**() override<br>Create a new StorePrice object for this strategy.      |
| virtual [ZeroCF_t](Classes/class_zero_c_f__t.md) *                  | **[createZCF](Classes/class_v_m1_factory.md#function-createzcf)**() override<br>Create a new ZeroCF object for this strategy.        |
| virtual [IncreaseCF_t](Classes/class_increase_c_f__t.md) *          | **[createICF](Classes/class_v_m1_factory.md#function-createicf)**() override<br>Create a new IncreaseCF object for this strategy.    |
| virtual [ReturnCoins_t](Classes/class_return_coins__t.md) *         | **[createRC](Classes/class_v_m1_factory.md#function-createrc)**() override<br>Create a new ReturnCoins object for this strategy.     |
| virtual [DisposeDrink_t](Classes/class_dispose_drink__t.md) *       | **[createDD](Classes/class_v_m1_factory.md#function-createdd)**() override<br>Create a new DisposeDrink object for this strategy.    |
| virtual [DisposeAdditive_t](Classes/class_dispose_additive__t.md) * | **[createDA](Classes/class_v_m1_factory.md#function-createda)**() override<br>Create a new DisposeAdditive object for this strategy. |

### Additional inherited members

**Public Functions inherited from [AbstractFactory](Classes/class_abstract_factory.md)**

|         |                                              Name                                              |
| ------- | ---------------------------------------------------------------------------------------------- |
|         | **[AbstractFactory](Classes/class_abstract_factory.md#function-abstractfactory)**() =default   |
| virtual | **[~AbstractFactory](Classes/class_abstract_factory.md#function-~abstractfactory)**() =default |

**Protected Attributes inherited from [AbstractFactory](Classes/class_abstract_factory.md)**

|                                                             |                                Name                                 |
| ----------------------------------------------------------- | ------------------------------------------------------------------- |
| [DataStore](Classes/class_data_store.md) *                  | **[cacheDS](Classes/class_abstract_factory.md#variable-cacheds)**   |
| [StorePrice_t](Classes/class_store_price__t.md) *           | **[cacheSP](Classes/class_abstract_factory.md#variable-cachesp)**   |
| [ZeroCF_t](Classes/class_zero_c_f__t.md) *                  | **[cacheZCF](Classes/class_abstract_factory.md#variable-cachezcf)** |
| [IncreaseCF_t](Classes/class_increase_c_f__t.md) *          | **[cacheICF](Classes/class_abstract_factory.md#variable-cacheicf)** |
| [ReturnCoins_t](Classes/class_return_coins__t.md) *         | **[cacheRC](Classes/class_abstract_factory.md#variable-cacherc)**   |
| [DisposeDrink_t](Classes/class_dispose_drink__t.md) *       | **[cacheDD](Classes/class_abstract_factory.md#variable-cachedd)**   |
| [DisposeAdditive_t](Classes/class_dispose_additive__t.md) * | **[cacheDA](Classes/class_abstract_factory.md#variable-cacheda)**   |

## VM2Factory

Concrete Factory for VM 2.

`#include <VM2Factory.hpp>`

Inherits from [AbstractFactory](Classes/class_abstract_factory.md)

### Public Functions

|                                                                     |                                                                 Name                                                                 |
| ------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------ |
| virtual [DataStore](Classes/class_data_store.md) *                  | **[createDS](Classes/class_v_m2_factory.md#function-createds)**() override<br>Create a new DataSto object for this strategy.         |
| virtual [StorePrice_t](Classes/class_store_price__t.md) *           | **[createSP](Classes/class_v_m2_factory.md#function-createsp)**() override<br>Create a new StorePrice object for this strategy.      |
| virtual [ZeroCF_t](Classes/class_zero_c_f__t.md) *                  | **[createZCF](Classes/class_v_m2_factory.md#function-createzcf)**() override<br>Create a new ZeroCF object for this strategy.        |
| virtual [IncreaseCF_t](Classes/class_increase_c_f__t.md) *          | **[createICF](Classes/class_v_m2_factory.md#function-createicf)**() override<br>Create a new IncreaseCF object for this strategy.    |
| virtual [ReturnCoins_t](Classes/class_return_coins__t.md) *         | **[createRC](Classes/class_v_m2_factory.md#function-createrc)**() override<br>Create a new ReturnCoins object for this strategy.     |
| virtual [DisposeDrink_t](Classes/class_dispose_drink__t.md) *       | **[createDD](Classes/class_v_m2_factory.md#function-createdd)**() override<br>Create a new DisposeDrink object for this strategy.    |
| virtual [DisposeAdditive_t](Classes/class_dispose_additive__t.md) * | **[createDA](Classes/class_v_m2_factory.md#function-createda)**() override<br>Create a new DisposeAdditive object for this strategy. |

### Additional inherited members

**Public Functions inherited from [AbstractFactory](Classes/class_abstract_factory.md)**

|         |                                              Name                                              |
| ------- | ---------------------------------------------------------------------------------------------- |
|         | **[AbstractFactory](Classes/class_abstract_factory.md#function-abstractfactory)**() =default   |
| virtual | **[~AbstractFactory](Classes/class_abstract_factory.md#function-~abstractfactory)**() =default |

**Protected Attributes inherited from [AbstractFactory](Classes/class_abstract_factory.md)**

|                                                             |                                Name                                 |
| ----------------------------------------------------------- | ------------------------------------------------------------------- |
| [DataStore](Classes/class_data_store.md) *                  | **[cacheDS](Classes/class_abstract_factory.md#variable-cacheds)**   |
| [StorePrice_t](Classes/class_store_price__t.md) *           | **[cacheSP](Classes/class_abstract_factory.md#variable-cachesp)**   |
| [ZeroCF_t](Classes/class_zero_c_f__t.md) *                  | **[cacheZCF](Classes/class_abstract_factory.md#variable-cachezcf)** |
| [IncreaseCF_t](Classes/class_increase_c_f__t.md) *          | **[cacheICF](Classes/class_abstract_factory.md#variable-cacheicf)** |
| [ReturnCoins_t](Classes/class_return_coins__t.md) *         | **[cacheRC](Classes/class_abstract_factory.md#variable-cacherc)**   |
| [DisposeDrink_t](Classes/class_dispose_drink__t.md) *       | **[cacheDD](Classes/class_abstract_factory.md#variable-cachedd)**   |
| [DisposeAdditive_t](Classes/class_dispose_additive__t.md) * | **[cacheDA](Classes/class_abstract_factory.md#variable-cacheda)**   |

## AbstractFactory

Abstract class for VM factory objects.

`#include <abstractFactory.hpp>`

Inherited by [VM1Factory](Classes/class_v_m1_factory.md), [VM2Factory](Classes/class_v_m2_factory.md)

### Public Functions

|                                                                     |                                                           Name                                                            |
| ------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------- |
|                                                                     | **[AbstractFactory](Classes/class_abstract_factory.md#function-abstractfactory)**() =default                              |
| virtual                                                             | **[~AbstractFactory](Classes/class_abstract_factory.md#function-~abstractfactory)**() =default                            |
| virtual [DataStore](Classes/class_data_store.md) *                  | **[createDS](Classes/class_abstract_factory.md#function-createds)**() =0<br>returns a specific object from this factory   |
| virtual [StorePrice_t](Classes/class_store_price__t.md) *           | **[createSP](Classes/class_abstract_factory.md#function-createsp)**() =0<br>returns a specific object from this factory   |
| virtual [ZeroCF_t](Classes/class_zero_c_f__t.md) *                  | **[createZCF](Classes/class_abstract_factory.md#function-createzcf)**() =0<br>returns a specific object from this factory |
| virtual [IncreaseCF_t](Classes/class_increase_c_f__t.md) *          | **[createICF](Classes/class_abstract_factory.md#function-createicf)**() =0<br>returns a specific object from this factory |
| virtual [ReturnCoins_t](Classes/class_return_coins__t.md) *         | **[createRC](Classes/class_abstract_factory.md#function-createrc)**() =0<br>returns a specific object from this factory   |
| virtual [DisposeDrink_t](Classes/class_dispose_drink__t.md) *       | **[createDD](Classes/class_abstract_factory.md#function-createdd)**() =0<br>returns a specific object from this factory   |
| virtual [DisposeAdditive_t](Classes/class_dispose_additive__t.md) * | **[createDA](Classes/class_abstract_factory.md#function-createda)**() =0<br>returns a specific object from this factory   |

### Protected Attributes

|                                                             |                                Name                                 |
| ----------------------------------------------------------- | ------------------------------------------------------------------- |
| [DataStore](Classes/class_data_store.md) *                  | **[cacheDS](Classes/class_abstract_factory.md#variable-cacheds)**   |
| [StorePrice_t](Classes/class_store_price__t.md) *           | **[cacheSP](Classes/class_abstract_factory.md#variable-cachesp)**   |
| [ZeroCF_t](Classes/class_zero_c_f__t.md) *                  | **[cacheZCF](Classes/class_abstract_factory.md#variable-cachezcf)** |
| [IncreaseCF_t](Classes/class_increase_c_f__t.md) *          | **[cacheICF](Classes/class_abstract_factory.md#variable-cacheicf)** |
| [ReturnCoins_t](Classes/class_return_coins__t.md) *         | **[cacheRC](Classes/class_abstract_factory.md#variable-cacherc)**   |
| [DisposeDrink_t](Classes/class_dispose_drink__t.md) *       | **[cacheDD](Classes/class_abstract_factory.md#variable-cachedd)**   |
| [DisposeAdditive_t](Classes/class_dispose_additive__t.md) * | **[cacheDA](Classes/class_abstract_factory.md#variable-cacheda)**   |

**Strategy Pattern**

## OP

The Output Processor receives actions from a state and uses the appropriate strategy.

`#include <OP.hpp>`

### Public Functions

|         |                                                                         Name                                                                          |
| ------- | ----------------------------------------------------------------------------------------------------------------------------------------------------- |
|         | **[OP](Classes/class_o_p.md#function-op)**([AbstractFactory](Classes/class_abstract_factory.md) * a)                                                  |
| virtual | **[~OP](Classes/class_o_p.md#function-~op)**()                                                                                                        |
| void    | **[StorePrice](Classes/class_o_p.md#function-storeprice)**()<br>call StorePrice using the pointer to the set strategy                                 |
| void    | **[ZeroCF](Classes/class_o_p.md#function-zerocf)**()<br>call ZeroCF using the pointer to the set strategy                                             |
| void    | **[IncreaseCF](Classes/class_o_p.md#function-increasecf)**()<br>call IncreaseCF using the pointer to the set strategy                                 |
| void    | **[ReturnCoins](Classes/class_o_p.md#function-returncoins)**()<br>call ReturnCoins using the pointer to the set strategy                              |
| void    | **[DisposeDrink](Classes/class_o_p.md#function-disposedrink)**(int d)<br>call DisposeDrink using the pointer to the set strategy                      |
| void    | **[DisposeAdditive](Classes/class_o_p.md#function-disposeadditive)**(std::set< int > a)<br>call DisposeAdditive using the pointer to the set strategy |

## DataStore

The abstract datastore class for data storage.

`#include <datastore.hpp>`

Inherited by [DS_1](Classes/class_d_s__1.md), [DS_2](Classes/class_d_s__2.md)

### Public Functions

|         |                                     Name                                     |
| ------- | ---------------------------------------------------------------------------- |
|         | **[DataStore](Classes/class_data_store.md#function-datastore)**() =default   |
| virtual | **[~DataStore](Classes/class_data_store.md#function-~datastore)**() =default |

## DS_1

Datastore for VM 1.

`#include <DS_1.hpp>`

Inherits from [DataStore](Classes/class_data_store.md)

### Public Functions

|       |                                                    Name                                                    |
| ----- | ---------------------------------------------------------------------------------------------------------- |
| void  | **[set_temp_price](Classes/class_d_s__1.md#function-set-temp-price)**(float p)<br>Set the temporary price. |
| float | **[get_temp_price](Classes/class_d_s__1.md#function-get-temp-price)**()<br>Get the temporary price.        |
| void  | **[set_temp_value](Classes/class_d_s__1.md#function-set-temp-value)**(float v)<br>Set the temporary funds. |
| float | **[get_temp_value](Classes/class_d_s__1.md#function-get-temp-value)**()<br>Get the temporary value.        |
| void  | **[set_price](Classes/class_d_s__1.md#function-set-price)**(float p)<br>Set the price.                     |
| float | **[get_price](Classes/class_d_s__1.md#function-get-price)**()<br>Get the price.                            |
| void  | **[set_coins](Classes/class_d_s__1.md#function-set-coins)**(float c)<br>Set coins.                         |
| float | **[get_coins](Classes/class_d_s__1.md#function-get-coins)**()<br>Get coins.                                |

### Additional inherited members

**Public Functions inherited from [DataStore](Classes/class_data_store.md)**

|         |                                     Name                                     |
| ------- | ---------------------------------------------------------------------------- |
|         | **[DataStore](Classes/class_data_store.md#function-datastore)**() =default   |
| virtual | **[~DataStore](Classes/class_data_store.md#function-~datastore)**() =default |

## DS_2

Datastore for VM 2.

`#include <DS_2.hpp>`

Inherits from [DataStore](Classes/class_data_store.md)

### Public Functions

|       |                                                    Name                                                    |
| ----- | ---------------------------------------------------------------------------------------------------------- |
| void  | **[set_temp_price](Classes/class_d_s__2.md#function-set-temp-price)**(float p)<br>Set the temporary price. |
| float | **[get_temp_price](Classes/class_d_s__2.md#function-get-temp-price)**()<br>Get the temporary price.        |
| void  | **[set_temp_value](Classes/class_d_s__2.md#function-set-temp-value)**(int v)<br>Set the temporary funds.   |
| int   | **[get_temp_value](Classes/class_d_s__2.md#function-get-temp-value)**()<br>Get the temporary value.        |
| void  | **[set_price](Classes/class_d_s__2.md#function-set-price)**(float p)<br>Set the price.                     |
| float | **[get_price](Classes/class_d_s__2.md#function-get-price)**()<br>Get the price.                            |
| void  | **[set_coins](Classes/class_d_s__2.md#function-set-coins)**(int c)<br>Set coins.                           |
| int   | **[get_coins](Classes/class_d_s__2.md#function-get-coins)**()<br>Get coins.                                |

### Additional inherited members

**Public Functions inherited from [DataStore](Classes/class_data_store.md)**

|         |                                     Name                                     |
| ------- | ---------------------------------------------------------------------------- |
|         | **[DataStore](Classes/class_data_store.md#function-datastore)**() =default   |
| virtual | **[~DataStore](Classes/class_data_store.md#function-~datastore)**() =default |

## DisposeDrink_t

Abstract strategy class for DisposeDrink function.

`#include <DisposeDrink.hpp>`

Inherited by [DisposeDrink_1](Classes/class_dispose_drink__1.md), [DisposeDrink_2](Classes/class_dispose_drink__2.md)

### Public Functions

|              |                                             Name                                             |
| ------------ | -------------------------------------------------------------------------------------------- |
| virtual      | **[~DisposeDrink_t](Classes/class_dispose_drink__t.md#function-~disposedrink-t)**() =default |
| virtual void | **[DisposeDrink](Classes/class_dispose_drink__t.md#function-disposedrink)**(int d) =0        |

## DisposeDrink_1

Concrete strategy class for [VM1]() DisposeDrink function.

`#include <DisposeDrink.hpp>`

Inherits from [DisposeDrink_t](Classes/class_dispose_drink__t.md)

### Public Functions

|              |                                            Name                                             |
| ------------ | ------------------------------------------------------------------------------------------- |
| virtual void | **[DisposeDrink](Classes/class_dispose_drink__1.md#function-disposedrink)**(int d) override |

## DisposeDrink_2

Concrete strategy class for [VM2]() DisposeDrink function.

`#include <DisposeDrink.hpp>`

Inherits from [DisposeDrink_t](Classes/class_dispose_drink__t.md)

### Public Functions

|              |                                            Name                                             |
| ------------ | ------------------------------------------------------------------------------------------- |
| virtual void | **[DisposeDrink](Classes/class_dispose_drink__2.md#function-disposedrink)**(int d) override |

## DisposeAdditive_t

Abstract strategy class for DisposeAdditive function.

`#include <DisposeAdditive.hpp>`

Inherited by [DisposeAdditive_1](Classes/class_dispose_additive__1.md), [DisposeAdditive_2](Classes/class_dispose_additive__2.md)

### Public Functions

|              |                                                    Name                                                    |
| ------------ | ---------------------------------------------------------------------------------------------------------- |
| virtual      | **[~DisposeAdditive_t](Classes/class_dispose_additive__t.md#function-~disposeadditive-t)**() =default      |
| virtual void | **[DisposeAdditive](Classes/class_dispose_additive__t.md#function-disposeadditive)**(std::set< int > A) =0 |

## DisposeAdditive_1

Concrete strategy class for [VM1]() DisposeAdditive function.

`#include <DisposeAdditive.hpp>`

Inherits from [DisposeAdditive_t](Classes/class_dispose_additive__t.md)

### Public Functions

|              |                                                       Name                                                       |
| ------------ | ---------------------------------------------------------------------------------------------------------------- |
| virtual void | **[DisposeAdditive](Classes/class_dispose_additive__1.md#function-disposeadditive)**(std::set< int > A) override |

## DisposeAdditive_2

Concrete strategy class for [VM2]() DisposeAdditive function.

`#include <DisposeAdditive.hpp>`

Inherits from [DisposeAdditive_t](Classes/class_dispose_additive__t.md)

### Public Functions

|              |                                                       Name                                                       |
| ------------ | ---------------------------------------------------------------------------------------------------------------- |
| virtual void | **[DisposeAdditive](Classes/class_dispose_additive__2.md#function-disposeadditive)**(std::set< int > A) override |

## IncreaseCF_t

Abstract strategy class for IncreaseCF function.

`#include <IncreaseCF.hpp>`

Inherited by [IncreaseCF_Float](Classes/class_increase_c_f___float.md), [IncreaseCF_Int](Classes/class_increase_c_f___int.md)

### Public Functions

|              |                                                           Name                                                           |
| ------------ | ------------------------------------------------------------------------------------------------------------------------ |
| virtual      | **[~IncreaseCF_t](Classes/class_increase_c_f__t.md#function-~increasecf-t)**() =default                                  |
| virtual void | **[IncreaseCF](Classes/class_increase_c_f__t.md#function-increasecf)**([DataStore](Classes/class_data_store.md) * ds) =0 |

## IncreaseCF_Int

Concrete strategy class for [VM2]() IncreaseCF function.

`#include <IncreaseCF.hpp>`

Inherits from [IncreaseCF_t](Classes/class_increase_c_f__t.md)

### Public Functions

|              |                                                               Name                                                                |
| ------------ | --------------------------------------------------------------------------------------------------------------------------------- |
| virtual void | **[IncreaseCF](Classes/class_increase_c_f___int.md#function-increasecf)**([DataStore](Classes/class_data_store.md) * ds) override |

## IncreaseCF_Float

Concrete strategy class for [VM1]() IncreaseCF function.

`#include <IncreaseCF.hpp>`

Inherits from [IncreaseCF_t](Classes/class_increase_c_f__t.md)

### Public Functions

|              |                                                                Name                                                                 |
| ------------ | ----------------------------------------------------------------------------------------------------------------------------------- |
| virtual void | **[IncreaseCF](Classes/class_increase_c_f___float.md#function-increasecf)**([DataStore](Classes/class_data_store.md) * ds) override |

# ReturnCoins_t

Abstract strategy class for ReturnCoins function.

`#include <ReturnCoins.hpp>`

Inherited by [ReturnCoins_Float](Classes/class_return_coins___float.md), [ReturnCoins_Int](Classes/class_return_coins___int.md)

## Public Functions

|              |                                           Name                                            |
| ------------ | ----------------------------------------------------------------------------------------- |
| virtual      | **[~ReturnCoins_t](Classes/class_return_coins__t.md#function-~returncoins-t)**() =default |
| virtual void | **[ReturnCoins](Classes/class_return_coins__t.md#function-returncoins)**() =0             |

# ReturnCoins_Float

Concrete strategy class for [VM1]() ReturnCoins function.

`#include <ReturnCoins.hpp>`

Inherits from [ReturnCoins_t](Classes/class_return_coins__t.md)

## Public Functions

|              |                                           Name                                           |
| ------------ | ---------------------------------------------------------------------------------------- |
| virtual void | **[ReturnCoins](Classes/class_return_coins___float.md#function-returncoins)**() override |

# ReturnCoins_Int

Concrete strategy class for [VM2]() ReturnCoins function.

`#include <ReturnCoins.hpp>`

Inherits from [ReturnCoins_t](Classes/class_return_coins__t.md)

## Public Functions

|              |                                          Name                                          |
| ------------ | -------------------------------------------------------------------------------------- |
| virtual void | **[ReturnCoins](Classes/class_return_coins___int.md#function-returncoins)**() override |

## Additional inherited members

**Public Functions inherited from [ReturnCoins_t](Classes/class_return_coins__t.md)**

|         |                                           Name                                            |
| ------- | ----------------------------------------------------------------------------------------- |
| virtual | **[~ReturnCoins_t](Classes/class_return_coins__t.md#function-~returncoins-t)**() =default |

# IncreaseCF_t

Abstract strategy class for IncreaseCF function.

`#include <IncreaseCF.hpp>`

Inherited by [IncreaseCF_Float](Classes/class_increase_c_f___float.md), [IncreaseCF_Int](Classes/class_increase_c_f___int.md)

## Public Functions

|              |                                                           Name                                                           |
| ------------ | ------------------------------------------------------------------------------------------------------------------------ |
| virtual      | **[~IncreaseCF_t](Classes/class_increase_c_f__t.md#function-~increasecf-t)**() =default                                  |
| virtual void | **[IncreaseCF](Classes/class_increase_c_f__t.md#function-increasecf)**([DataStore](Classes/class_data_store.md) * ds) =0 |

# IncreaseCF_Int

Concrete strategy class for [VM2]() IncreaseCF function.

`#include <IncreaseCF.hpp>`

Inherits from [IncreaseCF_t](Classes/class_increase_c_f__t.md)

## Public Functions

|              |                                                               Name                                                                |
| ------------ | --------------------------------------------------------------------------------------------------------------------------------- |
| virtual void | **[IncreaseCF](Classes/class_increase_c_f___int.md#function-increasecf)**([DataStore](Classes/class_data_store.md) * ds) override |

# IncreaseCF_Float

Concrete strategy class for [VM1]() IncreaseCF function.

`#include <IncreaseCF.hpp>`

Inherits from [IncreaseCF_t](Classes/class_increase_c_f__t.md)

## Public Functions

|              |                                                                Name                                                                 |
| ------------ | ----------------------------------------------------------------------------------------------------------------------------------- |
| virtual void | **[IncreaseCF](Classes/class_increase_c_f___float.md#function-increasecf)**([DataStore](Classes/class_data_store.md) * ds) override |

# ZeroCF_t

Abstract strategy class for ZeroCF function.

`#include <ZeroCF.hpp>`

Inherited by [ZeroCF_Float](Classes/class_zero_c_f___float.md), [ZeroCF_Int](Classes/class_zero_c_f___int.md)

## Public Functions

|              |                                                     Name                                                     |
| ------------ | ------------------------------------------------------------------------------------------------------------ |
| virtual      | **[~ZeroCF_t](Classes/class_zero_c_f__t.md#function-~zerocf-t)**() =default                                  |
| virtual void | **[ZeroCF](Classes/class_zero_c_f__t.md#function-zerocf)**([DataStore](Classes/class_data_store.md) * ds) =0 |

# ZeroCF_Int

Concrete strategy class for [VM2](Classes/class_v_m2.md) ZeroCF function.

`#include <ZeroCF.hpp>`

Inherits from [ZeroCF_t](Classes/class_zero_c_f__t.md)

## Public Functions

|              |                                                         Name                                                          |
| ------------ | --------------------------------------------------------------------------------------------------------------------- |
| virtual void | **[ZeroCF](Classes/class_zero_c_f___int.md#function-zerocf)**([DataStore](Classes/class_data_store.md) * ds) override |

# ZeroCF_Float

Concrete strategy class for [VM1](Classes/class_v_m1.md) ZeroCF function.

`#include <ZeroCF.hpp>`

Inherits from [ZeroCF_t](Classes/class_zero_c_f__t.md)

## Public Functions

|              |                                                          Name                                                           |
| ------------ | ----------------------------------------------------------------------------------------------------------------------- |
| virtual void | **[ZeroCF](Classes/class_zero_c_f___float.md#function-zerocf)**([DataStore](Classes/class_data_store.md) * ds) override |

# StorePrice_t

Abstract strategy class for StorePrice function.

`#include <StorePrice.hpp>`

Inherited by [StorePrice_Float](Classes/class_store_price___float.md), [StorePrice_Int](Classes/class_store_price___int.md)

## Public Functions

|              |                                                          Name                                                           |
| ------------ | ----------------------------------------------------------------------------------------------------------------------- |
| virtual      | **[~StorePrice_t](Classes/class_store_price__t.md#function-~storeprice-t)**() =default                                  |
| virtual void | **[StorePrice](Classes/class_store_price__t.md#function-storeprice)**([DataStore](Classes/class_data_store.md) * ds) =0 |

# StorePrice_Int

Concrete strategy class for StorePrice function.

`#include <StorePrice.hpp>`

Inherits from [StorePrice_t](Classes/class_store_price__t.md)

## Public Functions

|              |                                                               Name                                                               |
| ------------ | -------------------------------------------------------------------------------------------------------------------------------- |
| virtual void | **[StorePrice](Classes/class_store_price___int.md#function-storeprice)**([DataStore](Classes/class_data_store.md) * ds) override |

# StorePrice_Float

Concrete strategy class for [VM1]() and [VM2]() StorePrice function.

`#include <StorePrice.hpp>`

Inherits from [StorePrice_t](Classes/class_store_price__t.md)

## Public Functions

|              |                                                                Name                                                                |
| ------------ | ---------------------------------------------------------------------------------------------------------------------------------- |
| virtual void | **[StorePrice](Classes/class_store_price___float.md#function-storeprice)**([DataStore](Classes/class_data_store.md) * ds) override |

**State Pattern**

# MDA

Model Driven Architecture class This servers as the connection between VM and states.

`#include <MDA.hpp>`

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[MDA](Classes/class_m_d_a.md#function-mda)**([OP](Classes/class_o_p.md) * op)<br>Construct a new [MDA](Classes/class_m_d_a.md) object.  |
| virtual | **[~MDA](Classes/class_m_d_a.md#function-~mda)**()<br>Destroy the [MDA](Classes/class_m_d_a.md) object.  |
| void | **[change_state](Classes/class_m_d_a.md#function-change-state)**(state_e stateID)<br>Changes state for this [MDA](Classes/class_m_d_a.md).  |
| void | **[create](Classes/class_m_d_a.md#function-create)**()<br>Call the equivalent create function on the current state.  |
| void | **[insert_cups](Classes/class_m_d_a.md#function-insert-cups)**(int n)<br>Call the equivalent insert_cups function on the current state.  |
| void | **[coin](Classes/class_m_d_a.md#function-coin)**(int f)<br>Call the equivalent coin function on the current state.  |
| void | **[card](Classes/class_m_d_a.md#function-card)**()<br>Call the equivalent card function on the current state.  |
| void | **[cancel](Classes/class_m_d_a.md#function-cancel)**()<br>Call the equivalent cancel function on the current state.  |
| void | **[set_price](Classes/class_m_d_a.md#function-set-price)**()<br>Call the equivalent set_price function on the current state.  |
| void | **[dispose_drink](Classes/class_m_d_a.md#function-dispose-drink)**(int d)<br>Call the equivalent dispose_drink function on the current state.  |
| void | **[additive](Classes/class_m_d_a.md#function-additive)**(int d)<br>Call the equivalent additive function on the current state.  |*

# State_t

Inherited by [CoinsInserted_s](Classes/class_coins_inserted__s.md), [Create_s](Classes/class_create__s.md), [Idle_s](Classes/class_idle__s.md), [NoCups_s](Classes/class_no_cups__s.md)

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[State_t](Classes/class_state__t.md#function-state-t)**([MDA](Classes/class_m_d_a.md) *mda, [OP](Classes/class_o_p.md)* o, [Context_t](Classes/class_context__t.md) * ctx) |
| virtual | **[~State_t](Classes/class_state__t.md#function-~state-t)**() =default |
| virtual void | **[create](Classes/class_state__t.md#function-create)**()<br>Call the state's create function.  |
| virtual void | **[insert_cups](Classes/class_state__t.md#function-insert-cups)**(int n)<br>Call the state's insert_cups function.  |
| virtual void | **[coin](Classes/class_state__t.md#function-coin)**(int n)<br>Call the state's coin function.  |
| virtual void | **[card](Classes/class_state__t.md#function-card)**()<br>Call the state's card function.  |
| virtual void | **[cancel](Classes/class_state__t.md#function-cancel)**()<br>Call the state's cancel function.  |
| virtual void | **[set_price](Classes/class_state__t.md#function-set-price)**()<br>Call the state's set_price function.  |
| virtual void | **[dispose_drink](Classes/class_state__t.md#function-dispose-drink)**(int d)<br>Call the state's dispose_drink function.  |
| virtual void | **[additive](Classes/class_state__t.md#function-additive)**(int d)<br>Call the state's additive function.  |

# NoCups_s

The NoCups state.

`#include <noCups.hpp>`

Inherits from State_t

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[NoCups_s](Classes/class_no_cups__s.md#function-nocups-s)**([MDA](Classes/class_m_d_a.md) *mda, [OP](Classes/class_o_p.md)* o, [Context_t](Classes/class_context__t.md) * ctx) |
| | **[~NoCups_s](Classes/class_no_cups__s.md#function-~nocups-s)**() override =default |
| void | **[coin](Classes/class_no_cups__s.md#function-coin)**(int n) override<br>Call this state's coin function.  |
| void | **[insert_cups](Classes/class_no_cups__s.md#function-insert-cups)**(int n) override<br>Call this state's insert_cups function.  |

# Idle_s

The Idle state.

`#include <idle.hpp>`

Inherits from State_t

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[Idle_s](Classes/class_idle__s.md#function-idle-s)**([MDA](Classes/class_m_d_a.md) *mda, [OP](Classes/class_o_p.md)* o, [Context_t](Classes/class_context__t.md) * ctx) |
| | **[~Idle_s](Classes/class_idle__s.md#function-~idle-s)**() override =default |
| void | **[coin](Classes/class_idle__s.md#function-coin)**(int f) override<br>Call this state's coin function.  |
| void | **[insert_cups](Classes/class_idle__s.md#function-insert-cups)**(int n) override<br>Call this state's insert_cups function.  |
| void | **[set_price](Classes/class_idle__s.md#function-set-price)**() override<br>Call this state's set_price function.  |
| void | **[card](Classes/class_idle__s.md#function-card)**() override<br>Call this state's card function.  |

# Create_s

The Create state.

`#include <create.hpp>`

Inherits from State_t

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[Create_s](Classes/class_create__s.md#function-create-s)**([MDA](Classes/class_m_d_a.md) *mda, [OP](Classes/class_o_p.md)* o, [Context_t](Classes/class_context__t.md) * ctx) |
| | **[~Create_s](Classes/class_create__s.md#function-~create-s)**() override =default |
| void | **[create](Classes/class_create__s.md#function-create)**() override<br>Call this state's create function.  |

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

# CoinsInserted_s

The CoinsInserted state.

`#include <coinsInserted.hpp>`

Inherits from State_t

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[CoinsInserted_s](Classes/class_coins_inserted__s.md#function-coinsinserted-s)**([MDA](Classes/class_m_d_a.md) *mda, [OP](Classes/class_o_p.md)* o, [Context_t](Classes/class_context__t.md) * ctx) |
| | **[~CoinsInserted_s](Classes/class_coins_inserted__s.md#function-~coinsinserted-s)**() override =default |
| void | **[coin](Classes/class_coins_inserted__s.md#function-coin)**(int f) override<br>Call this state's coin function.  |
| void | **[cancel](Classes/class_coins_inserted__s.md#function-cancel)**() override<br>Call this state's cancel function.  |
| void | **[dispose_drink](Classes/class_coins_inserted__s.md#function-dispose-drink)**(int d) override<br>Call this state's dispose_drink function.  |
| void | **[additive](Classes/class_coins_inserted__s.md#function-additive)**(int d) override<br>Call this state's additive function.  |

# 4 - Sequence Diagrams
