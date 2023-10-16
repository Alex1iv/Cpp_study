//
// Created by Alex on 13.10.2023.
//

# include <iostream>
using namespace std;

int main() {
    //this program calculates the average of 4 numbers
    // beecrowd problem 1040 https://www.beecrowd.com.br/judge/en/problems/view/1040

    double n_1, n_2, n_3, n_4, media, exam, media_final;
    int sum_weights;
    const int w_1 = 2;
    const int w_2 = 3;
    const int w_3 = 4;
    const int w_4 = 1;

    //n_1 = 2.0; n_2 = 4.0; n_3 = 7.5; n_4 = 8.0;
    //n_1 = 2.0; n_2 = 6.5; n_3 = 4.0; n_4 = 9.0;
    //n_1 = 9.0; n_2 = 4.0; n_3 = 8.5; n_4 = 9.0;
    sum_weights = w_1 + w_2 + w_3 + w_4;

    media = (n_1*w_1 + n_2*w_2 + n_3*w_3 + n_4*w_4)/sum_weights;

    printf("Media: %.1f\n", media);

    if (media >= 7.0)
        printf("Aluno aprovado.\n");

    else if (media >= 5.0)
    {
        printf("Aluno em exame.\n");
        //exam = 6.4;
        cin >> exam;

        printf("Nota do exame: %.1f\n", exam);
        media_final = (media + exam) * 0.5;

        if (media_final > 5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", media_final);
    }
    else //if (media < 5.0)
        printf("Aluno reprovado.\n");
    return 0;
}
