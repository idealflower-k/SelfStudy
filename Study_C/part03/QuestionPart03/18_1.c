    // 01
    /* main 함수에서 ???을 대신할 수 있는 포인터 변수를 선언해보자.
    int main(void)
    {
        int * arr1[5];
        int * arr2[3][5];
        ??? = arr1;
        ??? = arr2;
        ....
    }
    int **p_arr1 = arr1;
    int *(*p_arr2)[5] = arr2;
    */

    // 02
    /* 아래의 코드를 참조하여 ???을 대신할 수 있는 매개변수 선언을 추가해보자.
    void simple_func_one(???, ???);
    void simple_func_two(???, ???);
    int main(void)
    {
        int arr1[3];
        int arr2[4];
        int arr3[3][4];
        int arr4[2][4];

        simple_func_one(arr1, arr2);
        simple_func_two(arr3, arr4);
    }
void simple_func_one(int *arr1, int *arr2);
void simple_func_two(int (*arr3)[4], int (*arr2)[4]);
*/

//03 