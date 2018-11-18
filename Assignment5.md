# Part 1:
- Show that the square root of 2 is irrational.
```
Contradiction
Assume: √2 is rationial
Let √2=a/b, a/b being simplified to lowest terms
2a^2 is even so a² is also even
If a is even then a=2k
2=(2k)²/b²
2=4k²/b²
2b²=4k²
b²=2k²
b² is even <- Contradiction
```
- If n = 25, 100, or 169, then n is a perfect square and is the sum of two perfect squares.
```
Exhaustion
n=m²=a²+b²

If n=25
5²=4²+3²
  =16+9
  =25
If n=100
10²=8²+6²
   =64+36
   =100
If n=169
13²=12²+5²
   =144+24
   =169
```
- The sum of two odd integers is even. Hint: By definition, even integers can be expressed as 2n, thus odd integers can be expressed as 2n + 1
```
Direct
Let a=2k+1 and b=2m+1
a+b=(2k+1)+(2m+1)
   =2k+2m+2
   =2(k+m+1)
Let c=k+m+1
a+b=2c
The sum of 2 odd integers is even.
```
- The sum of an even integer and it's square is even
 ```
Direct
2n=even integer
2n+(2n)²=2m
   4n²+2n=2m
2(2n²+n)=2m
Let k=2n²+n
       2k=2m
Even number by definition
```
- If n squared is odd, then n is odd
```
Contrapositive
If n squared is not odd, then n is not odd
Let n=2m
n²=(2m)²
  =4m²
  =2(2m²)
Let k=2m²
n²=2k, Not odd
Since the contraposition is true, the original must be true.
```
# Part 2:
 - Prove by induction that 1 + 5 + 9 + ... + (4n-3) = n(2n-1)
```
Base case: Assume n=1
1=1(2(1)-1)
1=1  True

1+5+9+...+(4n-3)+(4(n+1)-3)=n+1(2(n+1)-1)
             n(2n-1)+(4n+1)=n+1(2n+1)
                 2n²-n+4n+1=2n²+n+2n+1
                   2n²+3n+1=2n²+3n+1
```
- Prove that for any positive integer number n, n^3 + 2n is divisible by 3
```
Base case: Assume n=1
1³+2(1)=1+2=3, Divisible by 3
n³+2n=3m

        (n+1)³+2(n+1)=3m
   n²+2n+1)(n+1)+2n+2=3m
n³+2n²+n+n²+2n+1+2n+2=3m
            3m+2n²+3n=3m
            3(m+n²+n)=3m
Let k=m+n²+n
                   3k=3m             
```
- Prove that for n >= 1, 9^n − 1 is divisible by 8 for all non-negative integers Hint: 4^(3+1) = 4 * 4^3 Hint: If 9^n - 1 = 8m, then 9^n = 8m + 1
```
Base case: Assume n=1
9¹-1=8, Divisible by 8
9^n-1=8m
9^n=8m+1

9^(n+1)-1=8m
  9*9^n-1=8m
9(8m+1)-1=8m
  72m+9-1=8m
  8(9m+1)=8m
Let k=9m+1
       8k=8m
```
