using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class DestinationHandler : MonoBehaviour
{
    [SerializeField] private TMP_Text output;

    public void HandleInputData(int val) {
        {

            if (val == 0)
            {
                output.text = "";
            }

            if (val == 1)
            {
                output.text = "AS Artist Studio";
            }

            if (val == 2)
            {
                output.text = "BBS Baseball Stadium";
            }

            if (val == 3)
            {
                output.text = "CASE Computing, Arts, Sciences & Education";
            }

            if (val == 4)
            {
                output.text = "CBC College of Business Complex";
            }
            if (val == 5)
            {
                output.text = "CP Chemistry & Physics";
            }

            if (val == 6)
            {
                output.text = "CSC Campus Support Complex";
            }
            if (val == 7)
            {
                output.text = "DM Deuxieme Maison";
            }

            if (val == 8)
            {
                output.text = "EH Everglades Residence Hall";
            }
            if (val == 9)
            {
                output.text = "GC Ernest R. Graham Center";
            }

            if (val == 10)
            {
                output.text = "GL Steve and Dorothea Green Library";
            }
            if (val == 11)
            {
                output.text = "LVN Housing North";
            }

            if (val == 12)
            {
                output.text = "LVS Housing South";
            }
            if (val == 13)
            {
                output.text = "MARC Management and Advanced Research Center";
            }

            if (val == 14)
            {
                output.text = "MANGO Management and New Growth Opportunities Building";
            }
            if (val == 15)
            {
                output.text = "NP Nature Preserve";
            }

            if (val == 16)
            {
                output.text = "OBCC Ocean Bank Convocation Center";
            }
            if (val == 17)
            {
                output.text = "OE Owa Ehan";
            }

            if (val == 18)
            {
                output.text = "PC Charles Perry & Primera Casa";
            }
            if (val == 19)
            {
                output.text = "PCA Paul L. Cejas School of Architecture";
            }

            if (val == 20)
            {
                output.text = "PG1 Gold Parking Garage";
            }
            if (val == 21)
            {
                output.text = "PG2 Blue Parking Garage";
            }

            if (val == 22)
            {
                output.text = "PG3 Panther Parking Garage";
            }
            if (val == 23)
            {
                output.text = "PG4 Red Parking Garage";
            }

            if (val == 24)
            {
                output.text = "PG5 Market Station";
            }
            if (val == 25)
            {
                output.text = "PG6 Tech Station";
            }

            if (val == 26)
            {
                output.text = "PH Panther Residence Hall";
            }
            if (val == 27)
            {
                output.text = "PPFAM Patricia & Philip Frost Art Museum";
            }

            if (val == 28)
            {
                output.text = "PVH Parkview Housing";
            }
            if (val == 29)
            {
                output.text = "RB Ryder Business Building";
            }

            if (val == 30)
            {
                output.text = "RC Recreation Complex";
            }
            if (val == 31)
            {
                output.text = "RDB Rafael Diaz-Balart Hall";
            }

            if (val == 32)
            {
                output.text = "RH Ronald W. Reagan Presidential House";
            }
            if (val == 33)
            {
                output.text = "RSS Ricardo Silva Stadium";
            }

            if (val == 34)
            {
                output.text = "SASC Student Academic Success Center";
            }
            if (val == 35)
            {
                output.text = "SHC Student Health Center";
            }

            if (val == 36)
            {
                output.text = "SIPA School of International and Public Affairs";
            }
            if (val == 37)
            {
                output.text = "SS FIU Soccer Stadium";
            }

            if (val == 38)
            {
                output.text = "TAM Tamiami Hall";
            }
            if (val == 39)
            {
                output.text = "UT University Tower";
            }

            if (val == 40)
            {
                output.text = "VH Viertes Haus";
            }
            if (val == 41)
            {
                output.text = "WC Wertheim Conservatory";
            }

            if (val == 42)
            {
                output.text = "WFC Wellness & Fitness Center";
            }
            if (val == 43)
            {
                output.text = "WPAC Performing Arts Center";
            }

            if (val == 44)
            {
                output.text = "WSTC Women's Softball & Tennis Center";
            }

            RouteHandler.handleInputData = output.text;
            return;
        }
    }
 //set text value to value set in dropdown (mirror)
 //when onclick pressed, Instantiate route with name of text
}
