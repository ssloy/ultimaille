#include <catch2/catch.hpp>

#include <iostream>
#include <fstream>
#include <cstring>
#include <ultimaille/all.h>

using namespace UM;

extern const std::string vtk_str;

TEST_CASE("VTK + attributes IO test", "[VTK]") {
    static const std::string filename[2] = { "ultimaille-test-hexme-in.vtk", "ultimaille-test-hexme-out.vtk" };
    std::ofstream ofs(filename[0], std::ios::binary);
    ofs << vtk_str;
    ofs.close();

    /*
    Tetrahedra m[2] = {};
    for (int i : range(2)) {
        read_by_extension(filename[i], m[i]);

        REQUIRE( m[i].nverts()==4 );
        REQUIRE( m[i].ncells()==1 );
        CHECK( std::abs(m[i].util.cell_volume(0)-1./6.)<ftol );
        if (!i)
            write_by_extension(filename[1], m[0]);
    }
    */
}

const std::string vtk_str =
R"(# vtk DataFile Version 2.0
s01o_cube, Created by Gmsh 4.9.0-git-8578dea57 
ASCII
DATASET UNSTRUCTURED_GRID
POINTS 263 double
-0.9559 0.9350 1.3256
-0.0981 0.7647 1.8105
-0.4428 1.2743 0.5371
0.4149 1.1040 1.0220
-0.4126 0.3492 0.1587
0.4451 0.1788 0.6436
-0.9257 0.0099 0.9471
-0.0679 -0.1604 1.4320
-0.7843 0.9010 1.4225
-0.6128 0.8669 1.5195
-0.4412 0.8328 1.6165
-0.2696 0.7988 1.7135
-0.2713 1.2402 0.6341
-0.0997 1.2062 0.7311
0.0717 1.1721 0.8280
0.2433 1.1380 0.9250
-0.8533 1.0029 1.1679
-0.7507 1.0707 1.0102
-0.6481 1.1386 0.8525
-0.5455 1.2064 0.6948
0.0044 0.8325 1.6528
0.1070 0.9004 1.4951
0.2097 0.9682 1.3374
0.3123 1.0361 1.1797
-0.2411 0.3151 0.2557
-0.0695 0.2810 0.3526
0.1020 0.2470 0.4496
0.2735 0.2129 0.5466
-0.4368 1.0893 0.4614
-0.4308 0.9042 0.3857
-0.4247 0.7192 0.3100
-0.4187 0.5342 0.2344
0.4209 0.9189 0.9463
0.4270 0.7339 0.8706
0.4330 0.5489 0.7949
0.4390 0.3638 0.7193
-0.7541 -0.0241 1.0441
-0.5826 -0.0581 1.1411
-0.4110 -0.0922 1.2381
-0.2394 -0.1263 1.3351
-0.5153 0.2813 0.3164
-0.6179 0.2134 0.4741
-0.7205 0.1456 0.6318
-0.8231 0.0777 0.7894
0.3425 0.1110 0.8013
0.2399 0.0431 0.9590
0.1372 -0.0246 1.1166
0.0346 -0.0925 1.2743
-0.9317 0.1949 1.0228
-0.9378 0.3799 1.0985
-0.9438 0.5650 1.1742
-0.9499 0.7500 1.2499
-0.0739 0.0246 1.5077
-0.0800 0.2096 1.5834
-0.0860 0.3946 1.6591
-0.0920 0.5797 1.7348
-0.2705 1.0195 1.1738
0.0207 1.0554 1.1093
-0.3437 1.1278 0.9032
-0.5618 0.9836 1.2383
-0.1972 0.9112 1.4444
-0.5191 1.0734 1.0221
-0.4312 0.9208 1.4022
-0.0218 0.9656 1.3255
-0.1097 1.1182 0.9453
0.1909 1.0764 1.0716
-0.1539 0.8472 1.6042
-0.3861 1.1905 0.7465
-0.7319 0.9626 1.2760
-0.1218 1.0207 1.1827
-0.2787 0.9631 1.3109
-0.4186 1.0185 1.1644
-0.2743 1.0716 1.0460
-0.2986 0.8622 1.5562
-0.2421 1.1766 0.7920
0.0834 1.1120 0.9759
-0.4885 1.1473 0.8438
-0.6834 1.0187 1.1429
-0.6244 0.9270 1.3717
-0.0522 0.8914 1.5044
0.1423 1.0203 1.2047
0.0087 0.7243 0.5944
0.1806 0.5024 0.6107
0.1769 0.8870 0.7738
-0.1584 0.5725 0.4202
-0.1875 0.9593 0.5677
0.0135 0.4322 0.4717
-0.0077 0.9996 0.7020
0.2560 0.6838 0.7378
-0.2511 0.7873 0.4523
-0.2744 0.4753 0.3029
-0.2945 1.0913 0.5549
0.2808 0.9817 0.8822
0.2967 0.3619 0.6258
0.1145 0.6583 0.6347
-0.1048 0.7004 0.5102
-0.0785 0.8332 0.5844
-0.1642 1.0953 0.6414
-0.1435 0.4177 0.3633
0.1732 0.3513 0.5409
0.1444 1.0341 0.8159
-0.3201 0.9663 0.4844
0.3114 0.8381 0.8403
-0.3055 0.6177 0.3440
0.3211 0.4922 0.6977
0.0763 0.8065 0.6737
0.0137 0.5948 0.5419
-0.2403 0.0944 0.7954
-0.3135 0.2026 0.5248
0.0510 0.1302 0.7308
-0.1670 -0.0138 1.0659
-0.5316 0.0585 0.8599
-0.3833 -0.0078 1.0338
-0.0972 0.1966 0.5569
-0.4995 0.1413 0.6599
0.0189 0.0474 0.9308
-0.3585 0.2691 0.3586
-0.7002 0.0377 0.8972
0.2259 0.1518 0.6921
-0.1246 -0.0765 1.2226
-0.1130 0.1272 0.7253
-0.3676 0.0615 0.8654
-0.1785 0.0494 0.9103
-0.3020 0.1393 0.6804
-0.5904 0.0012 0.9952
-0.4609 0.2216 0.4667
-0.2160 0.2529 0.4097
-0.2651 -0.0633 1.1791
0.1756 0.0967 0.8228
-0.0201 -0.0320 1.1221
-0.6550 0.0921 0.7676
0.1110 0.1877 0.5952
-0.5094 0.3924 1.3827
-0.7006 0.6201 1.3562
-0.3327 0.1742 1.4037
-0.3421 0.5393 1.5547
-0.6878 0.2269 1.1953
-0.5130 0.1176 1.2620
-0.5208 0.6603 1.4905
-0.2396 0.3362 1.5340
-0.7684 0.4452 1.2368
-0.7896 0.1340 1.0891
-0.2364 0.6386 1.6662
-0.8121 0.7576 1.3428
-0.2162 0.0226 1.4142
-0.4670 0.5028 1.4577
-0.4639 0.2623 1.3563
-0.6024 0.3344 1.2972
-0.3425 0.0191 1.3306
-0.6773 0.7561 1.4299
-0.6654 0.0792 1.1463
-0.3620 0.6939 1.6083
-0.8230 0.2762 1.1285
-0.1913 0.1567 1.4882
-0.8309 0.6160 1.2696
-0.1992 0.4977 1.6298
-0.5948 0.4925 1.3702
-0.3924 0.3679 1.4482
-0.6843 0.6421 0.7421
-0.7869 0.3734 0.8293
-0.7997 0.7666 0.9901
-0.5688 0.5176 0.4942
-0.5817 0.9108 0.6550
-0.6806 0.3647 0.6382
-0.6879 0.9195 0.8460
-0.5321 0.7330 0.5048
-0.8365 0.5512 0.9795
-0.5020 0.4455 0.3506
-0.8450 0.2211 0.8786
-0.8690 0.8413 1.1390
-0.5223 1.0663 0.6045
-0.6446 0.5439 0.6374
-0.6266 0.7516 0.6786
-0.7272 0.7246 0.8471
-0.7420 0.5326 0.8058
-0.7696 0.2383 0.7512
-0.5769 0.3645 0.4547
-0.5007 0.9407 0.5223
-0.8798 0.6948 1.1065
-0.7921 0.9202 1.0306
-0.8676 0.3441 0.9617
-0.4893 0.5899 0.3788
-0.5971 1.0483 0.7306
0.1735 0.4718 1.2270
0.0580 0.5963 1.4750
0.2761 0.7404 1.1399
0.2889 0.3473 0.9791
0.0708 0.2031 1.3141
0.1592 0.7422 1.3472
0.3250 0.5818 0.9975
0.0219 0.3618 1.4565
0.1877 0.2014 1.1068
-0.0112 0.6710 1.6239
0.3557 0.2752 0.8355
0.3391 0.9054 1.0864
0.0114 0.0475 1.3646
0.2431 0.4520 1.0968
0.2049 0.6168 1.2224
0.1039 0.4909 1.3568
0.1389 0.3389 1.2414
0.0884 0.0669 1.2353
0.2593 0.8785 1.2181
0.3683 0.4234 0.8652
0.0635 0.7485 1.5188
0.3576 0.7761 1.0081
0.2829 0.1956 0.9363
-0.0218 0.5207 1.5899
-0.0099 0.1693 1.4453
-0.0149 0.1992 1.1371
-0.3883 0.2298 1.1352
-0.4880 0.2557 0.9409
0.1382 0.8789 0.9713
-0.1473 0.3927 1.3248
-0.2404 0.1310 1.1740
-0.2430 0.9840 0.7710
-0.4818 0.5558 0.7137
-0.4159 0.8246 0.7628
-0.3314 0.6570 0.6754
-0.0827 0.3852 0.6642
-0.3689 0.4628 0.5901
-0.5144 0.4299 0.9414
-0.4790 0.5837 0.9814
-0.5251 0.8512 0.9818
-0.6669 0.7528 1.2093
-0.5059 0.4447 1.1507
-0.6559 0.5004 1.0538
-0.6701 0.2649 0.9497
-0.1149 0.9055 0.8720
-0.1876 0.8144 1.0828
-0.1960 0.7083 0.9330
-0.3694 0.8065 1.0513
-0.3282 0.9152 0.9167
-0.5147 0.6366 1.1672
-0.3224 0.6269 1.1261
-0.1344 0.2426 0.8594
-0.3207 0.2341 0.9021
0.0460 0.7286 1.0742
-0.2823 0.5487 1.3286
-0.1600 0.6798 1.4209
-0.4250 0.6361 0.8395
0.0072 0.2531 0.9647
-0.2322 0.3767 0.7738
-0.2894 0.3894 1.2183
0.1349 0.5766 0.8882
-0.0029 0.7555 0.9172
-0.4354 0.3724 0.7904
0.0165 0.4506 1.0924
-0.1243 0.5452 0.6373
-0.0482 0.5509 0.8403
-0.1735 0.7764 0.7337
-0.1415 0.6097 1.2248
0.1070 0.4063 0.8224
-0.0877 0.4139 0.9337
-0.3443 0.4019 1.0049
-0.6243 0.6931 1.0462
-0.4485 0.5456 1.2732
-0.2929 0.7720 1.3008
-0.3198 0.5487 0.9379
-0.2581 0.5260 0.7682
-0.4303 0.9977 0.7769
-0.1188 0.1382 1.2935
-0.1886 0.2520 1.0788
-0.1618 0.5532 1.0574

CELLS 1366 6274
1 0
1 1
1 2
1 3
1 4
1 5
1 6
1 7
2 0 8
2 8 9
2 9 10
2 10 11
2 11 1
2 2 12
2 12 13
2 13 14
2 14 15
2 15 3
2 0 16
2 16 17
2 17 18
2 18 19
2 19 2
2 1 20
2 20 21
2 21 22
2 22 23
2 23 3
2 4 24
2 24 25
2 25 26
2 26 27
2 27 5
2 2 28
2 28 29
2 29 30
2 30 31
2 31 4
2 3 32
2 32 33
2 33 34
2 34 35
2 35 5
2 6 36
2 36 37
2 37 38
2 38 39
2 39 7
2 4 40
2 40 41
2 41 42
2 42 43
2 43 6
2 5 44
2 44 45
2 45 46
2 46 47
2 47 7
2 6 48
2 48 49
2 49 50
2 50 51
2 51 0
2 7 52
2 52 53
2 53 54
2 54 55
2 55 1
3 63 70 60
3 62 71 59
3 69 70 63
3 61 72 58
3 70 71 62
3 64 72 69
3 64 69 57
3 71 72 61
3 13 64 14
3 10 62 9
3 17 61 18
3 22 63 21
3 3 65 23
3 15 65 3
3 8 68 0
3 2 67 12
3 19 67 2
3 0 68 16
3 20 66 1
3 1 66 11
3 13 74 64
3 61 76 18
3 64 74 58
3 62 73 60
3 58 76 61
3 61 77 59
3 63 80 57
3 62 78 9
3 64 75 14
3 10 73 62
3 17 77 61
3 22 80 63
3 59 78 62
3 60 79 63
3 63 79 21
3 57 75 64
3 69 72 56
3 56 70 69
3 60 70 62
3 58 72 64
3 59 71 61
3 57 69 63
3 56 71 70
3 56 72 71
3 11 73 10
3 14 75 15
3 16 77 17
3 9 78 8
3 23 80 22
3 12 74 13
3 18 76 19
3 21 79 20
3 15 75 65
3 20 79 66
3 8 78 68
3 19 76 67
3 66 73 11
3 67 74 12
3 65 80 23
3 68 77 16
3 58 74 67
3 67 76 58
3 59 77 68
3 57 80 65
3 65 75 57
3 68 78 59
3 66 79 60
3 60 73 66
3 85 96 89
3 89 96 95
3 25 86 26
3 14 87 13
3 29 89 30
3 34 88 33
3 88 105 83
3 84 106 86
3 94 105 88
3 95 106 84
3 3 92 15
3 32 92 3
3 2 91 28
3 4 90 24
3 31 90 4
3 12 91 2
3 27 93 5
3 5 93 35
3 86 106 82
3 86 99 26
3 82 99 86
3 88 104 82
3 87 100 83
3 86 98 84
3 85 97 87
3 25 98 86
3 89 101 85
3 87 97 13
3 89 103 30
3 83 102 88
3 84 103 89
3 29 101 89
3 14 100 87
3 88 102 33
3 34 104 88
3 83 105 87
3 82 94 88
3 87 96 85
3 89 95 84
3 95 96 81
3 15 100 14
3 24 98 25
3 28 101 29
3 30 103 31
3 33 102 32
3 13 97 12
3 26 99 27
3 35 104 34
3 81 105 94
3 82 106 94
3 87 105 96
3 81 106 95
3 92 100 15
3 32 102 92
3 91 101 28
3 90 98 24
3 31 103 90
3 27 99 93
3 93 104 35
3 12 97 91
3 92 102 83
3 82 104 93
3 84 98 90
3 93 99 82
3 83 100 92
3 90 103 84
3 91 97 85
3 85 101 91
3 96 105 81
3 94 106 81
3 121 122 112
3 112 122 110
3 115 120 109
3 113 123 108
3 120 123 113
3 114 121 111
3 114 123 121
3 115 122 120
3 26 113 25
3 37 112 38
3 46 115 45
3 41 114 42
3 6 117 36
3 24 116 4
3 4 116 40
3 43 117 6
3 44 118 5
3 39 119 7
3 7 119 47
3 5 118 27
3 115 129 110
3 112 124 111
3 113 131 109
3 110 127 112
3 41 125 114
3 114 130 42
3 37 124 112
3 111 130 114
3 26 131 113
3 46 129 115
3 114 125 108
3 108 126 113
3 109 128 115
3 113 126 25
3 112 127 38
3 115 128 45
3 107 122 121
3 109 120 113
3 111 121 112
3 110 122 115
3 107 123 120
3 120 122 107
3 108 123 114
3 121 123 107
3 38 127 39
3 42 130 43
3 27 131 26
3 40 125 41
3 25 126 24
3 36 124 37
3 47 129 46
3 45 128 44
3 117 124 36
3 44 128 118
3 118 131 27
3 24 126 116
3 43 130 117
3 116 125 40
3 39 127 119
3 119 129 47
3 119 127 110
3 111 124 117
3 110 129 119
3 108 125 116
3 116 126 108
3 109 131 118
3 118 128 109
3 117 130 111
3 146 147 137
3 137 147 136
3 38 137 37
3 9 138 10
3 49 140 50
3 54 139 53
3 140 156 133
3 139 157 134
3 147 156 140
3 134 157 146
3 1 142 55
3 11 142 1
3 36 141 6
3 0 143 8
3 6 141 48
3 51 143 0
3 7 144 39
3 52 144 7
3 135 157 139
3 137 150 37
3 138 149 133
3 135 151 138
3 38 148 137
3 137 148 134
3 138 151 10
3 9 149 138
3 139 153 53
3 139 155 135
3 140 152 136
3 49 152 140
3 136 150 137
3 140 154 50
3 133 154 140
3 134 153 139
3 54 155 139
3 133 156 138
3 132 147 146
3 134 146 137
3 138 145 135
3 136 147 140
3 37 150 36
3 39 148 38
3 10 151 11
3 53 153 52
3 48 152 49
3 50 154 51
3 55 155 54
3 8 149 9
3 132 156 147
3 145 157 135
3 138 156 145
3 146 157 132
3 11 151 142
3 144 148 39
3 52 153 144
3 142 155 55
3 143 149 8
3 36 150 141
3 141 152 48
3 51 154 143
3 133 149 143
3 134 148 144
3 143 154 133
3 144 153 134
3 142 151 135
3 136 152 141
3 135 155 142
3 141 150 136
3 145 156 132
3 132 157 145
3 159 174 163
3 163 174 171
3 171 172 165
3 160 173 166
3 161 171 165
3 172 173 164
3 162 172 164
3 173 174 166
3 50 166 49
3 30 165 29
3 42 163 41
3 18 164 17
3 2 170 19
3 40 167 4
3 0 169 51
3 4 167 31
3 28 170 2
3 16 169 0
3 6 168 43
3 48 168 6
3 163 175 159
3 162 177 165
3 42 175 163
3 50 178 166
3 159 180 166
3 160 179 164
3 166 178 160
3 165 181 161
3 163 176 41
3 164 179 17
3 166 180 49
3 161 176 163
3 30 181 165
3 18 182 164
3 164 182 162
3 165 177 29
3 163 171 161
3 165 172 162
3 158 173 172
3 164 173 160
3 158 172 171
3 171 174 158
3 166 174 159
3 158 174 173
3 43 175 42
3 19 182 18
3 31 181 30
3 49 180 48
3 41 176 40
3 51 178 50
3 17 179 16
3 29 177 28
3 167 181 31
3 169 178 51
3 40 176 167
3 48 180 168
3 170 182 19
3 168 175 43
3 28 177 170
3 16 179 169
3 160 178 169
3 169 179 160
3 170 177 162
3 162 182 170
3 159 175 168
3 168 180 159
3 167 176 161
3 161 181 167
3 189 185 197
3 198 190 199
3 191 186 196
3 197 188 198
3 191 196 199
3 196 189 197
3 190 187 199
3 188 184 198
3 46 45 191
3 34 33 189
3 54 53 190
3 22 21 188
3 20 1 192
3 32 3 194
3 1 55 192
3 44 5 193
3 3 23 194
3 5 35 193
3 7 47 195
3 52 7 195
3 191 187 200
3 191 45 205
3 189 33 204
3 54 190 206
3 185 189 204
3 22 188 201
3 34 189 202
3 190 53 207
3 189 186 202
3 186 191 205
3 187 190 207
3 46 191 200
3 188 185 201
3 190 184 206
3 188 21 203
3 184 188 203
3 184 190 198
3 183 196 197
3 186 189 196
3 183 197 198
3 185 188 197
3 187 191 199
3 183 198 199
3 196 183 199
3 23 22 201
3 35 34 202
3 45 44 205
3 47 46 200
3 33 32 204
3 55 54 206
3 21 20 203
3 53 52 207
3 195 47 200
3 44 193 205
3 52 195 207
3 20 192 203
3 32 194 204
3 192 55 206
3 194 23 201
3 193 35 202
3 192 184 203
3 195 187 207
3 186 193 202
3 187 195 200
3 193 186 205
3 185 194 201
3 194 185 204
3 184 192 206
4 208 46 200 129
4 209 150 210 124
4 211 83 102 88
4 212 134 139 157
4 213 110 127 112
4 214 91 85 101
4 102 32 204 33
4 143 8 78 68
4 215 172 216 217
4 211 100 92 83
4 218 108 219 126
4 158 174 220 221
4 222 17 77 61
4 223 160 169 179
4 212 206 139 190
4 224 225 226 136
4 227 75 100 64
4 65 92 75 15
4 212 139 153 190
4 228 229 230 231
4 221 230 232 233
4 224 226 210 136
4 234 235 107 122
4 236 188 80 63
4 237 157 139 135
4 238 63 60 79
4 49 166 50 140
4 239 215 216 217
4 211 80 236 201
4 223 77 179 68
4 240 115 109 128
4 142 66 1 192
4 225 133 232 223
4 107 241 120 123
4 36 6 141 117
4 237 139 212 155
4 226 124 150 117
4 220 239 158 221
4 215 172 217 165
4 226 130 111 117
4 228 236 211 57
4 224 146 242 132
4 228 236 57 69
4 211 83 243 244
4 226 159 168 180
4 210 226 130 111
4 212 184 206 190
4 154 178 166 50
4 213 137 209 112
4 239 245 220 215
4 215 163 171 161
4 211 201 236 185
4 246 197 183 196
4 247 248 82 94
4 215 161 171 165
4 239 249 216 229
4 102 204 189 33
4 249 87 227 105
4 250 183 246 197
4 246 243 196 251
4 215 163 219 245
4 211 65 80 201
4 252 248 243 251
4 206 155 139 54
4 241 123 245 108
4 227 72 69 64
4 252 234 241 218
4 220 221 224 253
4 213 148 137 112
4 254 221 174 173
4 235 114 210 245
4 235 121 114 123
4 223 178 154 143
4 238 73 142 66
4 139 190 54 53
4 242 255 132 157
4 238 66 142 192
4 245 130 226 175
4 224 146 132 147
4 231 216 249 229
4 245 108 123 114
4 232 59 223 62
4 256 151 237 238
4 223 179 169 68
4 130 117 168 43
4 252 257 248 258
4 210 114 121 111
4 259 164 222 61
4 212 190 199 198
4 224 221 232 233
4 250 238 237 212
4 216 177 89 165
4 239 220 245 257
4 30 165 181 103
4 236 80 57 63
4 211 204 102 92
4 230 72 231 71
4 237 145 255 157
4 243 88 189 34
4 249 105 81 96
4 14 100 75 64
4 212 153 139 134
4 102 33 189 88
4 256 138 151 73
4 42 175 130 114
4 259 170 101 177
4 231 214 72 64
4 51 154 50 178
4 227 87 100 83
4 216 172 162 165
4 127 38 148 112
4 211 194 185 204
4 224 232 255 233
4 251 186 193 202
4 239 230 221 257
4 240 128 251 205
4 14 87 100 64
4 215 219 163 161
4 220 226 159 175
4 214 58 74 67
4 253 257 221 233
4 211 92 102 83
4 210 226 245 130
4 210 130 114 111
4 239 172 158 173
4 208 260 200 187
4 90 98 126 24
4 237 135 238 151
4 125 167 40 176
4 236 63 57 69
4 48 152 168 180
4 240 45 191 115
4 37 124 137 112
4 37 112 137 38
4 246 243 248 236
4 223 169 160 178
4 105 248 244 249
4 219 116 125 167
4 219 125 116 108
4 208 46 129 115
4 143 0 8 68
4 223 62 59 78
4 237 135 151 138
4 259 164 182 162
4 243 186 202 189
4 241 113 123 108
4 208 212 246 261
4 116 4 90 24
4 219 126 116 90
4 224 242 253 233
4 219 116 126 108
4 260 129 195 119
4 238 60 73 66
4 242 132 146 157
4 214 58 72 64
4 92 100 75 15
4 139 153 190 53
4 246 212 199 198
4 250 246 198 212
4 252 248 241 258
4 143 149 78 8
4 9 78 62 149
4 239 221 220 257
4 150 137 37 124
4 240 128 45 115
4 228 250 262 236
4 129 213 119 260
4 226 124 117 111
4 130 43 168 175
4 243 189 197 196
4 42 114 163 175
4 228 227 231 72
4 206 54 139 190
4 228 262 250 233
4 259 67 170 19
4 226 180 168 152
4 144 213 148 134
4 39 119 127 144
4 228 230 56 72
4 239 221 254 173
4 254 154 225 223
4 260 127 119 144
4 220 239 215 158
4 241 218 113 108
4 256 237 151 138
4 241 245 219 108
4 211 227 57 75
4 241 257 258 245
4 203 21 188 79
4 208 110 115 129
4 252 218 248 251
4 209 242 146 134
4 254 174 225 166
4 220 163 159 174
4 245 114 163 176
4 262 244 229 236
4 42 130 175 43
4 226 136 152 141
4 218 251 99 82
4 259 91 214 101
4 247 248 94 81
4 222 61 59 71
4 213 110 208 129
4 259 67 214 91
4 230 222 223 59
4 39 7 119 144
4 39 127 148 144
4 211 92 194 204
4 221 158 174 173
4 142 1 66 11
4 239 258 215 217
4 65 23 194 3
4 223 143 154 133
4 91 67 12 2
4 249 105 227 244
4 29 165 30 89
4 259 67 91 170
4 246 191 240 186
4 208 212 260 187
4 83 243 105 88
4 217 95 84 89
4 170 101 177 28
4 214 87 13 64
4 91 28 170 2
4 181 31 103 90
4 211 227 75 100
4 133 255 156 224
4 247 258 217 219
4 168 43 117 6
4 249 258 248 229
4 80 188 201 22
4 92 32 194 204
4 249 217 216 89
4 240 251 186 205
4 14 75 100 15
4 197 243 246 236
4 259 170 182 19
4 216 89 217 165
4 247 84 86 98
4 251 128 109 118
4 193 93 202 35
4 234 240 261 122
4 193 44 128 118
4 259 76 164 61
4 232 62 223 138
4 216 85 89 101
4 211 65 201 194
4 241 107 235 123
4 170 19 67 2
4 249 216 85 89
4 259 164 216 222
4 231 249 214 227
4 18 164 182 76
4 48 168 152 141
4 212 199 190 187
4 256 70 63 69
4 239 172 215 158
4 245 114 130 175
4 218 99 86 82
4 240 186 191 205
4 251 118 109 131
4 86 98 25 113
4 105 248 94 243
4 77 16 17 179
4 247 219 84 98
4 225 154 140 133
4 256 73 62 138
4 251 93 99 82
4 25 98 126 113
4 238 79 60 66
4 228 244 229 227
4 250 198 246 183
4 208 46 191 200
4 234 122 120 115
4 142 55 192 1
4 256 151 238 73
4 9 62 138 149
4 10 138 62 73
4 66 1 192 20
4 9 8 78 149
4 247 82 248 218
4 203 20 66 192
4 224 255 242 233
4 239 216 215 172
4 238 203 188 79
4 238 155 206 142
4 207 190 153 53
4 27 93 99 118
4 235 121 107 122
4 259 170 91 101
4 142 206 55 155
4 249 85 87 96
4 125 41 176 40
4 116 90 126 24
4 173 216 172 164
4 243 236 185 204
4 27 5 93 118
4 225 174 159 166
4 226 150 136 141
4 251 193 186 205
4 185 243 197 236
4 82 248 251 243
4 77 16 179 68
4 18 61 17 164
4 151 73 10 11
4 254 160 166 178
4 137 112 148 38
4 247 218 219 98
4 48 180 49 152
4 251 202 93 104
4 239 158 221 173
4 169 16 0 68
4 246 199 183 198
4 259 58 67 76
4 169 0 143 68
4 223 77 222 179
4 223 62 149 138
4 51 178 169 143
4 150 37 36 124
4 239 229 230 257
4 215 219 161 165
4 231 239 230 222
4 254 173 174 166
4 133 225 224 140
4 225 226 136 152
4 86 25 26 113
4 25 24 126 98
4 259 214 231 216
4 144 213 134 260
4 212 139 206 155
4 240 191 45 205
4 213 122 235 261
4 208 200 260 129
4 260 153 212 134
4 208 261 246 240
4 212 153 207 190
4 228 250 256 233
4 208 199 212 187
4 251 193 128 118
4 218 86 106 82
4 189 33 34 88
4 259 231 58 61
4 214 13 87 97
4 215 217 258 219
4 218 108 126 113
4 220 226 175 245
4 242 233 250 262
4 232 223 133 138
4 242 246 212 261
4 47 195 200 129
4 252 257 262 248
4 243 186 189 196
4 214 85 91 97
4 252 241 253 257
4 254 166 225 178
4 91 170 67 2
4 47 119 195 129
4 51 143 169 0
4 154 50 166 140
4 238 188 203 184
4 51 143 154 178
4 249 239 217 258
4 223 149 62 78
4 242 250 237 212
4 219 165 181 161
4 243 186 251 202
4 259 216 231 222
4 29 165 89 177
4 219 245 114 108
4 252 234 218 251
4 221 257 230 233
4 216 164 162 172
4 18 19 76 182
4 219 114 125 108
4 118 99 251 93
4 175 163 220 245
4 213 208 260 129
4 225 136 140 152
4 208 110 122 115
4 158 174 215 220
4 212 190 207 187
4 259 182 76 19
4 29 89 101 177
4 30 103 89 165
4 167 31 181 90
4 239 257 258 229
4 203 20 21 79
4 203 79 66 20
4 245 175 163 114
4 210 130 245 114
4 65 194 92 3
4 14 13 87 64
4 216 217 172 165
4 236 80 188 201
4 228 69 56 70
4 208 187 191 199
4 209 136 210 150
4 238 151 142 73
4 207 53 153 52
4 193 205 128 44
4 193 93 5 118
4 243 202 104 34
4 191 115 45 46
4 30 103 181 31
4 215 217 219 165
4 215 172 165 171
4 259 216 164 162
4 169 179 16 68
4 225 223 154 133
4 222 164 160 179
4 225 140 154 166
4 214 85 216 101
4 226 175 130 168
4 226 168 130 117
4 168 117 141 6
4 243 185 189 204
4 226 141 168 117
4 219 167 125 176
4 256 73 238 60
4 231 72 61 71
4 220 221 253 257
4 239 258 257 245
4 91 101 170 28
4 259 58 76 61
4 209 137 146 147
4 225 166 154 178
4 222 61 77 59
4 102 32 92 204
4 225 152 49 180
4 218 113 109 120
4 45 44 128 205
4 193 35 5 93
4 92 194 32 3
4 65 92 15 3
4 231 249 227 229
4 240 45 128 205
4 219 126 90 98
4 219 90 181 103
4 118 99 131 251
4 86 113 26 131
4 27 99 131 118
4 208 261 260 212
4 227 83 105 87
4 238 206 184 192
4 150 124 36 117
4 248 243 244 236
4 222 164 17 61
4 256 232 255 138
4 223 149 133 138
4 167 4 116 40
4 125 40 167 116
4 219 116 167 90
4 219 90 167 181
4 125 114 176 41
4 167 31 90 4
4 167 90 116 4
4 193 5 44 118
4 211 185 236 204
4 65 201 194 23
4 227 83 244 105
4 238 203 66 192
4 80 63 188 22
4 216 89 177 101
4 216 162 177 165
4 74 13 97 12
4 259 101 214 216
4 247 84 95 106
4 237 157 212 139
4 251 202 193 93
4 86 26 99 131
4 228 57 227 69
4 18 61 164 76
4 247 106 95 81
4 246 248 262 236
4 219 181 167 161
4 262 244 248 229
4 247 94 106 81
4 249 229 248 244
4 222 179 77 17
4 63 79 188 21
4 63 21 188 22
4 241 107 234 235
4 247 95 249 81
4 208 199 246 212
4 29 177 101 28
4 242 212 246 262
4 10 138 9 62
4 249 81 95 96
4 142 66 73 11
4 212 198 184 190
4 238 66 203 79
4 241 247 258 248
4 243 251 186 196
4 251 93 193 118
4 202 35 93 104
4 252 253 241 235
4 202 35 104 34
4 225 49 152 140
4 185 243 189 197
4 226 159 175 168
4 211 236 243 204
4 240 109 251 128
4 238 142 206 192
4 80 201 65 23
4 80 22 201 23
4 91 74 97 12
4 91 67 74 12
4 231 72 227 64
4 231 72 58 61
4 230 232 256 59
4 226 117 150 141
4 256 238 250 63
4 254 174 221 225
4 234 261 235 122
4 114 219 125 176
4 256 60 238 63
4 251 193 205 128
4 219 176 245 163
4 260 200 195 129
4 151 142 73 11
4 151 138 10 73
4 237 135 145 157
4 238 184 203 192
4 208 200 191 187
4 254 154 223 178
4 252 241 234 235
4 251 104 93 82
4 235 210 121 112
4 227 69 57 64
4 27 131 99 26
4 7 195 144 52
4 7 144 195 119
4 243 104 88 34
4 224 146 209 242
4 249 96 89 85
4 222 179 17 164
4 231 216 214 249
4 260 207 212 153
4 163 41 176 114
4 42 41 163 114
4 228 256 230 233
4 211 57 236 80
4 228 227 72 69
4 237 255 145 138
4 211 243 102 204
4 211 244 243 236
4 47 119 7 195
4 260 144 153 134
4 230 70 56 71
4 219 176 163 161
4 39 148 127 38
4 228 256 69 70
4 247 106 86 84
4 48 168 141 6
4 150 36 141 117
4 219 167 176 161
4 223 143 169 178
4 175 163 159 220
4 226 152 168 141
4 227 57 75 64
4 228 227 211 244
4 243 189 202 34
4 211 201 185 194
4 219 90 84 98
4 114 219 176 245
4 47 200 46 129
4 142 206 192 55
4 206 55 155 54
4 219 103 84 90
4 242 262 246 261
4 210 136 226 150
4 137 213 209 134
4 211 102 243 88
4 210 121 112 111
4 224 209 146 147
4 236 188 185 201
4 224 210 209 136
4 210 124 226 111
4 210 112 124 111
4 210 150 226 124
4 209 136 150 137
4 209 137 150 124
4 252 235 234 261
4 228 229 262 233
4 241 120 123 113
4 252 241 248 218
4 241 235 245 123
4 246 191 186 196
4 241 253 257 245
4 218 251 131 99
4 218 131 86 99
4 218 131 251 109
4 218 131 109 113
4 247 249 248 81
4 247 241 219 218
4 218 126 219 98
4 218 126 98 113
4 218 86 131 113
4 218 98 86 113
4 213 122 261 110
4 208 240 246 191
4 208 191 46 115
4 208 110 261 122
4 208 122 261 240
4 208 122 240 115
4 235 121 122 112
4 213 235 209 261
4 228 229 244 236
4 238 188 63 79
4 236 197 185 188
4 256 73 60 62
4 70 230 228 256
4 238 206 212 184
4 238 212 206 155
4 238 142 151 135
4 238 142 135 155
4 237 145 135 138
4 214 74 91 67
4 249 87 105 96
4 249 239 258 229
4 227 100 87 64
4 259 182 164 76
4 214 227 249 87
4 224 136 209 147
4 247 82 218 106
4 259 216 162 177
4 214 249 85 87
4 231 227 214 64
4 140 224 147 136
4 228 230 229 233
4 254 225 154 178
4 254 223 222 179
4 211 227 100 83
4 243 189 102 204
4 211 244 227 83
4 247 106 218 86
4 211 243 83 88
4 248 251 218 82
4 105 248 243 244
4 83 243 244 105
4 243 94 105 88
4 82 248 243 94
4 243 94 88 82
4 243 202 251 104
4 243 104 251 82
4 243 104 82 88
4 243 102 189 88
4 211 65 57 80
4 211 57 65 75
4 211 75 92 100
4 211 92 65 194
4 228 57 211 227
4 211 75 65 92
4 259 222 231 61
4 259 58 231 214
4 173 216 164 222
4 222 160 164 173
4 254 223 160 178
4 217 103 219 181
4 217 181 219 165
4 217 103 181 165
4 217 84 219 103
4 217 89 84 103
4 217 165 89 103
4 249 95 89 96
4 249 95 217 89
4 259 58 214 67
4 259 170 162 182
4 259 101 216 177
4 259 162 170 177
4 105 248 249 81
4 259 76 67 19
4 223 169 143 68
4 223 59 222 77
4 223 59 77 68
4 223 143 133 149
4 223 78 143 149
4 223 78 59 68
4 223 143 78 68
4 255 133 156 138
4 224 132 242 255
4 255 232 133 138
4 255 156 145 138
4 230 254 223 222
4 133 225 232 224
4 256 59 62 71
4 230 256 70 71
4 239 216 249 217
4 220 225 174 159
4 237 135 139 155
4 237 238 135 155
4 224 140 156 133
4 237 212 238 155
4 224 253 221 233
4 242 237 255 157
4 140 224 136 225
4 225 180 226 152
4 225 159 226 180
4 225 166 159 180
4 225 180 49 166
4 225 166 49 140
4 253 233 262 257
4 220 226 225 159
4 252 243 246 251
4 234 122 107 120
4 247 84 217 95
4 220 253 245 257
4 234 240 122 115
4 262 248 244 236
4 241 218 120 113
4 248 81 105 94
4 235 114 245 123
4 235 210 114 121
4 235 121 123 107
4 253 233 242 262
4 242 262 250 212
4 247 86 218 98
4 247 248 249 258
4 215 219 258 245
4 239 216 172 173
4 241 235 253 245
4 239 216 231 229
4 247 219 241 258
4 247 217 84 219
4 239 231 230 229
4 215 163 245 174
4 215 171 163 174
4 215 171 158 172
4 215 174 158 171
4 255 157 145 132
4 255 132 145 156
4 220 253 224 210
4 256 60 63 70
4 256 62 232 138
4 256 233 250 237
4 256 59 232 62
4 213 127 148 112
4 242 255 237 233
4 262 229 248 257
4 228 244 211 236
4 250 262 246 212
4 246 186 240 251
4 262 229 257 233
4 208 246 199 191
4 260 212 207 187
4 260 195 200 187
4 260 52 207 153
4 260 52 153 144
4 260 119 195 144
4 260 207 195 187
4 260 195 207 52
4 260 144 195 52
4 248 229 258 257
4 246 186 251 196
4 252 241 257 258
4 242 250 233 237
4 70 230 56 228
4 250 246 236 197
4 224 232 221 225
4 224 209 253 242
4 250 198 183 197
4 228 72 56 69
4 213 242 209 134
4 197 243 196 246
4 208 115 240 191
4 246 199 191 196
4 246 196 183 199
4 234 218 251 109
4 234 251 240 109
4 234 109 240 115
4 234 120 109 115
4 241 219 218 108
4 234 120 218 109
4 250 184 238 212
4 250 184 212 198
4 250 238 188 63
4 250 188 236 63
4 250 188 238 184
4 250 188 184 198
4 250 197 236 188
4 250 197 188 198
4 250 236 246 262
4 239 222 216 173
4 231 61 222 71
4 249 227 229 244
4 214 249 216 85
4 214 97 87 85
4 214 227 87 64
4 214 74 58 64
4 214 97 74 13
4 214 13 74 64
4 214 91 74 97
4 230 56 72 71
4 239 215 258 245
4 230 223 232 59
4 228 229 231 227
4 228 231 230 72
4 231 72 214 58
4 220 215 245 174
4 256 237 250 238
4 256 62 60 70
4 256 255 237 138
4 256 233 255 232
4 256 71 62 70
4 256 233 237 255
4 230 59 256 71
4 230 222 59 71
4 231 239 222 216
4 239 254 222 173
4 230 233 257 229
4 230 233 256 232
4 230 231 222 71
4 254 223 225 232
4 254 160 173 166
4 254 160 223 179
4 220 245 163 174
4 239 221 230 222
4 254 222 160 179
4 254 225 221 232
4 239 222 254 221
4 254 160 222 173
4 254 232 221 230
4 254 230 221 222
4 247 258 249 217
4 230 254 232 223
4 228 262 229 236
4 228 63 250 236
4 228 63 236 69
4 228 63 256 250
4 228 256 63 69
4 242 212 237 157
4 242 212 260 261
4 242 260 212 134
4 209 136 137 147
4 224 253 209 210
4 133 255 224 232
4 242 212 157 134
4 242 157 146 134
4 209 146 137 134
4 213 260 242 134
4 213 122 110 112
4 137 213 134 148
4 213 209 235 112
4 213 235 122 112
4 209 210 235 112
4 209 210 112 124
4 209 112 137 124
4 252 248 246 243
4 253 245 235 210
4 253 262 242 261
4 252 253 262 257
4 253 235 209 210
4 253 209 235 261
4 253 242 209 261
4 224 132 255 156
4 224 132 156 147
4 247 249 95 217
4 224 156 140 147
4 220 226 224 225
4 220 224 226 210
4 220 225 221 174
4 220 225 224 221
4 220 245 253 210
4 220 245 210 226
4 252 262 246 248
4 213 127 260 144
4 213 148 127 144
4 213 119 260 127
4 129 213 110 119
4 213 119 127 110
4 213 208 110 261
4 213 260 208 261
4 213 261 209 242
4 213 261 242 260
4 107 241 234 120
4 241 218 234 120
4 252 253 235 261
4 241 247 248 218
4 247 82 106 94
4 241 258 219 245
4 252 262 253 261
4 252 261 246 262
4 252 246 261 240
4 252 246 240 251
4 252 240 234 251
4 252 261 234 240

CELL_TYPES 1366
1
1
1
1
1
1
1
1
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10

CELL_DATA 1366
SCALARS CellEntityIds int 1
LOOKUP_TABLE default
1
2
3
4
5
6
7
8
1
1
1
1
1
2
2
2
2
2
3
3
3
3
3
4
4
4
4
4
5
5
5
5
5
6
6
6
6
6
7
7
7
7
7
8
8
8
8
8
9
9
9
9
9
10
10
10
10
10
11
11
11
11
11
12
12
12
12
12
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
2
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
3
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
5
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
6
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1
1)";

