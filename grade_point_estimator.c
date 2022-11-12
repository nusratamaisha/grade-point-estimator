/*Author:Nusrat Ahmmed Maisha
Department of CSE,University of Asia Pacific
E-mail: nusratamaisha@gmail.com
*/

#include<stdio.h>
#include<stdlib.h>

#define FINAL_PCT 50
#define MID_PCT 20
#define CT_PCT 20
#define ASSESSMENTS_PCT 10
#define PHY_TOT_CT 4
#define CSE_TOT_CT 3
#define MTH_TOT_CT 4
#define HSS_TOT_CT 3
#define PHY_FINAL_MARK 150
#define CSE_FINAL_MARK 150
#define MTH_FINAL_MARK 150
#define HSS_FINAL_MARK 100

void grade(int mark){
    switch(mark){
    case 0 ... 39:
        printf("F or Grade Point 0.00");
         break;
    case 40 ... 44:
        printf("D or Grade Point 2.00");
         break;
    case 45 ... 49:
        printf("C or Grade Point 2.25");
         break;
    case 50 ... 54:
        printf("C+ or Grade Point 2.50");
         break;
    case 55 ... 59:
        printf("B- or Grade Point 2.75");
         break;
    case 60 ... 64:
        printf("B or Grade Point 3.00");
         break;
    case 65 ... 69:
        printf("B+ or Grade Point 3.25");
         break;
    case 70 ... 74:
        printf("A- or Grade Point 3.50");
         break;
    case 75 ... 79:
        printf("A or Grade Point 3.75");
         break;
    case 80 ... 100:
        printf("A+ or Grade Point 4.00");
         break;
    }
}
void phy101(){
    int i, j, f, n = PHY_TOT_CT, top_count = 2;
    float mid, ct_percentage, mid_percentage, temp, sum=0, total_pct;
    printf("PHY 101 has taken %d CT's. Enter these marks below\n",n);
    float ct[n];
    for(i=0;i<n;i++){
        printf("Enter CT %d mark=",i+1);
        scanf("%f",&ct[i]);
    }
    for (i=0;i<n;i++){
        for (j=i+1;j<n;j++) {
            if (ct[j]>ct[i]){
                temp=ct[i];
                ct[i]=ct[j];
                ct[j]=temp;
            }
        }
    }
    printf("PHY 101 counts top %d CT marks. Your top CT marks are:", top_count);
    for (i=0;i<top_count;i++){
        printf("\n%0.2f",ct[i]);
    }

    for (i=0;i<top_count;i++){
        sum+=ct[i];
    }
    ct_percentage= CT_PCT * (sum/(20*top_count)) ;
    printf("\nPercentage of CT out of 20%%= %0.2f\n",ct_percentage);
    printf("Enter mark for PHY 101 mid term(out of 60):");
    scanf("%f",&mid);
    mid_percentage= MID_PCT * (mid/60);
    printf("Percentage of Mid = %0.2f\n",mid_percentage);
    total_pct = ct_percentage + mid_percentage + ASSESSMENTS_PCT;
    printf("So you got %f (out of 50%%)\n", total_pct);
    printf("Our final exam mark will be %d, So\n",PHY_FINAL_MARK);
    for (f = 0; f <= 50; f+= 5){
        printf("If you get %d%% mark in final, estimated grade will be: ", f);
        grade((int) total_pct + f);
        printf("\n");
    }
}

void cse101(){
    int i, j, f, n = CSE_TOT_CT, top_count = 3;
    float mid, ct_percentage, mid_percentage, temp, sum=0, total_pct;
    printf("CSE 101 has taken %d CT's. Enter these marks below\n",n);
    float ct[n];
    for(i=0;i<n;i++){
        printf("Enter CT %d mark=",i+1);
        scanf("%f",&ct[i]);
    }
    for (i=0;i<n;i++){
        for (j=i+1;j<n;j++) {
            if (ct[j]>ct[i]){
                temp=ct[i];
                ct[i]=ct[j];
                ct[j]=temp;
            }
        }
    }
    printf("CSE 101 counts top %d CT marks. Your top CT marks are:", top_count);
    for (i=0;i<top_count;i++){
        printf("\n%0.2f",ct[i]);
    }

    for (i=0;i<top_count;i++){
        sum+=ct[i];
    }
    ct_percentage= CT_PCT * (sum/(20*top_count)) ;
    printf("\npercentage of CT out of 20%%= %0.2f\n",ct_percentage);
    printf("Enter mark for CSE 101 mid term(out of 60):");
    scanf("%f",&mid);
    mid_percentage= MID_PCT * (mid/60);
    printf("Percentage of Mid = %0.2f\n",mid_percentage);
    total_pct = ct_percentage + mid_percentage + ASSESSMENTS_PCT;
    printf("So you got %f (out of 50%%)\n", total_pct);
    printf("Our final exam mark will be %d, So\n",CSE_FINAL_MARK);
    for (f = 0; f <= 50; f+= 5){
        printf("If you get %d%% mark in final, estimated grade will be: ", f);
        grade((int) total_pct + f);
        printf("\n");
    }
}

void mth101(){
    int i, j, f, n = MTH_TOT_CT, top_count = 3;
    float mid, ct_percentage, mid_percentage, temp, sum=0, total_pct;
    printf("MTH 101 has taken %d CT's. Enter these marks below\n", MTH_TOT_CT);
    float ct[n];
    for(i=0;i<n;i++){
        printf("Enter CT %d mark=",i+1);
        scanf("%f",&ct[i]);
    }
    for (i=0;i<n;i++){
        for (j=i+1;j<n;j++) {
            if (ct[j]>ct[i]){
                temp=ct[i];
                ct[i]=ct[j];
                ct[j]=temp;
            }
        }
    }
    printf("MTH 101 counts top %d CT marks. Your top CT marks are:", top_count);
    for (i=0;i<top_count;i++){
        printf("\n%0.2f",ct[i]);
    }

    for (i=0;i<top_count;i++){
        sum+=ct[i];
    }
    ct_percentage= CT_PCT * (sum/(20*top_count)) ;
    printf("\npercentage of CT out of 20%%= %0.2f\n",ct_percentage);
    printf("Enter mark for MTH 101 mid term(out of 60):");
    scanf("%f",&mid);
    mid_percentage= MID_PCT * (mid/60);
    printf("Percentage of Mid = %0.2f\n",mid_percentage);
    total_pct = ct_percentage + mid_percentage + ASSESSMENTS_PCT;
    printf("So you got %f (out of 50%%)\n", total_pct);
    printf("Our final exam mark will be %d, So\n",MTH_FINAL_MARK);
    for (f = 0; f <= 50; f+= 5){
        printf("If you get %d%% mark in final, estimated grade will be: ", f);
        grade((int) total_pct + f);
        printf("\n");
    }
}

void hss101(){
    int i, j, f, n = HSS_TOT_CT, top_count = 2;
    float mid, ct_percentage, mid_percentage, temp, sum=0, total_pct;
    printf("HSS 101 has taken %d CT's. Enter these marks below\n", n);
    float ct[n];
    for(i=0;i<n;i++){
        printf("Enter CT %d mark=",i+1);
        scanf("%f",&ct[i]);
    }
    for (i=0;i<n;i++){
        for (j=i+1;j<n;j++) {
            if (ct[j]>ct[i]){
                temp=ct[i];
                ct[i]=ct[j];
                ct[j]=temp;
            }
        }
    }
    printf("HSS 101 counts top %d CT marks. Your top CT marks are:", top_count);
    for (i=0;i<top_count;i++){
        printf("\n%0.2f",ct[i]);
    }

    for (i=0;i<top_count;i++){
        sum+=ct[i];
    }
    ct_percentage= CT_PCT * (sum/(20*top_count)) ;
    printf("\npercentage of CT out of 20%%= %0.2f\n",ct_percentage);
    printf("Enter mark for HSS 101 mid term(out of 40):");
    scanf("%f",&mid);
    mid_percentage= MID_PCT * (mid/40);
    printf("Percentage of Mid = %0.2f\n",mid_percentage);
    total_pct = ct_percentage + mid_percentage + ASSESSMENTS_PCT;
    printf("So you got %f (out of 50%%)\n", total_pct);
    printf("Our final exam mark will be %d, So\n",HSS_FINAL_MARK);
    for (f = 0; f <= 50; f+= 5){
        printf("If you get %d%% mark in final, estimated grade will be: ", f);
        grade((int) total_pct + f);
        printf("\n");
    }
}
void takeInput(){
    int course_num;
    printf("\nCourse:\n");
    printf("1.PHY 101\n2.CSE 101\n3.MTH 101\n4.HSS 111(A)\n");
    printf("\nEnter your course number above (between 1 to 4) to get the estimate: ");
    scanf("%d",&course_num);
    switch(course_num){
        case 1:
        phy101();
        break;
        case 2:
        cse101();
        break;
        case 3:
        mth101();
        break;
        case 4:
        hss101();
        break;
    }
}

int main(){
    char ch;
    printf("Welcome to grade estimator\n");
    printf("This application will help you to estimate the percentage you have to get in your final exam\n");
    printf("It supports the courses PHY 101, CSE 101, MTH 101 and HSS 111(A)\n");

    printf("Some instruction to follow:\n");
    printf("  - We have 30%% marks for Assessments; for simplicity 20%% will be calculated for quiz and\n");
    printf("    10%% will be added to the final count\n");
    printf("  - The CT number should be entered after converting them to 20%%.\n");
    printf("      - For example if you get 25 out of 25 then you should enter 20\n");
    printf("      - For example if you get 8 out of 10 then you should enter 16\n");
    printf("  - If you do not know any CT mark you can enter 0 or any mark you are expecting.\n");

    takeInput();
    scanf("%c",&ch);
    while(-1){
        printf("\nDo you want to run again?(y or n):");
        scanf("%c",&ch);
        if(ch == 'y'){
            takeInput();
            scanf("%c",&ch);
        }
        else{
            break;
        }
    }
}

