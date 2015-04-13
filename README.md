# lab3

for question A:

use "make" to compile:

g++ -o lab3 lab3.o class.o

g++ -c class.cpp

g++ -c lab3.cpp


for question B:

SIZE=1000

sort(): 0 seconds\n
v1/v2 are different.
insertion_sort(): 0.01 seconds
v1/v2 are the same.

SIZE=10000

sort(): 0 seconds
v1/v2 are different.
insertion_sort(): 1.27 seconds
v1/v2 are the same.

SIZE=100000

sort(): 0.04 seconds
v1/v2 are different.
insertion_sort(): 128.57 seconds
v1/v2 are the same.


explanation:

隨著SIZE值越大

O(n^2)所耗時間急遽增加，
O(nlog n)與O(n^2)兩者時間差越來越大。
要排的數量少時，O(n^2)較適合;
數量龐大時，則O(nlog n)較適合。
