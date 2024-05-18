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
