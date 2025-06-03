void printArr(char arr[], int size);
void printArr(int arr[], int size);

int* getNum(int size);
void populateNumList(int *list, int size);

void cpyarr(int *a, int *b, int size);

void sort(int *src, int size);
void sort(int *src, int size, int selector);
void sort(int *src, int *dst, int size);
void sort(int *src, int *dst, int size, int selector);

void swap(int *a, int *b);

int sum(int numbers[], int size);
float average(int numbers[], int size);
int min(int numbers[], int size);
int max(int numbers[], int size);

void reverseChar(char *src);
void reverseChar(char *src, char *dst);

void reverseInt(int *src, int size);
void reverseInt(int *src, int *dst, int size);

int primeNum(int list[], int size);
char* split(char *string, char token);
