Да се дефинираат и имплементираат следните функции:

int obratenBroj (int broj) - функција која што прима еден аргумент broj и како резултат го враќа неговиот обратен број.
пример за бројот 1234, функцијата треба да врати резултат 4321.

int sumaNaCifri (int broj) - функција која што прима еден аргумент broj и како резултат ја враќа сумата на цифрите во тој број.
пример за бројот 1234, функцијата треба да врати резултат 10 (1+2+3+4 = 10).

void pecatiVoInterval (int a, int b) - функција што прима два аргументи a и b, но не враќа никаков резултат. Целта на ова функција е само да ги испечати сите броеви во интервалот од а до b (вклучувајќи ги и нив) за коишто важи дека збирот на бројот и неговиот обратен број е делев со сумата на цифрите на овој збир. Да се искористат првите две функции за имплементирање на оваа функција.

```C++
Влез:
10000 20000

Излез:
10009
10011
10017
10019
10023
10029
10035
10039
10047
10049
10053
10059
10071
10089
10101
10107
10115
10119
10123
10125
10131
10139
10143
10155
10161
10179
10203
10209
10215
10229
10233
10239
10247
10251
10263
10269
10279
10287
10295
10299
10305
10307
10311
10319
10323
10327
10331
10341
10359
10371
10395
10407
10409
10411
10413
10419
10429
10431
10439
10449
10459
10467
10471
10479
10500
10502
10503
10509
10512
10519
10521
10524
10530
10539
10549
10555
10569
10570
10572
10574
10593
10599
10602
10609
10611
10614
10620
10626
10629
10631
10633
10659
10669
10695
10699
10701
10704
10710
10719
10743
10748
10749
10758
10760
10780
10788
10791
10800
10802
10809
10823
10839
10857
10860
10899
10914
10929
10956
10969
10984
10988
10989
10998
11001
11007
11009
11013
11019
11025
11029
11037
11039
11043
11049
11061
11079
11091
11097
11105
11109
11113
11115
11121
11129
11133
11145
11151
11169
11193
11199
11205
11219
11223
11229
11237
11241
11253
11259
11269
11277
11285
11289
11295
11297
11301
11309
11313
11317
11321
11331
11349
11361
11385
11393
11399
11401
11403
11409
11419
11421
11429
11439
11449
11457
11461
11469
11493
11495
11498
11502
11509
11511
11514
11520
11529
11539
11545
11559
11560
11562
11564
11583
11589
11592
11596
11599
11601
11604
11610
11616
11619
11621
11623
11649
11659
11685
11689
11690
11691
11694
11697
11700
11709
11733
11738
11739
11748
11750
11770
11778
11781
11790
11799
11813
11829
11847
11850
11889
11904
11919
11946
11959
11974
11978
11979
11988
11997
12003
12009
12015
12019
12027
12029
12033
12039
12051
12069
12081
12087
12091
12099
12103
12105
12111
12119
12123
12135
12141
12159
12183
12189
12195
12199
12209
12213
12219
12227
12231
12243
12249
12259
12267
12275
12279
12285
12287
12291
12299
12303
12307
12311
12321
12339
12351
12375
12383
12389
12393
12399
12409
12411
12419
12429
12439
12447
12451
12459
12483
12485
12488
12501
12504
12510
12519
12529
12535
12549
12550
12552
12554
12573
12579
12582
12586
12589
12591
12594
12600
12606
12609
12611
12613
12639
12649
12675
12679
12680
12681
12684
12687
12690
12699
12723
12728
12729
12738
12740
12760
12768
12771
12780
12789
12803
12819
12837
12840
12879
12890
12897
12909
12936
12949
12964
12968
12969
12978
12987
12991
12996
12999
13005
13009
13017
13019
13023
13029
13041
13059
13071
13077
13081
13089
13095
13101
13109
13113
13125
13131
13149
13173
13179
13185
13189
13197
13199
13203
13209
13217
13221
13233
13239
13249
13257
13265
13269
13275
13277
13281
13289
13291
13293
13301
13311
13329
13341
13365
13373
13379
13383
13389
13401
13409
13419
13429
13437
13441
13449
13473
13475
13478
13491
13500
13509
13519
13525
13539
13540
13542
13544
13563
13569
13572
13576
13579
13581
13584
13590
13599
13601
13603
13629
13639
13665
13669
13670
13671
13674
13677
13680
13689
13713
13718
13719
13728
13730
13750
13758
13761
13770
13779
13794
13797
13809
13827
13830
13869
13880
13887
13896
13897
13899
13926
13939
13954
13958
13959
13968
13977
13981
13986
13989
13994
13995
14007
14009
14013
14019
14031
14049
14061
14067
14071
14079
14085
14091
14098
14099
14103
14115
14121
14139
14163
14169
14175
14179
14187
14189
14193
14199
14207
14211
14223
14229
14239
14247
14255
14259
14265
14267
14271
14279
14281
14283
14295
14299
14301
14319
14331
14355
14363
14369
14373
14379
14391
14395
14409
14419
14427
14431
14439
14463
14465
14468
14481
14499
14509
14515
14529
14530
14532
14534
14553
14559
14562
14566
14569
14571
14574
14580
14589
14619
14629
14655
14659
14660
14661
14664
14667
14670
14679
14695
14697
14703
14708
14709
14718
14720
14740
14748
14751
14760
14769
14784
14787
14796
14799
14817
14820
14859
14870
14877
14886
14887
14889
14891
14895
14916
14929
14944
14948
14949
14958
14967
14971
14976
14979
14984
14985
14994
14995
15003
15009
15021
15039
15051
15057
15061
15069
15075
15081
15088
15089
15093
15105
15111
15129
15153
15159
15165
15169
15177
15179
15183
15189
15198
15201
15213
15219
15229
15237
15245
15249
15255
15257
15261
15269
15271
15273
15285
15289
15291
15309
15321
15345
15353
15359
15363
15369
15381
15385
15393
15399
15409
15417
15421
15429
15453
15455
15458
15471
15489
15498
15505
15519
15520
15522
15524
15543
15549
15552
15556
15559
15561
15564
15570
15579
15597
15609
15619
15645
15649
15650
15651
15654
15657
15660
15669
15685
15687
15696
15699
15708
15710
15730
15738
15741
15750
15759
15774
15777
15786
15789
15795
15807
15810
15849
15860
15867
15876
15877
15879
15881
15885
15891
15894
15906
15919
15934
15938
15939
15948
15957
15961
15966
15969
15974
15975
15984
15985
15993
16011
16029
16041
16047
16051
16059
16065
16071
16078
16079
16083
16091
16101
16119
16143
16149
16155
16159
16167
16169
16173
16179
16188
16191
16199
16203
16209
16219
16227
16235
16239
16245
16247
16251
16259
16261
16263
16275
16279
16281
16299
16311
16335
16343
16349
16353
16359
16371
16375
16383
16389
16398
16399
16407
16411
16419
16443
16445
16448
16461
16479
16488
16491
16509
16510
16512
16514
16533
16539
16542
16546
16549
16551
16554
16560
16569
16587
16593
16596
16599
16609
16635
16639
16640
16641
16644
16647
16650
16659
16675
16677
16686
16689
16695
16700
16720
16728
16731
16740
16749
16764
16767
16776
16779
16785
16794
16797
16800
16839
16850
16857
16866
16867
16869
16871
16875
16881
16884
16893
16895
16896
16899
16909
16924
16928
16929
16938
16947
16951
16956
16959
16964
16965
16974
16975
16983
16992
16995
17001
17019
17031
17037
17041
17049
17055
17061
17068
17069
17073
17081
17091
17109
17133
17139
17145
17149
17157
17159
17163
17169
17178
17181
17189
17199
17209
17217
17225
17229
17235
17237
17241
17249
17251
17253
17265
17269
17271
17289
17298
17301
17325
17333
17339
17343
17349
17361
17365
17373
17379
17388
17389
17397
17401
17409
17433
17435
17438
17451
17469
17478
17481
17500
17502
17504
17523
17529
17532
17536
17539
17541
17544
17550
17559
17577
17583
17586
17589
17595
17625
17629
17630
17631
17634
17637
17640
17649
17665
17667
17676
17679
17685
17694
17710
17718
17721
17730
17739
17754
17757
17766
17769
17775
17784
17787
17793
17829
17840
17847
17856
17857
17859
17861
17865
17871
17874
17883
17885
17886
17889
17890
17892
17914
17918
17919
17928
17937
17941
17946
17949
17954
17955
17964
17965
17973
17982
17985
17991
17997
18009
18021
18027
18031
18039
18045
18051
18058
18059
18063
18071
18081
18099
18123
18129
18135
18139
18147
18149
18153
18159
18168
18171
18179
18189
18198
18199
18207
18215
18219
18225
18227
18231
18239
18241
18243
18255
18259
18261
18279
18288
18315
18323
18329
18333
18339
18351
18355
18363
18369
18378
18379
18387
18423
18425
18428
18441
18459
18468
18471
18495
18513
18519
18522
18526
18529
18531
18534
18540
18549
18567
18573
18576
18579
18585
18594
18599
18615
18619
18620
18621
18624
18627
18630
18639
18655
18657
18666
18669
18675
18684
18690
18693
18700
18708
18711
18720
18729
18744
18747
18756
18759
18765
18774
18777
18783
18792
18819
18830
18837
18846
18847
18849
18851
18855
18861
18864
18873
18875
18876
18879
18880
18882
18891
18904
18908
18909
18918
18927
18931
18936
18939
18944
18945
18954
18955
18963
18972
18975
18981
18987
18990
19011
19017
19021
19029
19035
19041
19048
19049
19053
19061
19071
19089
19098
19113
19119
19125
19129
19137
19139
19143
19149
19158
19161
19169
19179
19188
19189
19197
19205
19209
19215
19217
19221
19229
19231
19233
19245
19249
19251
19269
19278
19305
19313
19319
19323
19329
19341
19345
19353
19359
19368
19369
19377
19393
19413
19415
19418
19431
19449
19458
19461
19485
19503
19509
19512
19516
19519
19521
19524
19530
19539
19557
19563
19566
19569
19575
19584
19589
19593
19605
19609
19610
19611
19614
19617
19620
19629
19645
19647
19656
19659
19665
19674
19680
19683
19692
19701
19710
19719
19734
19737
19746
19749
19755
19764
19767
19773
19782
19791
19809
19820
19827
19836
19837
19839
19841
19845
19851
19854
19863
19865
19866
19869
19870
19872
19881
19890
19908
19917
19921
19926
19929
19934
19935
19944
19945
19953
19962
19965
19971
19977
19980
```