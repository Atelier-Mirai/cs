/*=============================================================================
初心者向け】じゃんけんゲームを作りながら覚えるHTML&JavaScript
https://qiita.com/tsuyopon_xyz/items/ed2e244da8225eb31b68 をもとに改変
=============================================================================*/

/*-----------------------------------------------------------------------------
 先頭に文字列で「'use strict';」とすることで、潜在的なバグを減らすことが出来ます。
 詳細は MDN Strict モード を参照
 https://developer.mozilla.org/ja/docs/Web/JavaScript/Strict_mode
-----------------------------------------------------------------------------*/
'use strict';

/*-----------------------------------------------------------------------------
  定数宣言
  プログラム内で共通して使える定数を宣言する。
  慣習的に定数名は全て大文字で書かれる。
-----------------------------------------------------------------------------*/
const DRAW  = 0; // 引き分け
const LOSE  = 1; // 負け
const WIN   = 2; // 勝ち

const GUU   = 0; // グー
const CHOKI = 1; // チョキ
const PAA   = 2; // パー

const FPS   = 24; // 一秒間あたり、何コマ（フレーム）を表示するか？
                 // - FPSの値が 1: 1秒に 1回手が切り替わる
                 // - FPSの値が24: 1秒に24回手が切り替わる

/*-----------------------------------------------------------------------------
  グローバル変数宣言
  プログラム内で共通して使える変数を宣言する。
  （どこで値が変化するのか、把握しずらいため、なるべく使用を避けることが好ましい）
-----------------------------------------------------------------------------*/
let isPause = true;   // グー・チョキ・パーの切替アニメを制御するための変数
                      // いずれかのボタンが押されたらtrueにして切替アニメを停止させる
let computerHandType; // コンピュータの手（グー:0、チョキ:1、パー:2 のいずれか)

/*-----------------------------------------------------------------------------
  メインルーチン
  コンピュータの手を無作為に変更し、グー・チョキ・パーの切替アニメを表示させる関数
  (C言語やJavaでは、main関数から開始する。JavaScriptでは関数名は任意。)
-----------------------------------------------------------------------------*/
function main(){
  if(!isPause){ // 停止中でなければ
    // document.getElementById('computer_hand_type') で、
    // html ファイルに書いた イメージ要素 を取得します。
    // img 変数には、<img id="computer_hand_type" src="guu.png"> が入っています。
    // src="guu.png" と書いたので、グーの画像が表示されていました。
    const img = document.getElementById('computer_hand_type');

    // ですので、取得したimg要素のsrc属性を、
    // choki.png にすれば、チョキの画像が、
    // paa.png にすれば、パーの画像を表示させることができます。
    // JavaScript では、取得した要素の属性をいろいろ操作することができます。
    // 画像を変更するには、次のように書きます。
    // img.src = "choki.png";

    // images は、じゃんけんの手の画像の集まり（配列）です。
    // images[0]で、"guu.png"を、
    // images[1]で、"choki.png"を、
    // images[2]で、"paa.png"を、指定できます。
    const images = ["guu.png", "choki.png", "paa.png"];

    // 無作為にグーチョキパーが表示されるようにしたいので、
    // このような時には「乱数」を使うと便利です。
    // JavaScriptに標準で用意されている乱数は、0から1の間の小数を得ることができます。
    // ここでは、小数ではなく整数を返す乱数を自作して、それを利用することにします。

    // 整数を返す rand 関数を、自作し、
    // 引数（ひきすう）に0と2を渡すことで、
    // 無作為に 0, 1, 2 の何かの数値を得ることができます。
    computerHandType = rand(0, 2);

    // ですので、乱数で選ばれた画像ファイル名は、次のようになります。
    const image_filename = images[computerHandType];

    // よって、以下のように書くことで、画像ファイルを都度都度変更することができます。
    img.src = images[computerHandType];

    // まとめて書くと
    // document.getElementById('computer_hand_type').src =
    //         ["guu.png", "choki.png", "paa.png"][computerHandType];
    // と書くこともできます。
  }

  // setTimeoutは、一定周期ごとに、繰り返したいときに使う関数です。
  // 1000/FPSと書いているので、FPSが1なら、1000ms(=1秒)ごとに、
  //                   FPSが24なら、1000/24=41ms(=0.041秒)ごとに、
  // changeComputerHand 関数を繰り返します。
  // 自分自身を呼び出す関数のことを「再帰関数」といいます。
  setTimeout(main, 1000 / FPS);
}

/*-----------------------------------------------------------------------------
  ボタンを押した時の処理の初期化を行う関数
-----------------------------------------------------------------------------*/
function initButton() {
  const guu_button   = document.getElementById("guu");
  const choki_button = document.getElementById("choki");
  const paa_button   = document.getElementById("paa");
  guu_button.addEventListener('click', jankenHandler);
  choki_button.addEventListener('click', jankenHandler);
  paa_button.addEventListener('click', jankenHandler);

  const play_button  = document.getElementById("play");
  play_button.addEventListener('click', resume);

  // document.getElementById("guu") で、グーボタン要素を取得します。
  // 今後、プログラム内で扱いやすいよう、guu_button という名前で呼ぶことにします。
  // (変数に代入しています）
  //
  // guu_button.addEventListener('click', jankenHandler);
  // では、click イベントを聴取する関数として jankenHandler を追加しています。

  // イベントとはなんでしょうか？
  // プログラミングにおけるイベント (英: event) は、プログラム内で発生した動作・出来事、またそれらを表現する信号である。 メッセージあるいはアクション（動作）とも呼ばれる。
  // イベントの例としてウェブブラウザにおける「ページが読み込まれた時」、「クリック動作」、「スクロール操作」などさまざまなイベントがある。(出典：Wikipedia)

  // リスナーとはなんでしょうか？
  // リスナーとは、聞く人、聞き手、聴取者、聴講生、などの意味を持つ英単語。一般の外来語としてはラジオ（局/番組）の聴取者を意味する用法が有名である。ITの分野では「リスナ」と長音を省略して表記することも多い。
  // プログラミングの分野では、何らかのきっかけに応じて起動されるよう設定されたサブルーチンや関数、メソッドなどをイベントリスナー（event listener）あるいは単にリスナーという。例えば、「マウスがクリックされると起動するよう指定された関数」のことを「マウスクリックを待ち受けるリスナー」といったように呼ぶ。(出典：IT用語辞典)

  // つまり、イベントリスナーとは「ページの読み込みやクリック動作など、ウェブページ上で行われる様々な動作を常時起動し待ち受けて(聴取し続けて)、イベントが起きた時に指定された処理を行う関数のことです。（参考：フロントエンドエンジニアを目指す! JavaScript講座(9)イベントリスナーを使用する）

  // guu_button.addEventListener('click', jankenHandler);
  // では、click イベントを聴取する関数として jankenHandler を追加しています。
  // つまり、guu_button がクリックされると、jankenHandler が実行されるようになります。

  // 以下同様に、チョキボタンがクリックされた時、パーボタンが押された時にも、
  // jankenHandler関数が実行されるように設定しています。

  // また、playボタンがクリックされた時には、resume関数を実行して、
  // じゃんけんの切替アニメが再開(resume)されるようにしています。
}

/*-----------------------------------------------------------------------------
  じゃんけんの勝ち負けの結果を表示する関数
-----------------------------------------------------------------------------*/
function jankenHandler(event) {
  // playボタン要素を取得します。
  const play_button  = document.getElementById("play");
  // playボタンの表示を「開始」から「もう一度」に変更します。
  play_button.innerText = "もう一度";
  // 切替アニメの停止処理を行います。
  pause();

  // プレイヤーのじゃんけんの手を取得します。
  // event.target で、イベントの呼び出し元の要素を取得することができます。
  // グーボタン、チョキボタン、パーボタン、どのボタンをクリックしても、
  // このjankenHandler関数が呼ばれるように設定しました(addEventListener)
  // このままでは、プレイヤーがどれかのボタンを押したことはわかるのですが、
  // どのボタンが押されたことに応答して、このjankenHandler関数が呼ばれたのかを知りたいです。
  // event.target は、イベントの呼び出し元の要素を取得することができます。
  // つまり、グー、チョキ、パー、どのボタンが押されたのかを知ることができます。
  // event.target.value と書くと、htmlで、
  // <button id="guu"   value="0"></button>
  // と書いていた、
  // このvalue属性の値"0"を取得することができます。
  // parseInt は、文字列としての"0"を解析(parse)し、整数値としての0にする関数です。
  // これで、グーボタンを押した時は0、チョキボタンを押した時は1, パーボタンを押した時は2が、
  // playerHandType変数に格納されます。
  const playerHandType   = parseInt(event.target.value);

  // judge は、プレイヤーの手とコンピュータの手を与えることで、
  // 勝敗の結果を返してくれる関数です。
  // 引き分けなら0 , 負けなら1, 勝ちなら2が返ります。
  const result = judge(playerHandType, computerHandType);

  // if文は、条件に応じた処理を行う際に記述します。
  // 勝敗の結果が、resultという変数に入っていますので、
  // resultとどの数字が等しいかを調べていきます。

  // if (result === 0) {
  //   alert('引き分けです!');
  // } else if (result === 1) {
  //   alert('あなたの負けです!');
  // } else {
  //   alert('あなたの勝ちです!');
  // }

  // if (result === 0)と書くと、resultが0と等しいか否かを比較することができます。
  // そして、プログラムの先頭で次のように定数を定義したことを思い出してください。
  // const DRAW  = 0; // 引き分け
  // const LOSE  = 1; // 負け
  // const WIN   = 2; // 勝ち
  // 0, 1, 2 は、コンピュータにとっては分かりやすいですが、
  // 人にとって、より分かりやすくするために、
  // 0 は DRAW(引き分け)、
  // 1 は LOSE(負け)、
  // 2 は WIN(勝ち)と名前を付けています。
  // 名前を付けることで、0, 1, 2 の代わりに次のように書くことができます。

  if (result === DRAW) { // === は「等価演算子」です。「等しい」ことを調べます。
    alert('引き分けです!'); // resultと0が等しかった時に、行いたい処理を記述します。
                          // ここでは、「引き分け」とアラートを表示します。
  } else if (result === LOSE) { // else はそうでなければ、という意味です。
                             // 0 と等しくなかった時に、1と等しいか、調べています。
    alert('あなたの負けです!'); // 1 と等しかったら、「負け」と表示します。
    updateScore(LOSE);       // 負けた数を更新します。
  } else {                   // else は他のいずれにも該当しなかった際の処理を記します。
    alert('あなたの勝ちです!'); // 引き分けでも負けでもない、つまり「勝ち」と表示します。
    updateScore(WIN);        // 勝った数を更新します。
  }
}

/*-----------------------------------------------------------------------------
  プレイヤーの手とコンピュータの手が与えられると、
  0: 引き分け 1: 負け 2: 勝ち を返す関数
  参考 https://staku.designbits.jp/check-janken/
-----------------------------------------------------------------------------*/
function judge(playerHandType, computerHandType) {
  return (playerHandType - computerHandType + 3) % 3;
}

/*-----------------------------------------------------------------------------
  勝敗結果を更新します。
  引数resultは、勝敗の結果が渡されています。
-----------------------------------------------------------------------------*/
function updateScore(result) {
  // html で、<span id="win">0</span> と書いていました。
  // document.getElementById("win");と書くことで、
  // この win要素を取得し、win変数に格納します。
  const win  = document.getElementById("win");
  const lose = document.getElementById("lose");

  // 勝ちの場合、負けの場合、それぞれに応じて、対局結果を更新します。
  if (result === WIN) { // 勝ちの場合
    // win.innerTextで、win要素のテキストを書き換えることができます。
    // win.textContentで、<span id="win">0</span>と書いていた「0」が取得できます。
    // parseIntで、文字列の"0"を解析(parse)し、数値としての0にします。
    // 一般にプログラミングでは、文字列としての"0"と、数値としての"0"は区別されます。
    // 例：
    //   "0" + "1" // =>  "01" と文字列の追加が行われます。
    //    0  +  1  // =>   1  と、数値演算が行われます。。
    // + 1 することで、勝った数を一つ増やします。
    win.innerText = parseInt(win.textContent) + 1;
  } else if (result === LOSE) {
    lose.innerText = parseInt(lose.textContent) + 1;
  }
}

/*-----------------------------------------------------------------------------
  切替アニメを停止し、もう一度、じゃんけんを行います
-----------------------------------------------------------------------------*/
function pause(){
  isPause = true;
}

/*-----------------------------------------------------------------------------
  切替アニメを再開し、もう一度、じゃんけんを行います
-----------------------------------------------------------------------------*/
function resume(){
  isPause = false;
}

/*-----------------------------------------------------------------------------
  乱数を返す関数
  rand(1, 6)と呼び出せば、1, 2, 3, 4, 5, 6 とサイコロのような、
  rand(0, 2)と呼び出せば、0, 1, 2 と グーチョキパー の乱数を返します。
-----------------------------------------------------------------------------*/
function rand(min, max){
  // Math.random()は、標準で用意されている乱数を返す関数です。
  // 0から1の範囲の乱数を返します。
  // 例)
  //   0.9200533064823014
  //   0.5017996980638613
  //   0.15088182883224843
  // 1, 2, 3, 4, 5, 6 とサイコロのような乱数を返すには、
  //   0.9200533064823014  * 6 = 5.520319838893808
  //   0.5017996980638613  * 6 = 3.0107981883831676
  //   0.15088182883224843 * 6 = 0.9052909729934906
  // と、6倍します。
  // Math.floor()は、床関数と呼ばれ、小数点以下を切り捨てる機能を持ちます。
  // (Math.ceil() 天井関数は、切り上げを、Math.round() で四捨五入できます)
  //   0.9200533064823014  * 6 = 5.520319838893808  => 5
  //   0.5017996980638613  * 6 = 3.0107981883831676 => 3
  //   0.15088182883224843 * 6 = 0.9052909729934906 => 0
  // 0から5になりました。1から6にしたいので、一つ増やして完成です。
  //   0.9200533064823014  * 6 = 5.520319838893808  => 5 => 6
  //   0.5017996980638613  * 6 = 3.0107981883831676 => 3 => 4
  //   0.15088182883224843 * 6 = 0.9052909729934906 => 0 => 5
  // return 文を使うと、計算結果を、呼び出し元へ返すことができます。
  return Math.floor(Math.random() * (max - min + 1)) + min;
}

/*-----------------------------------------------------------------------------
  実際の処理の開始
-----------------------------------------------------------------------------*/
initButton(); // ボタンの初期化を行う。
pause();      // 切替アニメを停止状態にする。
main();       // 切替アニメを実行待ちにする。
              // 開始ボタンが押されると切替アニメが実行される。
