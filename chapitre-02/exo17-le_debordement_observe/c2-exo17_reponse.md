resultat du code  avec int :
$ le nombre de tour ou on voit apparaitre un nombre negatif est le tour 31;
$ tour ou le nombre de devient 0 est le tour 32;
 explication en binaire :
  un int est coder sur 32 bits, avant de devenir negatif.
c'est ce qui correspond au nombre :1073741824 retrouver sur le tour 30.
```
PS C:\Users\Lenovo> clang++ c2-exo17_main.cpp -o main 
PS C:\Users\Lenovo> ./main                            
tour 0 : x = 1
 tour 1 : x = 2
 tour 2 : x = 4
 tour 3 : x = 8
 tour 4 : x = 16
 tour 5 : x = 32
 tour 6 : x = 64
 tour 7 : x = 128
 tour 8 : x = 256
 tour 9 : x = 512
 tour 10 : x = 1024
 tour 11 : x = 2048
 tour 12 : x = 4096
 tour 13 : x = 8192
 tour 14 : x = 16384
 tour 15 : x = 32768
 tour 16 : x = 65536
 tour 17 : x = 131072
 tour 18 : x = 262144
 tour 19 : x = 524288
 tour 20 : x = 1048576
 tour 21 : x = 2097152
 tour 22 : x = 4194304
 tour 23 : x = 8388608
 tour 24 : x = 16777216
 tour 25 : x = 33554432
 tour 26 : x = 67108864
 tour 27 : x = 134217728
 tour 28 : x = 268435456
 tour 29 : x = 536870912
 tour 30 : x = 1073741824
 tour 31 : x = -2147483648
 tour 32 : x = 0
 tour 33 : x = 0
 tour 34 : x = 0
 
PS C:\Users\Lenovo> 
```
 cas avec type: long long: 
 $ le nombre de tour ou on voit apparaitre un nombre negatif est le tour 63;
$ tour ou le nombre de devient 0 est le tour 64
rendu:
```
PS C:\Users\Lenovo> clang++ c2-exo17_main2.cpp -o main 
PS C:\Users\Lenovo> ./main                             
tour 0 : x =  1
tour 1 : x =  2
tour 2 : x =  4
tour 3 : x =  8
tour 4 : x =  16
tour 5 : x =  32
tour 6 : x =  64
tour 7 : x =  128
tour 8 : x =  256
tour 9 : x =  512
tour 10 : x =  1024
tour 11 : x =  2048
tour 12 : x =  4096
tour 13 : x =  8192
tour 14 : x =  16384
tour 15 : x =  32768
tour 16 : x =  65536
tour 17 : x =  131072
tour 18 : x =  262144
tour 19 : x =  524288
tour 20 : x =  1048576
tour 21 : x =  2097152
tour 22 : x =  4194304
tour 23 : x =  8388608
tour 24 : x =  16777216
tour 25 : x =  33554432
tour 26 : x =  67108864
tour 27 : x =  134217728
tour 28 : x =  268435456
tour 29 : x =  536870912
tour 30 : x =  1073741824
tour 31 : x =  2147483648
tour 32 : x =  4294967296
tour 33 : x =  8589934592
tour 34 : x =  17179869184
tour 35 : x =  34359738368
tour 36 : x =  68719476736
tour 37 : x =  137438953472
tour 38 : x =  274877906944
tour 39 : x =  549755813888
tour 40 : x =  1099511627776
tour 41 : x =  2199023255552
tour 42 : x =  4398046511104
tour 43 : x =  8796093022208
tour 44 : x =  17592186044416
tour 45 : x =  35184372088832
tour 46 : x =  70368744177664
tour 47 : x =  140737488355328
tour 48 : x =  281474976710656
tour 49 : x =  562949953421312
tour 50 : x =  1125899906842624
tour 51 : x =  2251799813685248
tour 52 : x =  4503599627370496
tour 53 : x =  9007199254740992
tour 54 : x =  18014398509481984
tour 55 : x =  36028797018963968
tour 56 : x =  72057594037927936
tour 57 : x =  144115188075855872
tour 58 : x =  288230376151711744
tour 59 : x =  576460752303423488
tour 60 : x =  1152921504606846976
tour 61 : x =  2305843009213693952
tour 62 : x =  4611686018427387904
tour 63 : x =  -9223372036854775808
tour 64 : x =  0
PS C:\Users\Lenovo> 
```
resultat avec le type unsigned:
   $ le nombre de tour ou on voit apparaitre un nombre negatif est le tour 31;
$ tour ou le nombre de devient 0 est le tour 32
rendu:
```
PS C:\Users\Lenovo> clang++ c2-exo17_main3.cpp -o main 
PS C:\Users\Lenovo> ./main                             
tour 0 : x =  1
tour 1 : x =  2
tour 2 : x =  4
tour 3 : x =  8
tour 4 : x =  16
tour 5 : x =  32
tour 6 : x =  64
tour 7 : x =  128
tour 8 : x =  256
tour 9 : x =  512
tour 10 : x =  1024
tour 11 : x =  2048
tour 12 : x =  4096
tour 13 : x =  8192
tour 14 : x =  16384
tour 15 : x =  32768
tour 16 : x =  65536
tour 17 : x =  131072
tour 18 : x =  262144
tour 19 : x =  524288
tour 20 : x =  1048576
tour 21 : x =  2097152
tour 22 : x =  4194304
tour 23 : x =  8388608
tour 24 : x =  16777216
tour 25 : x =  33554432
tour 26 : x =  67108864
tour 27 : x =  134217728
tour 28 : x =  268435456
tour 29 : x =  536870912
tour 30 : x =  1073741824
tour 31 : x =  -2147483648
tour 32 : x =  0
tour 33 : x =  0
tour 34 : x =  0
tour 35 : x =  0
tour 36 : x =  0
tour 37 : x =  0
tour 38 : x =  0
tour 39 : x =  0
tour 40 : x =  0
tour 41 : x =  0
tour 42 : x =  0
tour 43 : x =  0
tour 44 : x =  0
tour 45 : x =  0
tour 46 : x =  0
tour 47 : x =  0
tour 48 : x =  0
tour 49 : x =  0
tour 50 : x =  0
tour 51 : x =  0
tour 52 : x =  0
tour 53 : x =  0
tour 54 : x =  0
tour 55 : x =  0
tour 56 : x =  0
tour 57 : x =  0
tour 58 : x =  0
tour 59 : x =  0
tour 60 : x =  0
tour 61 : x =  0
tour 62 : x =  0
tour 63 : x =  0
tour 64 : x =  0
PS C:\Users\Lenovo> 
```
resultat avec x <<= 1
$ cas de int:
ici  le nombre de tour ou on voit apparaitre un nombre negatif est le tour 31;
et le  tour ou le nombre de devient 0 est le tour 32;
```
PS C:\Users\Lenovo> clang++ c2-exo17_main.cpp -o main 
PS C:\Users\Lenovo> ./main                            
tour 0 : x = 1
 tour 1 : x = 2
 tour 2 : x = 4
 tour 3 : x = 8
 tour 4 : x = 16
 tour 5 : x = 32
 tour 6 : x = 64
 tour 7 : x = 128
 tour 8 : x = 256
 tour 9 : x = 512
 tour 10 : x = 1024
 tour 11 : x = 2048
 tour 12 : x = 4096
 tour 13 : x = 8192
 tour 14 : x = 16384
 tour 15 : x = 32768
 tour 16 : x = 65536
 tour 17 : x = 131072
 tour 18 : x = 262144
 tour 19 : x = 524288
 tour 20 : x = 1048576
 tour 21 : x = 2097152
 tour 22 : x = 4194304
 tour 23 : x = 8388608
 tour 24 : x = 16777216
 tour 25 : x = 33554432
 tour 26 : x = 67108864
 tour 27 : x = 134217728
 tour 28 : x = 268435456
 tour 29 : x = 536870912
 tour 30 : x = 1073741824
 tour 31 : x = -2147483648
 tour 32 : x = 0
 tour 33 : x = 0
 tour 34 : x = 0
 ```
 resultat avec le type unsigned: lorsque x<<=1,
   $ le nombre de tour ou on voit apparaitre un nombre negatif est le tour 31;
$ tour ou le nombre de devient 0 est le tour 32

resultat avec le type long long lorsque x<<=1 :
   $ le nombre de tour ou on voit apparaitre un nombre negatif est le tour 63;
$ tour ou le nombre de devient 0 est le tour 64
rendu:
```
PS C:\Users\Lenovo> clang++ c2-exo17_main2.cpp -o main 
PS C:\Users\Lenovo> ./main                             
tour 0 : x =  1
tour 1 : x =  2
tour 2 : x =  4
tour 3 : x =  8
tour 4 : x =  16
tour 5 : x =  32
tour 6 : x =  64
tour 7 : x =  128
tour 8 : x =  256
tour 9 : x =  512
tour 10 : x =  1024
tour 11 : x =  2048
tour 12 : x =  4096
tour 13 : x =  8192
tour 14 : x =  16384
tour 15 : x =  32768
tour 16 : x =  65536
tour 17 : x =  131072
tour 18 : x =  262144
tour 19 : x =  524288
tour 20 : x =  1048576
tour 21 : x =  2097152
tour 22 : x =  4194304
tour 23 : x =  8388608
tour 24 : x =  16777216
tour 25 : x =  33554432
tour 26 : x =  67108864
tour 27 : x =  134217728
tour 28 : x =  268435456
tour 29 : x =  536870912
tour 30 : x =  1073741824
tour 31 : x =  2147483648
tour 32 : x =  4294967296
tour 33 : x =  8589934592
tour 34 : x =  17179869184
tour 35 : x =  34359738368
tour 36 : x =  68719476736
tour 37 : x =  137438953472
tour 38 : x =  274877906944
tour 39 : x =  549755813888
tour 40 : x =  1099511627776
tour 41 : x =  2199023255552
tour 42 : x =  4398046511104
tour 43 : x =  8796093022208
tour 44 : x =  17592186044416
tour 45 : x =  35184372088832
tour 46 : x =  70368744177664
tour 47 : x =  140737488355328
tour 48 : x =  281474976710656
tour 49 : x =  562949953421312
tour 50 : x =  1125899906842624
tour 51 : x =  2251799813685248
tour 52 : x =  4503599627370496
tour 53 : x =  9007199254740992
tour 54 : x =  18014398509481984
tour 55 : x =  36028797018963968
tour 56 : x =  72057594037927936
tour 57 : x =  144115188075855872
tour 58 : x =  288230376151711744
tour 59 : x =  576460752303423488
tour 60 : x =  1152921504606846976
tour 61 : x =  2305843009213693952
tour 62 : x =  4611686018427387904
tour 63 : x =  -9223372036854775808
tour 64 : x =  0
PS C:\Users\Lenovo> 
```




