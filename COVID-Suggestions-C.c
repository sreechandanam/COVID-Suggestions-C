//COVID treatment flowchart
#include<stdio.h>
#include<string.h>


 struct patient{
         int s_no;
         char name[20];
         int age;
        };
 int main()
{
int n;
printf("Enter no of patients:\n");
scanf("%d",&n);
struct patient p[n];
int i=0;
while(i<n)
{  

printf("\nEnter the patient's aadhar:");
scanf("%d",&p[i].s_no);
printf("Enter the patient's name:");
scanf("%s",&p[i].name);
printf("Enter the patient's age:");
scanf("%d",&p[i].age);
printf("  \n\n\033[0;36m 𝓦𝓔𝓛𝓒𝓞𝓜𝓔 🙏 %s",&p[i].name);
char tem;
scanf("%c",&tem);

char answer = '\0';
int f,c,h;
    printf("\n\n  \033[0;35m have you took the test? Y/N: ");
    scanf("%c", &answer);

    if ( answer == 'Y' || answer == 'y' )
    {
         char result='/0';
   
    // P/p represents=positive 
    // N/n represents=negative
   printf("  \n\033[0;37m what is your test results?? (P/N):");
   scanf("%c",&result);
   scanf("%c",&result);
   
     if(result == 'P' || result == 'p'){
       printf("\033[0;33m Follow the procedure for cure!! \n Home Isolation with:\n___________________________ \n Paracetamol 650mg(SOS/4 times max) \n Ivermectin 12mg 1-0-0x3/5 days \n Zincovit 1-0-1 & Vitamin C 1-0-1 \n Liquids 2-5-3 litres/day \n Fever charting and w/f pulseO2 \n Be vigilant for comorbid & aged patient \n No Oral steriods in early phase\n✧✧✧✧✧✧✧✧✧✧✧✧✧✧✧✧✧✧✧ \n DAY 1-4 \n Still your condition is not well on 5th day");
       printf("\n\nCheck your temperature!!");
       
        int temp; 
        printf("\n\n \033[0;37m  Enter temperature value:");
        scanf("%d",&temp);
        if(temp>=100){
         printf("\033[0;31m𝗧 𝗔 𝗞 𝗘   𝗕 𝗟 𝗢 𝗢 𝗗   𝗧  𝗘 𝗦 𝗧");
            char answer1[12] ;
float cbc,crp,d;
    printf("\n \033[0;37m  enter your CBC value:");
          scanf("%f",&cbc);
        printf(" \033[0;37m  enter your CRP value:");
           scanf("%f",&crp);
         printf("\033[0;37m  enter your D -dimer value: ");
           scanf("%f",&d);
         printf(" \033[0;37m  enter LDH (normal or above normal):");
           scanf("%s",&answer1);
      printf("\n \033[0;33m here are your details CBD:%.2f,CRP:%.2f,D-DIMER:%.2f,LDH:%s",cbc,crp,d,answer1);

             if(cbc>=3.5 & crp>=5 & d>=2 && strcmp(answer1, "abovenormal")==0|| strcmp(answer1, "AboveNormal")==0)
       {
        printf("\n \033[0;31m GET ADMITTED IN HOSPITAL");
       } 

              else if( cbc<3.5 & crp<5 & d<2 && strcmp(answer1, "normal")==0|| strcmp(answer1, "Normal")==0)
                 { 
                   int pulse_oxygen;
    printf("Close observation!! \n    Pulse oxygen (SpO2) monitoring \n           Strict bed rest");
    printf("\n\n\n Post 48 hours!! \n        DAY 7 \n  (Repeat CBC, CRP, D-Dimer, LDH)");
    
    
        printf("\n Check your oxygen level!!");
        
        printf("\n\n \033[0;37m Enter your oxygen level:");
        scanf("%d",&pulse_oxygen);
        
        
           char b_report= '0';
           // H/h=high & L/l= low
           printf(" \033[0;37m What was your blood report?? (H/L): ");
           scanf("%c", &b_report);
           scanf("%c", &b_report);
   
           if((b_report == 'H' || b_report == 'h') && pulse_oxygen <= 94){
                printf(" ADMIT in hospital - oxygen Bed \n");
           }
          else if((b_report != 'H' || b_report != 'h') && pulse_oxygen <= 94){
                printf(" follow physician \n");}
          else if((b_report != 'H' || b_report != 'h') && pulse_oxygen > 94){
                printf(" follow physician \n");
           } 
         
           else if((b_report =='H' || b_report == 'h') && pulse_oxygen >94)
{
                int chest,ct;
 printf(" \033[0;31m𝘁𝗮𝗸𝗲 𝘁𝗵𝗲 𝗰𝗵𝗲𝘀𝘁 𝘀𝗰𝗮𝗻 ");
  printf("\nenter your HRCT  value");
          scanf("%d",&chest); 
 printf("\033[0;37m \nenter your CT seviarity  value");
          scanf("%d",&ct);
   if(chest>15 & ct>15||ct<30)
 {
      printf("\n \033[0;31m ADMISSION -ICU");
                     }
   else if(chest>8|| chest<15 & ct>8||ct<15)
    {
        printf("\n \033[0;31m LET PHYSICIAN TO DECIDE BASED ON YOUR CLINICAL DETAILS");
}
    else if(chest>1|| chest<8 & ct>1||ct<8)
      {
        printf("\n \033[0;31m CHECK YOUR SPO2 LEVEL FREQUENTLY BE TOUCH WITH PHYSICIAN");
   }
     printf("\n mr/ms %s",&p[i].name,"Hope everything went well");
            }
                  }
        }
        else{
            printf("No symptoms/ mild symptoms \n Home Isolation with: \n Paracetamol 650mg(SOS/4 times max) \n Ivermectin 12mg 1-0-0x3/5 days \n Zincovit 1-0-1 & Vitamin C 1-0-1 \n Liquids 2-5-3 litres/day \n Fever charting and w/f pulseO2 \n Be vigilant for comorbid & aged patient \n No Oral steriods in early phase\n");
        }
         
     }
         
    else{
        printf("Isolate yourself for 2 to 3 days you can take the general mediactions and home remedies with breathing exercises");}
        


    }
    else
    {
        printf("here is your test suggestor enter the given details");
         printf("\nfever(enter1-low|enter2-moderate|enter3-high):");
          scanf("%d",&f);
        printf("cold(enter1-low|enter2-moderate|enter3-high):");
           scanf("%d",&c);
         printf("headache(enter1-low|enter2-moderate|enter3-high):");
           scanf("%d",&h);
      printf("\nhere are your details fever:%d,cold%d,headache%d",f,c,h);

             if(f==3 & c==3 & h==3)
       {
        printf("\ntake test urgently 😨");
       }
        
       else if(f==3 & c==3 & h==1 || f==3 & c==3 & h==2 || f==3 & c==1 & h==3 ||f==3 & c==2 & h==3 ||f==1 & c==3 & h==3 ||f==2 & c==3& h==3 ||f==2 & c==2 & h==3 ||f==2 & c==3 & h==2 ||f==3 & c==2 & h==2 )
           {
             printf("\n your condition reflects covid symptoms take the test ");
            }
              else if (f==2 & c==2 & h==2)
       {
        printf("\n your condition is moderate taking test is prescribed 😔 ");
       }
         else if(f==1 & c==2 & h==3 || f==3 & c==2 & h==1 || f==2 & c==1 & h==3 ||f==1 & c==3 & h==2||f==3 & c==1 & h==2||f==2 & c==3 & h==1| c==2 )
           {
             printf("\n no need to worry that much but some of your symptoms are some what reflects covid taking test is prescribed");
             }
     
      else if(f==1 & c==1 & h==1   )
           {
             printf("\n your condition is normal it may be genral sickness be in home quarintine every thing will be fine  😀");
             }
    else if(f==1 & c==1 & h==2 || f==1 & c==1 & h==3 || f==1 & c==2 & h==1 ||f==1 & c==3 & h==1 ||f==2 & c==1 & h==1 ||f==3 & c==1& h==1 ||f==2 & c==2 & h==1 ||f==2 & c==1 & h==2 ||f==1 & c==2 & h==2 )
           {
             printf("\n you have only one parameter high so take medication for that one ");
            }
     printf("\n \033[0;32m Hope everything went well mr/ms %s",&p[i].name); 

printf("\n those who have to take test can follow :-\n \033[0;33m link to know availability of tests in your place visit-https://www.mygov.in/covid-19\n\n\n to take a self test you can buy from-https://www.flipkart.com/mylab-coviself-covid-19-rapid-antigen-self-test-kit/p/itm4d34ea09cad97?pid=DTGG3AQ7X9XBSUZY&lid=LSTDTGG3AQ7X9XBSUZYAOGLHJ&marketplace=FLIPKART&q=covid+rapid+test+kit&store=hlc%2F20m%2Fled%2Fm3n&srno=s_1_1&otracker=AS_QueryStore_OrganicAutoSuggest_1_4_na_na_na&otracker1=AS_QueryStore_OrganicAutoSuggest_1_4_na_na_na&fm=SEARCH&iid=127ebb9b-0829-475d-aebd-70b3b1a8e5a3.DTGG3AQ7X9XBSUZY.SEARCH&ppt=hp&ppn=homepage&ssid=kom298boow0000001625893582738&qH=9e6e0ad6daf01d2d");
 
    }
 i++;           
 }                 
          printf("\n\n\n for god physicians visit 👩‍⚕👨‍⚕:-https://doctor.medibuddy.in/?gclid=EAIaIQobChMI7vnkxbPb8QIVU1tgCh3LCAh6EAAYASAAEgKls_D_BwE");
          printf("\n\n\n  \033[0;34m 𝓦𝓔𝓐𝓡 𝓜𝓐𝓢𝓚 😷");
          printf("\n\n\n \033[0;34m 𝓣𝓐𝓚𝓔 𝓥𝓐𝓒𝓒𝓘𝓝𝓔 𝓐𝓣 𝓨𝓞𝓤𝓡 𝓣𝓤𝓡𝓝 💉");
         
       return 0;
}
