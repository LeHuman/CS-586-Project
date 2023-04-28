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

# 4 - Sequence Diagrams
