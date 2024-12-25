Од тастатура се внесуваат димензиите на една матрица (m, n <= 100), а потоа и елементите од матрицата.
Да се генерира низа (со најмногу m) така што секој елемент од низата се добива со наоѓање на елементот во секоја
редица од матрицата што е најоддалечен од аритметичката средина во рамки на таа редица. Ако постојат повеќе елементи
што се најоддалечени од аритметичката средина, тогаш се зема предвид првиот. Редоследот на запишување на елементите во
низата одговара на редоследот на редиците.

```C++
Влез:
3 6
1 2 2 3 4 5
1 1 2 2 3 3
1 2 3 4 5 6

Излез:
5 1 1
```

```C++
Влез:
10 10
298  -385  -848  351  750  -381  401  -41  304  -788
-852  731  80  -812  -429  394  -808  -539  -652  385
-791  -439  798  668  968  829  -177  -930  -755  -144
943  -773  -252  -792  48  -732  -273  987  338  305
-121  -792  -345  141  -48  -548  -108  -369  217  -303
-682  981  994  52  212  -333  908  978  410  -872
-442  116  -154  -180  448  -92  167  850  -490  -365
-628  808  260  -154  -744  149  -583  639  192  -620
691  317  439  -58  -392  130  -823  260  -421  243
932  511  -479  895  910  -288  -313  785  957  957
Излез:
-848 731 968 987 -792 -872 850 808 -823 -479
```