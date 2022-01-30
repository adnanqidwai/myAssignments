
#include <stdio.h>

// THESE TWO FUNCTIONS ARE SPECIFIC TO THIS PROGRAM: DO NOT COPY
void read_array(int size, float arr[size]) {
    printf("\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: %f\n", i, arr[i]);
    }
}

void read_array_2d(int size, float arr[size][size + 1]) {
    printf("\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size + 1; j++) {
            printf("%f ", arr[i][j]);
        }
        printf("\n");
    }
}

// does (row_a - factor * row_b) and stores into difference
void subtract_matrix_rows(int size, double matrix[size][size + 1], int row_a, int row_b, double factor, double difference[size + 1]) {
    double row_a_elements[size + 1], row_b_elements[size + 1];
    // printf("%d %d %f", row_a, row_b, factor);

    for (int row = 0; row < size; ++row) {
        for (int col = 0; col < size + 1; ++col) {
            if (row == row_a) {
                row_a_elements[col] = matrix[row][col];
            } else if (row == row_b) {
                row_b_elements[col] = matrix[row][col];
            }
        }
    }

    for (int i = 0; i < size + 1; i++) {
        difference[i] = row_a_elements[i] - factor * row_b_elements[i];
        // printf("%f - %f * %f = %f\n", row_a_elements[i], factor, row_b_elements[i], difference[i]);
    }

    // read_array(size + 1, row_a_elements);
    // read_array(size + 1, row_b_elements);

}

// copies elements from row_data to destination_row in matrix
void replace_row(int size, double matrix[size][size + 1], double row_data[size + 1], int destination_row) {
    for (int row = 0; row < size; row++) { // can change to 1 because first row not going to be repalced
        for (int col = 0; col < size + 1; col++) {
            if (row == destination_row) {
                matrix[row][col] = row_data[col];
            }
        }
    }
}

// returns index of element
// int i_th_non_zero_element_from_last(int i, int size, float arr[]) {
//     int c = 0;
//     for (int element = size - 1; element > -1; element--) {
//         if (arr[element] != 0) {
//             c += 1;
//             if (c == i) {
//                 return element;
//             }
//         }
//     }
// }

int main() {
    int size;
    scanf("%d", &size);

    // num of rows = size; num of columns = size + 1
    double data[size][size + 1]; // input is all integers but after divison nums change to float

    // storing data in proper gaussian format
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%lf", &data[i][j]);
        }
    }

    // storing constants from last line
    for (int i = 0; i < size; i++) {
        scanf("%lf", &data[i][size]);
    }

    for (int row = 1; row < size; row++) {
        for (int col = 0; col < row; col++) {
            double head_num = data[col][col];
            double factor = data[row][col] / head_num; // factor to multiply the first row by
            double difference[size + 1];

            // so when on the first element of second row, have to subtract from row 1; same for first element of row 3 in which case cant do from row-1 ie row 2 because row 2 doens't have that variable anymore
            // so basically row to subtract depends on col
            subtract_matrix_rows(size, data, row, col, factor, difference);
            replace_row(size, data, difference, row);
        }
    }
 
    // backtracking
    double last_var_value = data[size - 1][size] / data[size - 1][size - 1];
    double vars[size];
    vars[0] = last_var_value;

    int vars_add = 1;
    for (int row = size - 2; row > -1; row--) { // starting with second last row since last the row var has already been solved
        // int num_zero_terms = row;
        // row is also the number of zero terms in the row
        int num_non_zero_terms = size - row + 1;
        double non_zero_terms[num_non_zero_terms];
        int c = 0;

        for (int col = 0; col < size + 1; col++) {
            if (data[row][col] != 0) {
                non_zero_terms[c] = data[row][col];
                c += 1;
            }
        }

        double var_value = data[row][size]; // last element in row ie the constant
        int vars_index = (size - 2) - row; // row decreased and var_index increased simultaneously and they always seemed to add up to (size-2)
        // printf("%d\n", vars_index);
        for (int term = 1; term < num_non_zero_terms - 1; term++) { // -1 because last element is constant, starting from 1 because first one has to be divided afte everything else is done
            // printf("(%d) %f - %f * %f = ", vars_index, var_value, non_zero_terms[term], vars[vars_index]);
            var_value -= non_zero_terms[term] * vars[vars_index]; // could insert new var into the first spot everytime
            vars_index -= 1;
            // printf("%f\n", var_value);
        }
        var_value /= non_zero_terms[0];
        vars[vars_add] = var_value;
        vars_add += 1;
    }

    for (int i = size - 1; i > -1; i--) {
        printf("%.18f\n", vars[i]);
    }
}
