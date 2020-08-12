  #include"heading.c";
  #include<string.h>
  #include<conio2.h> //comment

  void info()
    {
         int initial_fg_color = getfgcolor();
         int initial_bg_color = getbgcolor();
         char address[100], name[100], c_name[100], gender[100], immigrant[100];
         int age;
         setfgcolor( light_gray );
         printf("*** Information Query ***\n\n");
         setfgcolor( initial_fg_color );
         printf("Name: ");
         scanf("%s", name);
         printf("Gender: ");
         scanf("%s", gender);
         printf("Age: ");
         scanf("%d", &age);
         printf("Address(Division): ");
         scanf("%s", address);
         printf("Immigrant Status: ");
         scanf("%s", immigrant);
         if(!strcmp(immigrant, "Yes")|| !strcmp(immigrant, "yes"))
            {
                    printf("Continent Name: ");
                    scanf("%s", c_name);
                if(!strcmp(c_name, "Asia") || !strcmp(c_name, "asia"))
                    {
                        setfgcolor(light_gray);
                        printf("\t Statistics\n");
                      setfgcolor( light_blue );
                        printf("Continent Name\tCases\n");
                        setfgcolor( light_red );
                        printf("Asia - 		520,723\n");
                        setfgcolor( initial_fg_color );
                        printf("Europe -	1,373,567\n");
                        printf("America-   	1,187,036\n");
                        printf("Ocenia- 	8,347\n");
                        printf("Africa- 	39,786\n");
                    }
                   if(!strcmp(c_name, "Europe") || !strcmp(c_name, "europe"))
                    {
                        setfgcolor(light_gray);
                        printf("\tStatistics\n");
                      setfgcolor( light_blue );
                        printf("Continent Name\tCases\n");
                        setfgcolor( initial_fg_color );
                        printf("Asia - 		520,723\n");
                        setfgcolor( light_red );
                        printf("Europe -	1,373,567\n");
                        setfgcolor( initial_fg_color );
                        printf("America-   	1,187,036\n");
                        printf("Ocenia- 	8,347\n");
                        printf("Africa- 	39,786\n");
                    }
                   if(!strcmp(c_name, "America") || !strcmp(c_name, "america"))
                    {
                        setfgcolor(light_gray);
                        printf("\tStatistics\n");
                      setfgcolor( light_blue );
                        printf("Continent Name\tCases\n");
                        setfgcolor( initial_fg_color );
                        printf("Asia - 		520,723\n");
                        printf("Europe -	1,373,567\n");
                        setfgcolor( light_red );
                        printf("America-   	1,187,036\n");
                        setfgcolor( initial_fg_color );
                        printf("Ocenia- 	8,347\n");
                        printf("Africa- 	39,786\n");
                    }
                    if(!strcmp(c_name, "Ocenia") || !strcmp(c_name, "ocenia"))
                    {
                        setfgcolor(light_gray);
                        printf("\tStatistics\n");
                        setfgcolor( light_blue );
                        printf("Continent Name\tCases\n");
                        setfgcolor( initial_fg_color );
                        printf("Asia - 		520,723\n");
                        printf("Europe -	1,373,567\n");
                        printf("America-   	1,187,036\n");
                        setfgcolor( light_red );
                        printf("Ocenia- 	8,347\n");
                        setfgcolor( initial_fg_color );
                        printf("Africa- 	39,786\n");
                    }
                if(!strcmp(c_name, "Africa") || !strcmp(c_name, "africa"))
                    {
                        setfgcolor(light_gray);
                        printf("\tStatistics\n");
                        setfgcolor( YELLOW );
                        printf("Continent Name\tCases\n");
                        setfgcolor( initial_fg_color );
                        printf("Asia - 		520,723\n");
                        printf("Europe -	1,373,567\n");
                        printf("America-   	1,187,036\n");
                        printf("Ocenia- 	8,347\n");
                        setfgcolor( light_red );
                        printf("Africa- 	39,786\n");
                        setfgcolor( initial_fg_color );
                    }
                    setfgcolor( light_cyan );
                    printf("\n\n***Dear %s, Count the number of symptoms you have***", name);
                    setfgcolor( initial_fg_color );
                    symptoms(age, address);
            }
            else
            {
                        setfgcolor(light_gray);
                            printf("\tStatistics\n");
                        setfgcolor( light_blue );
                            printf("Continent Name\tCases\n");
                        setfgcolor( initial_fg_color );
                         printf("Asia - 		520,723\n");
                         printf("Europe -	1,373,567\n");
                         printf("America-   	1,187,036\n");
                         printf("Ocenia- 	8,347\n");
                         printf("Africa- 	39,786\n");
                    setfgcolor( light_cyan );
                     printf("\n\n***Dear %s, Count The Number of Symptoms You Have***", name);
                    setfgcolor( initial_fg_color );
                     symptoms(age, address);
            }
    }

    void symptoms(int age, char address[])
     {
        int initial_fg_color = getfgcolor();
         int initial_bg_color = getbgcolor();
            char emergency[100];
            setfgcolor(light_cyan);
            printf("\n\t<<Emergency Factor>>\n");
            setfgcolor(LIGHTGRAY);
            printf(" ! Trouble Breathing\n ! Persistent chest pain or pressure\n ! New Confusion\n ! Blue lips or face\n");
            setfgcolor(LIGHTRED);
            printf("Do you have any of these emergency signs?\n");
            scanf("%s", emergency);
                if(!strcmp(emergency, "Yes") || !strcmp(emergency, "yes") )
                    {
                        danger(address);
                    }
        int t_symptomps;
        printf("\n\n Symptoms:\n");
        setfgcolor(initial_fg_color);
        printf("  Common Symptoms::\n");
        printf("\t# Fever\n\t# Tiredness\n\t# Dry Cough\n\n");
        printf("  Some people may Experience::\n");
        printf("\t| Aches and Pains\n\t| Nasal Congestion\n\t| Runny Nose\n\t| Sore Throat\n\t| Diarrhoea\n\n");
         printf("The number of Symptoms You Have-");
         scanf("%d", &t_symptomps);
         setfgcolor(initial_fg_color);
         if(t_symptomps>=3)
            {
                printf("\tYou need to be stay in Quarantine\n\t\tHere are the quarantine hacks.\n");
                quarantine();
            }
          else
            {
                printf("\tYou're Fine with the grace of almighty, But you've to obey the rules and regulations\n\t\tHere are the rules and regulations.\n");
                regulations();
            }
     }

    void danger(char address[])
        {
            int initial_fg_color = getfgcolor();
         int initial_bg_color = getbgcolor();
            setfgcolor(light_cyan);
            printf("Please Contact with the nearest Hospital of %s division soon", address);
           printf("\n For more information call 999");
           setfgcolor(GREEN);
           printf("\n May Almighty Save you");
        setfgcolor(initial_fg_color);
        }

    void quarantine()
     {
         setfgcolor(light_magenta);
         printf("\n\tSelf Quarantine Hacks-\n");
         setfgcolor(LIGHTGREEN);
         printf("  1. Allocate a separate room\n");
         printf("  2.Maintain at least one meter distance\n");
         printf("  3. should not interact with any visitors\n");
         printf("  4. Wash both hands for at least 20 seconds at a time\n");
         printf("  5. Use a separate bathroom\n");
         printf("  6. Don't touch facial part without washing hands \n");
     }

    void regulations()
        {
            printf("\n##Cautions to avoid CORONA##\n");
           setfgcolor(light_red);
            printf(" * Avoid large events and mass gatherings\n");
            printf(" * Wear a cloth face mask in public areas\n");
            printf(" * Maintain at least 2 meter distance with people outside\n");
            printf(" * Wash both hands for at least 20 seconds at a time\n");
            printf(" * Cover your mouth and nose with your elbow or a tissue when you cough or sneeze\n");
            printf(" * Avoid touching your eyes, nose and mouth.\n");
            printf(" * Clean and disinfect surfaces you often touch on a daily basis.");
        }
        void statistics()
         {
         int initial_fg_color = getfgcolor();
         int initial_bg_color = getbgcolor();
                        setfgcolor(WHITE);
                            printf("\tStatistics\n");
                        setfgcolor( initial_fg_color );
                        setfgcolor(YELLOW);
                        printf("\t***World stats***\nCountry Affected- 212  Confirmed Cases- 3.5M  Recovered- 1.1M Death-.24M");
                         setfgcolor(GREEN);
                         printf(" \n  >>Stats of Bangladesh<<\n");
                         printf("Confirmed- 9,455 Recovered- 1,063	Deaths- 177\n");
                         setfgcolor(initial_fg_color);
                         printf("\t<<<Statistics by Continent>>>\n");
                         setfgcolor( GREEN );
                        printf("Continent Name\tCases\t\tRecovered\tDeaths\n");
                         printf("Asia - 		520,723\t\t287,143\t\t19,453\n");
                         printf("Europe -	1,373,567\t535,895\t\t139,733\n");
                         printf("America-   	1,187,036\t284,591\t\t84,230\n");
                         printf("Ocenia- 	8,347\t\t7,165\t\t115\n");
                         printf("Africa- 	39,786\t\t14,878\t\t1,764\n");
         }

int main()
{
    str();
    info();
    int menu;
    setfgcolor(WHITE);
    printf("\n\n\t||| Info House |||\n");
    printf("\n 1. Self Quarantine Hacks");
    printf("\n 2. Regulations to Avoid COVID-19");
    printf("\n 3. Statistical Information");
    printf("\n 0. Exit");
    printf("\n\tInput a choice\n\n");
    scanf("%d", &menu);
    switch(menu)
     {
         case 0: break;
         case 1: quarantine(); break;
         case 2: regulations();break;
         case 3: statistics(); break;

         default: printf("Invalid choice");
     }
     setfgcolor(MAGENTA);
     printf("\t\tThanks for giving your Valuable Time\n\t\t\tStay Home, Stay Safe\n");
}
