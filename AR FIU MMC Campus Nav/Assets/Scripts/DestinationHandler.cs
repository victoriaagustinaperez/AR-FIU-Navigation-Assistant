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
                output.text = "Carvana";
            }

            if (val == 2)
            {
                output.text = "Home Depot";
            }

        RouteHandler.handleInputData = output.text;
        return;
        }
    }
 //set text value to value set in dropdown (mirror)
 //when onclick pressed, Instantiate route with name of text
}
