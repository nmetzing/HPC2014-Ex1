#include <iostream>

#define N (1024)

void mult(float *A, float *B, float *C) {

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            float sum = 0.0f;

            for (int k = 0; k < N; k++)
                sum += A[i * N + k] * B[k * N + j];

            C[i * N + j] = sum;
        }
}

int main() {

    float *A = new float[N * N];
    float *B = new float[N * N];
    float *C = new float[N * N];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            A[i * N + j] = 1;
            B[i * N + j] = 1;
        }

    mult(A, B, C);


    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            std::cout << C[i * N + j]
                      << (j == N - 1 ? "\n" : "\t");
        }

    std::cout << std::endl;


    delete[] A;
    delete[] B;
    delete[] C;
}
