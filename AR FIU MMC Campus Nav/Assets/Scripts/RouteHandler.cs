using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class RouteHandler : MonoBehaviour
{
    [SerializeField] private List<GameObject> routes;
    public static string handleInputData;

    void Start()
    {
        foreach (GameObject route in routes)
        {
            if (handleInputData == route.name)
                {
                    route.SetActive(true);
                }
                else
                {
                    route.SetActive(false);
                }
        }
    }
}
