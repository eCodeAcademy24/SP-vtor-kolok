Еден елемент се заматува ако се најде аритметичка средина на елементот и сите негови соседи. Сосед на еден елемент се
сите елементи кои припаѓаат на матрицата и се околу истиот елемент (хоризонтално, вертикално и дијагонално).

Од стандарден влез се чита матрица од реални броеви (3 < n,m < 50). Прво се читаат бројот на редици и колони на матрицата
и во секој преостанат ред се внесува еден ред од матрицата (види пример).По читањето на матрицата, се внесуваат и 2 пара
координати на матрицата (ред и колона) кои го репрезентираат горниот-лев и долниот-десен елемент од регионот. Потребно е
да генеирате нова матрица во која ќе ги заматите сите елементи кои припаѓаат на регионот.

```C++
Влез:
3 3
1 2 3
4 5 6
7 8 9
0 0
2 2

Излез:
3.00 3.50 4.00
4.50 5.00 5.50
6.00 6.50 7.00
```

```C++
Влез:
3 4
1.00 2.00 3.00 4.00
5.00 6.00 7.00 8.00
9.00 0.00 1.00 2.00
0 1
2 2

Излез:
1.00 4.00 5.00 4.00
5.00 3.78 3.67 8.00
9.00 4.67 4.00 2.00
```