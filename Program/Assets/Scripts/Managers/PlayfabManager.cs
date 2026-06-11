using UnityEngine;
using Photon.Pun;
using PlayFab.ClientModels;
using TMPro;

public class PlayfabManager : MonoBehaviourPunCallbacks
{
    [SerializeField] string verison;

    [SerializeField] TMP_InputField addressInputField;
    [SerializeField] TMP_InputField passwordInputField;

}
