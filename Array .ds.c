/* Array ADT*/ #include <stdio.h> #include <stdlib.h>
struct Array { int* A;
int size;
int length; };
void Display(struct Array arr) { printf("\nElements are\n");
for (int i = 0; i < arr.length; i++)
printf("%d ", arr.A[i]); }
void Append(struct Array* arr, int x) { if (arr->length < arr->size)
arr->A[arr->length++] = x;
void Insert(struct Array* arr, int index, int x) { if (index >= 0 && index <= arr->length) { for (int i = arr->length; i > index; i--) {
arr->A[i] = arr->A[i - 1]; }
arr->A[index] = x;
arr->length++; }
}
int main() {
struct Array arr;
printf("Enter Size of an Array: "); scanf("%d", &arr.size);
arr.A = (int*)malloc(sizeof(int) * arr.size); arr.length = 0;
printf("Enter Number of Elements: "); scanf("%d", &arr.length);
printf("Enter All Elements: \n"); for (int i = 0; i < arr.length; i++) {
scanf("%d", &arr.A[i]); }
Append(&arr, 10); Insert(&arr, 0, 12); Display(arr);
getchar(); }






// king move
c1=int(input())
r1=int(input())
c2=int(input())
r2=int(input())
check1=c1-c2
check2=r1-r2
if check1<2 and check2<2 and check1>-2 and check2>-2:
    print('YES')
else:
    print('NO')



//chees bord smae color
if(check1==check2):
    print("YES")
else:
    print("NO")


//bishop move
r1=int(input())
c2=int(input())
r2=int(input())
check1=c1-c2
check2=r1-r2
check3=r2-r1
if check1==check2 or check1==check3:
    print("YES")
else:
    print("NO")

//queen move
c1=int(input())
r1=int(input())
c2=int(input())
r2=int(input())
if c1==c2 or r1==r2 or abs(c1-c2) == abs(r1-r2):
    print("YES")
else:
    print("NO")


//knight move
c1=int(input())
r1=int(input())
c2=int(input())
r2=int(input())
check1=abs(c1-c2)
check2=abs(r1-r2)
if (check1==1 and check2==2) or (check1==2 and check2==1):
    print("YES")
else:
    print("NO")

//chocolatebar
n=int(input())
m=int(input())
k=int(input())
if k<n*m and (k%n==0 or k%m==0):
    print("YES")
else:
    print("NO")

//leap year
year=int(input())
if year%4==0 and year%100!=0 or year%400==0:
    print("LEAP")
else:
    print("COMMON")

//4.1 statement
a=int(input())
b=int(input())
for i in range(a,b+1):
    print(i,end=" ")


//4.2 statement
a=int(input())
b=int(input())
if a<b:
    for x in range(a,b+1):
        print(x,end=" ")
elif a>=b:
    for i in range(a,b-1,-1):
        print(i,end=" ")

//sum of ten nubers
sum=0
for i in range(10):
    sum+=int(input())
print(sum)


//sum of n numers
sum=0
n=int(input())
for i in range(n):
    sum+=int(input())
print(sum)


//sum of cubes
n= int(input())
sum=0
for i in range(1,n+1):
    sum+=i*i*i
print(sum)

//factorial
f=1
for i in range(1,int(input())+1):
    f=f*i
print(f)


//the numer of zeros
cnt=0
n=int(input())
for i in range(n):
    x=int(input())
    if x==0:
        cnt+=1
print(cnt)

  //adding factorial
  n=int(input())
f=1
sum=0
for i in range(1,n+1):
    f=f*i
    sum+=f
print(sum)

//ladder
n=int(input())
for row in range(n+1):
    for col in range(row):
        if(col<=row):
            print((col+1),end="")
    print(sep="\n")
