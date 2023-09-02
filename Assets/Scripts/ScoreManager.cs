using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class ScoreManager : MonoBehaviour
{
    public static ScoreManager instance;

    public TMP_Text scoreTMP;
    public TMP_Text highscoreTMP;

    int score = 0;
    int highscore = 0;

    private void Awake()
    {
        instance = this;
    }



    // Start is called before the first frame update
    void Start()
    {
        highscore = PlayerPrefs.GetInt("highscore", 0);
        scoreTMP.text = score.ToString();
        highscoreTMP.text = highscore.ToString();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void AddPointsBigBlock()
    {
        score += 110;
        scoreTMP.text = score.ToString();

        if (highscore < score)
        {
            PlayerPrefs.SetInt("highscore", score);
        }
    }
    public void AddPointsSmallBlock()
    {
        score += 30;
        scoreTMP.text = score.ToString();
    }
    public void MinusScoreOnWhite()
    {
        score -= 70;
        scoreTMP.text = score.ToString();
    }
    public void MinusScoreOnEnemy()
    {
        score -= 150;
        scoreTMP.text = score.ToString();
    }
}
