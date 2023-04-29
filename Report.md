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

|                | Name           |
| -------------- | -------------- |
| virtual | **[~IncreaseCF_t](Classes/class_increase_c_f__t.md#function-~increasecf-t)**() =default |
| virtual void | **[IncreaseCF](Classes/class_increase_c_f__t.md#function-increasecf)**([DataStore](Classes/class_data_store.md) * ds) =0 |

## IncreaseCF_Int

Concrete strategy class for [VM2]() IncreaseCF function.

`#include <IncreaseCF.hpp>`

Inherits from [IncreaseCF_t](Classes/class_increase_c_f__t.md)

### Public Functions

|                | Name           |
| -------------- | -------------- |
| virtual void | **[IncreaseCF](Classes/class_increase_c_f___int.md#function-increasecf)**([DataStore](Classes/class_data_store.md) * ds) override |

## IncreaseCF_Float

Concrete strategy class for [VM1]() IncreaseCF function.

`#include <IncreaseCF.hpp>`

Inherits from [IncreaseCF_t](Classes/class_increase_c_f__t.md)

### Public Functions

|                | Name           |
| -------------- | -------------- |
| virtual void | **[IncreaseCF](Classes/class_increase_c_f___float.md#function-increasecf)**([DataStore](Classes/class_data_store.md) * ds) override |

# 4 - Sequence Diagrams
