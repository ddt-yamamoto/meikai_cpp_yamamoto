/**
*ゲームの初期化処理を行う関数
*@author Kenta Yamamoto
*@since 2018-10-18
*/
void initializeGame();

/**
*正解を設定する関数
*@author Kenta Yamamoto
*@since 2018-10-18
*/
void generateAnswer();

/**
*回答と正解とを比較して結果を返す関数
*@param argumentInputInt 回答値
*@return answerDifference 正答値と回答値の差を返却
*@author Kenta Yamamoto
*@since 2018-10-18
*/
int judgeAnswer(int argumentInputAnswer);

/**
*回答回数をカウントし、回数切れかどうかを判定する関数
*@return TRUE...回数残あり / FALSE...回数切れ
*@author Kenta Yamamoto
*@since 2018-10-18
*/
bool countLimit();

/**
*回答回数を返却する関数
*@return answerTimes 回答回数
*@author Kenta Yamamoto
*@since 2018-10-18
*/
int displayAnswerTimes();

/**
*入力を促すメッセージを出力する関数
*@author Kenta Yamamoto
*@since 2018-10-18
*/
static void promptInput();

/**
*回答の入力をさせ、入力値を返す関数
*@return inputValue 入力値
*@author Kenta Yamamoto
*@since 2018-10-18
*/
int inputAnswer();

/**
*ゲームをもう一度繰り返すか確認する関数
*@return retryAnswerBool 続行確認の結果
*@author Kenta Yamamoto
*@since 2018-10-18
*/
bool confirmRetry();

/**
*回数切れの際に正解の値を表示する関数
*@param correctAnswer 正解の値
*@author Kenta Yamamoto
*@since 2018-10-18
*/
void displayCorrectAnswer(int correctAnswer);

// 当てるべき数の最大値の宣言
extern const int MAX_NUMBER;