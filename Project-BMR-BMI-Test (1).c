#include<stdio.h>
#include<string.h>



float calculateBMI() {

float weight[10],inch[10], height, BMI;


    for (int i = 0; i < 1; i++) {

        printf("Enter your weight in kg : ");
        scanf("%f", &weight[i]);

        printf("Enter your height in inch : ");
        scanf("%f", &inch[i]);

    }

    for (int i = 0; i < 1; i++) {
         height= (inch[i]*0.025)*(inch[i]*0.025);
         BMI= weight[i] / (height);


        printf("Your BMI = %.1f\n", BMI);
    }
    for (int i=0; i<=39.9;i++){
            if (0<BMI && BMI<18.5){
                printf("Your weight is low.\n");
                break;
            }
            else if (18.5<=BMI && BMI<=24.9){
                printf("Your weight is perfect.\n");
                break;
            }
            else if (25<=BMI && BMI<=29.9){
                printf("Excess body weight.\n");
                break;
            }
            else if (30<=BMI && BMI<=34.9){
                printf("You are in first stage of obesity.\n");
                break;
            }
            else if (35<=BMI && BMI<=39.9){
                printf("You are in second stage of obesity.\n");
                break;
            }
            else{
                printf("Overweight.There is a fear of death.\n");
                break;
            }


        }

    return 0;
}

float repeatecode(){

float height,weight,inch,BMI,BMR;
int age,i,a;

system("cls");
printf ("Let's get started..\n");
    sleep (1);
    printf("\n");
    printf ("Which thing do you want to test?\n");
    printf ("1. BMR\n2. BMI \n");
    scanf ("%d",&a);

    if(a==1){
            system("cls");
        printf ("What's your gender?\n");
        printf ("1. Male\n2. Female \n");
        scanf ("%d",&a);
        printf("\n");
        if(a==1){
            system("cls");
            printf ("Let's test your BMR..\n");
            printf ("Enter your age:");
            scanf("%d",&age);
            printf ("Enter your weight in kg: ");
            scanf("%f",&weight);
            printf ("Enter your height in inch:");
            scanf("%f",&inch);
            height= inch*2.54;
            BMR= 66+(13.7*weight)+(5*height)-(6.8*age);
            printf ("Your BMR is = %.2f", BMR);
        }
        else {
            system("cls");
            printf ("Let's test your BMR..\n");
            printf ("Enter your age:");
            scanf("%d",&age);
            printf ("Enter your weight in kg: ");
            scanf("%f",&weight);
            printf ("Enter your height in inch:");
            scanf("%f",&inch);
            height= inch*2.54;
            BMR= 655+(9.6*weight)+(1.8*height)-(4.7*age);
            printf ("Your BMR is = %.2f cal\n", BMR);



printf("Now we will show you how many calories you need according to your daily life.");

sleep(2);
system("cls");
printf("Are you?\n");
printf("1.Not hardworking?\n2.Light duty?\n3.Exercise (2-3) days a week?\n4.Exercise every day of the week?\n5.Extremely hardworking?\n");
scanf("%d",&a);

system("cls");
if (a==1)
    printf ("You need = %.2f cal",BMR*1.2);
 else if (a==2)
    printf ("You need = %.2f cal",BMR*1.375);
 else if (a==3)
    printf ("You need = %.2f cal",BMR*1.55);
 else if (a==4)
    printf ("You need = %.2f cal",BMR*1.725);
 else
    printf ("You need = %.2f cal",BMR*1.9);


}
    }
    else {
        system("cls");

        printf ("Let's test your BMI..\n");

        calculateBMI();


}
    return 0;



}

int main()
{
    int a,age,i;

    char name[50],password[16],confirm[16];

    printf ("Welcome to our BMR & BMI test...\n");
    sleep (1);
    printf ("Do you have an account?\n");
    printf ("1. Yes\n2. No \n");
    scanf ("%d",&a);
    printf("\n");

    if(a==1){
            system("cls");
        printf ("Let's log in..\n");
        sleep (1);
        printf ("Enter your name:");
        scanf ("%s",name);
        printf ("Enter your password:");
        scanf ("%s",password);

        if (strlen(password) < 8) {
        printf("Error: Password must be at least 8 characters long.\n");
        }
        else {
        repeatecode();
        printf ("");


sleep(2);
system ("cls");
printf("Have a healthy life.");

}

}


    else{
            system("cls");
        printf ("Let's sign up..\n");
        sleep (1);
        printf ("Enter your name: ");
        scanf ("%s",name);
        printf ("Create your password: ");
        scanf ("%s",password);
        if (strlen(password) < 8) {
        printf("Error: Password must be at least 8 characters long.\n");
        }
        else {
        printf ("Confirm your password: ");
        scanf ("%s",confirm);
        if (strlen(confirm) < 8) {
       printf("Error: Password must be at least 8 characters long.\n");
        }
          else {
            if (strcmp(password, confirm) == 0){

        repeatecode();
        printf ("");

sleep(2);
system ("cls");
printf("Have a healthy life.");

}

        else{
            printf ("Please try again");
        }
    }
    }
    printf("\n");



    return 0;
}
}

