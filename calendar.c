//
//  calendar.c
//  Ubung3
//
//  Created by Andry Valderrama on 02.12.16.
//  Copyright © 2016 Andry Valderrama. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calendar.h"
#include "datastructure.h"
#include "menu.h"
#include "tools.h"
#include "datetime.h"

int countAppointments = 0;
TAppointment Calendar[MAX];

void createAppointment()
{
    if(countAppointments <= MAX)
    {
        TAppointment appointment;
        printf("\nErfassung eines neuen Termins\n");
        printLine('=', 29);

        //getDate("\n\nDatum: ", &appointment.datum);
        //getTime("\nUhrzeit: ", &appointment.zeit);
        getText("\nBeschreibung: ", 100, &appointment.Description, 1);
        //getText("\nOrt: ", 15, &appointment.Place, 0);

        //appointment.Duration = (TTime *) malloc(sizeof(TTime));
        //getTime("\nDauer: ", appointment.Duration);

        Calendar[countAppointments] = appointment;
        countAppointments++;
    }else {
        printf("Speicher ist Voll");
    }
}

void editAppointment()
{
    printf("Termin bearbeiten");
}

void deleteAppointment()
{
    printf("Termin loeschen");
}

void searchAppointment()
{
    printf("Termin suchen");
}

void sortCalendar()
{

}

void listCalendar(TAppointment *appointment)
{
    int i = 0;

    printf("Liste der Termine\n");
    printLine('=', 17);
    printf("\n\n");

    for(i = 0; i < countAppointments; i++) {
        TAppointment *appointment = &Calendar[i];
        printLine('=', 117);
        printf("\n");

        //printf("%i, ",appointment.datum.Wochentag);
        //printf("%d.%d.%d\n", appointment->datum.Day, appointment->datum.Month, appointment->datum.Year);
        //printLine('_', strlen(printDate()));

        //printDate(appointment->datum);
        //printTime(*appointment.Duration);
        printf("| %s\t", appointment->Description);

    /* printf("%s\t\t", appointment->Place );
     printf("| %s\t", appointment->Desciption);  */

    //printTime(*appointment.Duration);
        printf("\n");
    }
    if (i == 0 || i < countAppointments) {
        printf("Zurzeit gibt kein Termin zur Verfügung!!!\n");
    }
    waitForEnter();
}

void exitProg()
{
    printf("Programm beendet!\n");
    exit(0);
}
