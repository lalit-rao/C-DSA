/*
#include <stdio.h>

void display(int arr[], int n) {
    // traversing the array
    for(int i = 0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int indInsertion(int arr[], int size, int element, int capacity, int index) {
    // insertion of element in array
    if(size>= capacity) {
        return -1;
    }
    for(int i=size-1; i>=index; i--) {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

int main() {
    int arr[100] = {4,58,85,45};
    int size = 4, element = 45, index = 2;
    display(arr, size);
    indInsertion(arr, size, element, 100, index);
    size +=1;
    display(arr,size);


    return 0;
}*/

/*
#include <stdio.h>

void display(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void indDeletion(int arr[], int size, int index) {
    for (int i = index; i < size - 1; ++i) {
        arr[i] = arr[i+1];
    }
}

int indInsertion(int arr[], int size, int element, int capacity, int index) {
    if(size>=capacity) {
        return -1;
    }
    for (int i = size - 1; i > index; i--) {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

int main() {
    int arr[100] = {4,45,85,74};
    int size = 4, element = 48, index = 1;
    display(arr, size);
    indDeletion(arr, size, index);
    size -= 1;
    display(arr, size);
    indInsertion(arr, size, element, 100, index);
    size += 1;
    display(arr, size);
}*/

/*
#include <stdio.h>

void display(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int linearSearch(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if(arr[i]==element) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {4,565,545,4,548,558,548,5885,84,485,47};
    int size = sizeof(arr)/sizeof(int);
    int element = 565;
    int searchIndex = linearSearch(arr, size, element);
    display(arr, size);
    printf("The element you searched for is %d at index %d: ", element,searchIndex);
    return 0;
}*/

/*#include <stdio.h>

void display(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int binarySearch(int arr[], int size, int element) {
    int low, mid, high;
    low = 0;
    high = size - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == element) {
            return mid;
        }
        if (arr[mid] < element) {
            low = mid + 1;
        }
        else {
            low = mid -1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1,23,35,38,45,73,93,103,150,355};
    int size = sizeof(arr)/ sizeof(int);
    int element = 45;
    int searchIndex = binarySearch(arr, size, element);
    display(arr, size);
    printf("The element you searched for is %d at index %d: ", element,searchIndex);
    return 0;
}*/

/*
#include <stdio.h>

void printArray(int* A, int n) {
    for(int i = 0; i<n;i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void insertionSort(int *A, int n) {
    int key,j;
    for (int i = 1; i<=n-1;i++) {
        key = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > key) {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
        printArray(A, n);
    }
}

void selectionSort(int *A, int n) {
    int indexOfMin, temp;
    for (int i = 0; i <= n-1; i++) {
        indexOfMin = i;
        for(int j=i+1; j<=n-1; j++) {
            if (A[j] < A[indexOfMin]) {
                indexOfMin = j;
            }
        }
        temp = A[i];
        A[i] = A[indexOfMin];
        A[indexOfMin] = temp;
//    printArray(A, n);

    }
}

void bubbleSort(int *A, int n) {
    int temp;
    for (int i = 0; i <= n-1; i++) {
        for (int j=0; j<n-i-1; j++) {
            if (A[j] > A[j+1]) {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
//            printArray(A, n);
        }
    }
}

int main(){
    int A[] = {100,74,23,123,4,64};
    int n = 6;
    printArray(A, n);
    insertionSort(A, n);
    printf("Insertion Sort: ");
    printArray(A, n);
    selectionSort(A, n);
    printf("Selection Sort: ");
    printArray(A, n);
    bubbleSort(A, n);
    printf("Bubble Sort:  ");
    printArray(A,n);
    return 0;
}
*/

/*
#include <stdio.h>

int main() {
    int arr[7]= {-100,-74,-23,-123,-4,-64, -53};
    int max = arr[0];
    for (int i=0; i<7; i++) {
        if(max<arr[i]) {
            max = arr[i];
        }
    }
    printf("%d",max);
    return 0;
}
*/

/*
#include <stdio.h>

int main() {
    int arr[10] = {500,3474,353523123,5354,466444, 4646353, 765,6436,232,353535};
    int min = arr[0];
    for (int i=0; i<10;i++) {
        if (min>arr[i]) {
            min = arr[i];
        }
    }
    printf("%d", min);
    return 0;
}*/


/*
#include <stdio.h>

int main() {
    int arr[10] = {500,3474,35,35,525,243,131,1414,423,1341};
    for (int i=0; i<10; i++) {
        if (i % 2 == 0) {
            arr[i] = arr[i] + 10;
            printf("%d \n", arr[i]);
        }
        else {
            arr[i] = arr[i] * 2;
            printf("%d \n",arr[i]);
        }
    }
    return 0;
}*/


/*
#include <stdio.h>

int main() {
    int arr[10] = {500,3474,35,35,525,243,131,1414,423,1341};
    int n;
    printf("Number please: ");
    scanf("%d", &n);
    int count= 0;
    for (int i = 0; i < 10; i++) {
        if ( n < arr[i] ) {
            count++;
        }
    }
    printf("%d \n",count);
    return 0;
}*/

/*
#include <stdio.h>

int main() {
    int arr[10] = {500,3474,35,35,525,243,131,1414,423,1341};
    int sumEven, sumOdd, diff;
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            sumEven += arr[i];
        }
        else {
            sumOdd += arr[i];
        }
    }
    diff = sumEven - sumOdd;
    printf("%d ",diff);
}*/

/*
#include <stdio.h>

int main() {
    int arr[10] = {1,34,5,6,21,5,42,1,54,7};
    int totalPairs =0;
    int x = 12;
    for (int i=0; i < 10; i++) {
        for (int j=i+1; j <10; j++) {
            if(arr[i] + arr[j] == x) {
                totalPairs++;
                printf("(%d,%d) \n",arr[i], arr[j]);
            }
        }
    }
    printf("%d ",totalPairs);
}*/

/*
#include <stdio.h>

int main() {
    int arr[10] = {1, 34, 5, 6, 21, 5, 42, 1, 54, 7};
    int totalPairs = 0;
    int x = 12;
    for (int i = 0; i < 10; i++) {
        for (int j = i+1; j < 10; j++) {
            for (int k = j+1; k < 10; k++) {
                if (arr[i] + arr[j] + arr[k] == x) {
                    totalPairs++;
                    printf("(%d,%d,%d) \n", arr[i], arr[j],arr[k]);
                }
            }
        }
    }
    printf("%d ", totalPairs);
}*/

/*#include <stdio.h>

int main() {
    int arr[7]= {1,2,3,4,5,67,8,};
    int max = arr[0];
    int smax = arr[0];
    for (int i=0; i<7; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    for (int i = 0; i < 7; i++) {
       if(smax < arr[i] && arr[i] != max ) {
            smax = arr[i];
        }
    }
    printf("%d",smax);
    return 0;
}*/

/*
#include <stdio.h>

int main() {
    int arr[7]= {1,2,3,4,5,6,7,};
    int max = arr[0];
    int smax = arr[0];
    for (int i=0; i<7; i++) {
        if (max < arr[i]) {
            smax = max;
            max = arr[i];
        }
        else if(smax < arr[i] && arr[i] != max ) {
            smax = arr[i];
        }
    }
    printf("%d",smax);
    return 0;
}*/

/*
#include <stdio.h>

int main() {
    int arr[7]= {1,2,3,4,5,6,7,};
    int brr[7];
    for (int i = 0; i < 7; i++) {
        brr[i] = arr[6-i];
    }
    for (int i = 0; i < 7; i++) {
        printf("%d ", brr[i]);
    }
    return 0;
}*/

/*
#include <stdio.h>

#define MAX 50

int main() {
    int a[MAX][MAX], b[MAX][MAX], product[MAX][MAX];
    int arows, acolumns, brows, bcolumns;
    int i, j, k;
    int sum = 0;

    printf("Enter number of rows and columns of matrix 1: ");
    scanf("%d %d", &arows, &acolumns);

    for (int i = 0; i < arows; i++) {
        for (int j = 0; j < acolumns; j++) {
            scanf("%d", a[i][j]);
        }
    }

    printf("Enter number of rows and columns of matrix 1: ");
    scanf("%d %d", &brows, &bcolumns);

    if (brows != acolumns) {
        printf("We cannot do this");
    } else {
        for (int i = 0; i < brows; i++) {
            for (int j = 0; j < bcolumns; j++) {
                scanf("%d", b[i][j]);
            }
        }
    }

    for (i = 0; i < arows; i++) {
        for (int j = 0; j < bcolumns; j++) {
            for (int k = 0; k < brows; k++) {
                sum += a[i][k] * b[k][j];
            }
            product[i][j] = sum;
            sum = 0;
        }
    }
}*/















// Insertion at beginning

/*#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* insertAtBeginning(struct Node* head, int data) {
    // Create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
    return head;
}

void printLinkedList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    head = insertAtBeginning(head, 3);
    head = insertAtBeginning(head, 2);
    head = insertAtBeginning(head, 1);

    printf("Linked List: ");
    printLinkedList(head);

    return 0;
}*/



// Insertion at ending

/*#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* insertAtEnd(struct Node* head, int data) {
    // Create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        struct Node* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }

    return head;
}

void printLinkedList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    head = insertAtEnd(head, 1);
    head = insertAtEnd(head, 2);
    head = insertAtEnd(head, 3);

    printf("Linked List: ");
    printLinkedList(head);

    return 0;
}*/



// Insertion in between

/*#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* insertInBetween(struct Node* head, int data, int position) {
    // Create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    if (position == 1) {
        newNode->next = head;
        head = newNode;
    } else {
        struct Node* current = head;
        for (int i = 1; i < position - 1 && current != NULL; i++) {
            current = current->next;
        }
        if (current == NULL) {
            printf("Invalid position. The list is not long enough.\n");
        } else {
            newNode->next = current->next;
            current->next = newNode;
        }
    }

    return head;
}

void printLinkedList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    head = insertInBetween(head, 1, 1);
    head = insertInBetween(head, 3, 2);
    head = insertInBetween(head, 2, 2);

    printf("Linked List: ");
    printLinkedList(head);

    return 0;
}*/

// Function to delete the first node of the linked list
/*
struct Node* deleteAtBeginning(struct Node* head) {
    if (head == NULL) {
        printf("List is empty. Nothing to delete.\n");
    } else {
        struct Node* temp = head;
        head = head->next;
        free(temp); // Free the memory of the deleted node
    }
    return head;
}*/




// Function to delete the last node of the linked list
/*
struct Node* deleteAtEnd(struct Node* head) {
    if (head == NULL) {
        printf("List is empty. Nothing to delete.\n");
    } else if (head->next == NULL) {
        // If there is only one node, delete it
        free(head);
        head = NULL;
    } else {
        // Find the second-to-last node
        struct Node* current = head;
        while (current->next->next != NULL) {
            current = current->next;
        }
        // Delete the last node
        free(current->next);
        current->next = NULL;
    }
    return head;
}
*/
