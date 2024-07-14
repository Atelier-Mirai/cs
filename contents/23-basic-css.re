= 初めてのCSS

//abstract{
  この章では、じゃんけんゲームの意匠を整えてるために用いる@<code>{CSS}の基礎について学びます。また、利用者が快適に使えるよう、@<code>{UI/UX} の観点をご紹介します。
//}

これまで、文書構造をHTMLで、利用者の入力に応じた処理をJavaScriptで書いてきました。
これにより、じゃんけんゲームの大まかな機能の実装は完了いたしました。

せっかくのじゃんけんゲームですから、@<code>{CSS}を使って綺麗に意匠も整えて、より楽しめるゲームにしていきたいところですので、@<code>{CSS} の基礎について学びましょう。また、@<code>{UI/UX} の観点を知り、どのように意匠を整えると良いか、考えていきましょう。

== ユーザインタフェース (UI) と 利用者体験(UX)

ユーザインタフェース (@<code>{User Interface})は「ユーザーインターフェイス」とも表記されます。どのような意味か、いつものように「IT用語辞典」を参照し、確認してみましょう。

//quote{
  ユーザーインターフェースとは、機器やソフトウェア、システムなどとその利用者の間で情報をやり取りする仕組み。システムから利用者への情報の提示・表示の仕方と、利用者がシステムを操作したり情報を入力したりする手段や方式、機器、使い勝手などの総体を表す。

  ディスプレイ装置などの画面表示、マイクやスピーカー、イヤフォンによる音声入出力、キーボードなどによる文字入力、マウスやペンタブレット、タッチパネルなどによる（画面上の）位置や方向の入力、カメラなどによる画像・映像入力、およびこれらの組み合わせによって構成されることが多い。
//}

とあります。人とコンピュータの間にある窓口であり、利用者がコンピュータの状態を把握し操作しやすいよう、画面上には、アイコンやメニュー、ボタンといった操作要素が表示されています。利用者はこれらのアイコンをクリックすることで、コンピュータを操作できます(@<code>{GUI,Graphical User Interface})。

じゃんけんの絵を表示し、入力用のボタンを用意することで、快適なユーザインタフェースを提供し、便利に使ってもらえるようにしましょう。

//blankline
また昨今では「利用者体験(@<code>{User eXperience})」も重視されるようになってきました。
こちらも「IT用語辞典」を参照し、確認してみましょう。

//quote{
UXとは、ある製品やサービスとの関わりを通じて利用者が得る体験およびその印象の総体。使いやすさのような個別の性質や要素だけでなく、利用者と対象物の出会いから別れまでの間に生まれる経験の全体が含まれる。

対象物の機能や性能、内容、使い勝手といった性質そのものよりも、それを通じて利用者が得られる経験がどのようなものであるかに着目する概念である。対象物の持つ特性だけでは決まらず、利用者側の属性や個性、利用者を取り巻く環境や利用時の状況などにも強く影響を受けるため、作り手側ですべてを制御することは難しい。
//}

//blankline

「作り手側ですべてを制御することは難しい」とあるように、良い「利用者体験」の実現はなかなか大変なものがございますが、できる限りのこととして、利用者に気持ちよく楽しかったと感じてもらえるよう、完成形は次のようにしていきましょう。

//blankline
//sideimage[janken_kansei][60mm][sep=5mm,side=R]{

  1. コンピュータが出した手を表示する機能がありませんでしたので、グーチョキパーのいずれなのかを示すアニメーション機能を実装します。
  2. プレイヤーが出す手を、0, 1, 2 と、数字で入力するのではなく、グーチョキパーの3つのボタンを押すことで、選べるようにします。
  3. ○勝○敗と、今までの勝敗を表示できるようにします。
  4. 開始ボタンなどを分かりやすくするために、色を付け、大きくします。

//}

== 完成形のHTML

 @<code>{UI/UX} に考慮し、次のように @<file>{index.html}を更新します。
これが完成形のHTMLです。

//list[][index.html][file=source/index.html, 1]{
//}

いろいろな変更が追加されていますので、大まかに解説していきます。

=== ビューポート(視点)の設定
ビューポート(視点)を設定しています。ウェブサイトを見るための様々な端末(デバイス)がありますが、様々な画面幅の端末でも綺麗に見られるにするための記述です。

//list[][][9]{
<!-- ビューポート(視点)を設定し、iPhoneでも綺麗に見られるようにします。 -->
<meta name="viewport" content="width=device-width">
//}



=== スタイルシートの読み込み
//list[][][11]{
  <!-- スタイルシートを読み込み、サイトを飾り付けします。-->
  <link rel="stylesheet" href="janken.css">
//}

スタイルシートを読み込むためのコードです。@<file>{janken.css} ファイル内にいろいろな意匠(文字や画像の大きさや色、配置など)を記述し、ウェブサイトの見た目を整えていきます。

#@# 文書構造のためのHTML、意匠飾り付けのためのCSS、動き・相互作用のためのJavaScriptと、ウェブアプリのための三つの言語がここで揃い踏みします。
#@# 一般にウェブサイトは複数のページがありますが、同じcssを使うことで、ウェブサイト全体の統一感を持たせることもできます。
#@# また、次回別のウェブサイトの作成の際に転用することも可能となり、生産性の向上につながります。

=== 画像ファイルの指定
//list[][][31]{
<!-- img タグは、絵(image)を表示するためのタグです -->
<img id="computer_hand_type" src="guu.webp">
//}

@<code>{imgタグ} を使うことで、ウェブサイト上に画像を表示することができます。
@<code>{src="guu.webp"} として、グーの絵を表示させています。

//clearpage

=== @<code>{id} 属性
//list[][][32]{
<img id="computer_hand_type" src="guu.webp">
//}
@<code>{id="computer_hand_type"} と @<code>{id属性} を付与しています。 @<code>{id属性} はページ内で一つのみ存在する要素に対して用います。
コンピュータが、どの手を出すかによって、グー、チョキ、パー、三つの画像を変更する必要があります。JavaScriptから画像を区別しやすくするために @<code>{id属性} を付与しています。

=== @<code>{class} 属性
//list[][][44]{
<!-- div は汎用的に使えるタグです。
     クラス名をcontrol_areaとし、配置を整え易くします -->
<div class="control_area">
//}

@<code>{class="control_area"} と @<code>{class属性} を付与しています。 @<code>{id属性} と異なり、@<code>{class属性} はページ内で複数要素が存在しても構いません。CSSで要素を分類(Classify、分類分け)し、一括してスタイルを適用する目的で幅広く用いられます。

=== button 要素
//list[][][48]{
<!-- プレイヤーの手を選ぶ為のボタンです 。 -->
<!-- button タグを使って 、画面に「 グーチョキパー 」のボタンを表示します 。
     JavaScriptでの操作用に id属性をguu 値を0 にします 。 -->
<button id="guu"   value="0"></button>
<button id="choki" value="1"></button>
<button id="paa"   value="2"></button>
//}

UI改善のため、ボタン要素を導入します。後ほど CSS によりグーの絵を表示させます。今まで 入力枠に @<code>{0} などと数値で入力していましたが、絵を見てボタンを押せば良いので、とても使いやすくなります。

グー・チョキ・パーのボタンを押した時に @<code>{JavaScript} でどのボタンが押されたのか分かるよう、 @<code>{value="0"} と記述しています。後ほど、この @<code>{0} を受け取って処理をするよう、JavaScriptを改修していきます。


== CSSの基本

=== 現状把握

それでは、HTML 文書に、飾り付けを行う前に、現状をみておきましょう。
左はCSSを適用していない現在の状況、右はCSSを提要した後の状況です。

//image[css_hikaku][CSS 適用前(左) 適用後(右)][width=100%]

=== 初めてのCSS

見出しとなる「じゃんけんゲーム」を見てみましょう。
次のような違いがあります。

//tsize[latex][|l|l|l|]
//table[][CSS適用前後の違い][csv=on]{
　,CSS適用前, CSS適用後
============
文字の大きさ, 大きい, とても大きい
文字の色, 黒, 黒羽色
文字の装飾, 何もなし, 影が付いている
文字の配置, 左端から配置, 中央揃えされている
//}

この装飾を与えているのが次のCSSコードです。

//list[][見出しのためのCSS][1]{
header h1 {                   /* header 内の h1 (大見出しの指定) */
  font-size: 40px;            /* 書体の大きさは40px */
  color: var(--kurohairo);    /* 文字色を黒羽色にする */
  text-shadow: 3px 4px 5px var(--nibiiro); /* 鈍色の影を付ける */
  text-align: center;         /* 文字は中央揃えにする */
}
//}

CSS は、HTML文書のどの要素に装飾を与えるのかを、「セレクタ(選択子)」で指定します。
@<code>{header h1} と書いているので、HTML文書の @<code>{<header>} の中にある @<code>{<h1>} に対して装飾が適用されます。

具体的な装飾内容は、 @<code>{{\}} の中に書きます。

HTMLの各要素に対してどのような装飾が設定可能かが規定されていますが、@<code>{<h1>} 要素へは「書体の大きさ」を設定することが可能です。
どのようなスタイル付け・装飾方法は「プロパティ」と呼ばれています。
「書体の大きさ」を指定するには、@<code>{font-size}プロパティを用いられます。

そして、「書体の大きさ」をどのくらいにするのか、値を設定する必要があります。
この設定する値のことを「プロパティ値」と呼びます。

プロパティとプロパティ値の間は、@<code>{:(コロン)} で区切り、最後に@<code>{;(セミコロン)} で終了します。

まとめると、@<code>{font-size: 40px;} と書くことで、書体の大きさを@<code>{40px}に設定できます。

最後に「コメント」があります。CSSのコメントは @<code>{/* */}の間に書くことができます。 ここでは、@<code>{/* 書体の大きさは40px */} と、説明書きを入れています。一行ごとにコメントする必要はありませんが、要所要所のコメントで読みやすくなりますので、活用してください。

=== CSS とは何か

公式サイト ＭＤＮに、@<href>{https://developer.mozilla.org/ja/docs/Learn/Getting_started_with_the_web/CSS_basics,CSSの基本} という、優れた記事がございます。

//quote{
CSS (Cascading Style Sheets) は、ウェブページのスタイルを設定するコードです。
CSSは、HTMLの要素を選択的にスタイル付けするために使用するものです。
例えば、この CSS は段落のテキストを選択し、色を赤に設定しています。
//}

//list[][]{
p {
  color: red;
}
//}


=== CSS 規則セットの構造

//sideimage[css-declaration][90mm][sep=5mm,side=R]{
赤い段落テキストの CSS コードを分解して、その仕組みを理解してみましょう。

全体の構造は規則セットと呼びます (規則セットという語はよく、単に規則とも呼ばれます)。

それぞれの部分の名前にも注意してください。
//}

 : セレクタ (Selector)
  これは規則セットの先頭にある HTML 要素名です。これはスタイルを設定する要素 (この例の場合は <p> 要素) を定義します。別の要素をスタイル付けするには、セレクタを変更してください。

 : 宣言 (Declaration)
  @<code>{color: red;} のような単一の規則です。これは要素のプロパティのうち、スタイル付けしたいものを指定します。

 : プロパティ (Property)
  これらは、 HTML 要素をスタイル付けするための方法です。 (この例では、 @<code>{color} は @<code>{<p>} 要素のプロパティです。) CSS では、規則の中で影響を与えたいプロパティを選択します。

 : プロパティ値 (Property value)
  プロパティの右側には @<code>{:(コロン)} の後に プロパティ値 があります。与えられたプロパティの多くの外観から 一つを選択します。 (例えば、 @<code>{color} の値は @<code>{red} 以外にもたくさんあります。)

構文の他の重要な部分に注意してください。

 * セレクタを除き、それぞれの規則セットは中括弧 (@<code>{{\}}) で囲む必要があります。
 * それぞれの宣言内では、コロン (@<code>{:}) を使用してプロパティと値を分離する必要があります。
 * それぞれの規則セット内でセミコロン (@<code>{;}) を使用して、それぞれの宣言と次の規則を区切る必要があります。

=== CSSでの色指定

//sideimage[rgb][40mm][sep=5mm,side=R]{
色を指定する際に @<code>{color: red;} と、色の名前を書きましたが、
CSSでは、光の三原色 赤(Red)・緑(Green)・青(Blue)の組み合わせで色を表現する「RGBカラー」が良く用いられます。@<fn>{1}

光を重ねるほど明るくなり、三色が重なる部分は白になります(加法混色)。
色の三原色と呼ばれる 黄・赤紫・青緑は、重ねるほどに暗くなります(減法混色)。
光の三原色「赤・緑・青」と、色の三原色「黄・赤紫・青緑」、相補性を成しています。

//}
//footnote[1][@<href>{https://www.webcolordesign.net/color_basic/hsb_basic/rgb_color.html,基本的な色指定であるRGB値}より、引用・改変。]

//vspace[latex][2mm]

赤(Red)・緑(Green)・青(Blue)のそれぞれを、「点灯している」「消灯している」の二段階で組み合わせると @<m>$2^3=8$色を表現可能できます。中間色を表現するために 各色に256段階の輝度を持たせることとすると @<m>$256^3 = 16,777,216$ 色を表現可能です。

色の指定は、@<code>{#(シャープ)}に続けて、この256段階を16進数に変換した表記が良く用いられます。
赤は @<code>{#ff0000} 緑は @<code>{#00ff00} 青は @<code>{#0000ff} です。赤と緑を合わせると 黄 @<code>{#ffff00} になります。ですので @<code>{color: red;} に代えて @<code>{color: #ff0000; } と書くことができます。

//blankline
良く使う色140色には「CSSカラーネーム」として、名前が付けられています。 @<fn>{genshoku}

//footnote[genshoku][出典: @<href>{https://www.colordic.org/, 原色大辞典}]

//image[colorname_tiny][CSSカラーネーム(一部)][width=111%]


=== 和名での色指定

英語では140の色名が付けられていますが、@<href>{https://www.colordic.org/w, 和色大辞典} には465色、@<href>{https://irononamae.web.fc2.com/wa/,和の色日本の伝統色} には759色もの日本の伝統色が紹介されています。

//image[dentoushoku_tiny][和の色 日本の伝統色(一部)][width=100%]

二千六百余年にも渡る歴史の中で受け継がれてきた情緒豊かな伝統色をぜひ使いたいものです。

そこで、次のように @<B>{CSSカスタムプロパティ} を定義します。
これにより @<code>{color: var(--amairo);} などと、和名での色指定ができるようになります。
//image[iro][CSSカスタムプロパティによる和色指定][pos=h,width=90%]

ウェブサイト作成で使いやすいよう、 @<href>{https://github.com/Atelier-Mirai/wa_no_iro,和の色 日本の伝統色}として、838色を纏めていますので、ご利用下さい。









== CSS グリッドレイアウト

通常、ウェブページは、上から下、左から右に、配置されます。従来、ページ上の要素を自由自在に配置するには大変な苦労が伴いました。CSSグリッドレイアウトを用いると、縦と横の補助線（グリッド・格子）を用いて、自由自在に要素を配置することができます。

公式サイトMDNに、@<href>{https://developer.mozilla.org/ja/docs/Learn/CSS/CSS_layout/Grids,グリッド} について書かれた記事がございますので、引用しつつ進めていきましょう。@<fn>{grid}

//footnote[grid][@<href>{https://developer.mozilla.org/ja/docs/Web/CSS/CSS_Grid_Layout/Basic_Concepts_of_Grid_Layout,グリッドレイアウトの基本概念}にも分かりやすく説明されており、お勧めです。]

=== グリッドとは
CSS グリッドレイアウト（Grid Layout）は、ウェブ用の二次元レイアウトシステムです。これにより、コンテンツ(内容物・出し物)を行と列にレイアウト（配置）することができ、複雑なレイアウトを簡単に構築できるようにする多くの機能があります。
グリッドは、列と行を定義する水平線と垂直線の集合が交差したものです。要素をグリッドの行と列に並べて配置することができます。

グリッドには通常、列（column）、行（row）、そしてそれぞれの行と列の間の間隔（gap）があります。

//image[cssgridlayout][][width=90%]

=== グリッドを定義する
練習として、以下のように @<file>{grid.html} と @<file>{grid.css} を用意しましょう。

//list[][grid.html][1]{
<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>CSSグリッドレイアウト練習</title>
    <link rel="stylesheet" href="grid.css">
  </head>

  <body>
    <h1>CSSグリッドレイアウト練習</h1>

    <div class="container">
      <div>One</div>
      <div>Two</div>
      <div>Three</div>
      <div>Four</div>
      <div>Five</div>
      <div>Six</div>
      <div>Seven</div>
    </div>

  </body>
</html>
//}

//list[][grid.css][1]{
.container > div {
  border-radius: 5px;
  padding: 10px;
  background: #cfe8dc;
  border: 2px solid #4fb9e3;
}
//}

//sideimage[grid0][60mm][sep=5mm,side=R]{
@<code>{.container > div} は、@<code>{container}クラスの @<br>{}@<B>{直下}の@<code>{div}タグを選択するためのセレクタです。

@<code>{<div>One</div>}、@<code>{<div>Two</div>}などが薄い緑地に水色の枠で囲まれるようになります。
//}

グリッドを定義するためには、@<code>{display} プロパティに @<code>{grid} の値を使います。
これによりグリッドレイアウトが有効になり、コンテナの直接の子の全てがグリッド項目(アイテム)になります。
ここでは、コンテナが @<code>{<div class="container">} で、グリッド項目が@<code>{<div>One</div>}、@<code>{<div>Two</div>}などです。

「みかん箱」に「みかん」を入れる、そのような想像をすると分かりやすいかもしれません。
グリッドコンテナ＝「みかん箱」、グリッド項目＝「みかん」です。 @<fn>{irasutoya}

//image[container_mikan][][width=80%]

//footnote[irasutoya][出典: 季節のイベント・動物・子供などのかわいいイラストが沢山見つかるフリー素材サイト @<href>{https://www.irasutoya.com/,いらすとや}]

それでは、CSS に次を追加してみましょう。
//list[][grid.css][8]{
.container {
  display: grid;
}
//}

ブラウザを再読み込みして確認してみても、特に変化が見られません。
@<code>{display: grid} を宣言すると 1 列のグリッドになるので、項目は上下に表示され続けます。

よりグリッドらしく見せるには、グリッドにいくつかの列を追加する必要があります。
ここでは @<code>{grid-template-columns} プロパティにより、200 ピクセルの列を 3 つ追加しましょう
（@<code>{grid-template-rows} プロパティを使うと、行数を指定できます）。

以下のように CSS を更新しましょう。

//sideimage[grid1][60mm][sep=5mm,side=R]{

//list[][grid.css][8]{
.container {
  display: grid;
  grid-template-columns: 100px 100px 100px;
}
//}

CSS 規則に 2 番目の宣言を追加してからページを再読み込みすると、作成したグリッドの各セルに項目が 1 つずつ再配置されていることがわかります。
//}

=== @<code>{fr} 単位での柔軟なグリッド
@<code>{fr} は、@<code>{fraction(分数)} に由来した単位で、CSS グリッドレイアウトのために誕生した新しい単位です。

@<code>{px}などの長さとパーセントを使用してグリッドを作成するだけでなく、この @<code>{fr} 単位を使用して柔軟にグリッドの行と列のサイズを変更できます。 この単位は、グリッドコンテナ内の使用可能スペースの割合を表します。

列のリストを次の定義に変更し、@<code>{1fr} の列を 3 つ作成します。

//sideimage[grid2][60mm][sep=5mm,side=R]{

//list[][grid.css][8]{
.container {
  display: grid;
  grid-template-columns: 1fr 1fr 1fr;
}
//}

グリッドコンテナ内を三等分して、それぞれの @<code>{div} 要素が配置されていることが確認できます。
//}

//vspace[latex][7mm]
//sideimage[grid3][60mm][sep=5mm,side=R]{
より柔軟に列幅を変更することもできます。 @<code>{fr} 単位はスペースを比例して配分するので、各列には異なる正の値を指定できます。

例えば @<code>{grid-template-columns: 2fr 1fr 1fr;} と定義することで、右のようにできます。
//}

=== 行間や列間の間隔
間隔を作成するには、列間の間隔には @<code>{column-gap} プロパティ、行間の間隔には @<code>{row-gap} プロパティ、両方を同時に設定するには @<code>{gap} プロパティを使用します。

//sideimage[grid4][60mm][sep=5mm,side=R]{

//list[][grid.css][8]{
.container {
  display: grid;
  grid-template-columns: 2fr 1fr 1fr;
  gap: 20px;
}
//}

右のように、行間、列間、それぞれ @<code>{20px} の間隔を空けることができました。
//}

=== 行指定や列指定の繰り返し
反復記法を使用して、行指定や列指定を繰り返すことができます。

//sideimage[grid5][60mm][sep=5mm,side=R]{

//list[][grid.css][8]{
.container {
  display: grid;
  grid-template-columns: repeat(4, 1fr);
  gap: 20px;
}
//}

グリッドコンテナ内を四等分して、それぞれの @<code>{div} 要素が配置されていることが確認できます。

@<code>{grid-template-columns: 1fr 1fr 1fr 1fr;} と書いたことと同じですが、繰り返す回数が多いときに便利です。
//}

=== グリッドの線の番号を使った要素の配置
グリッドの作成から、グリッド上に要素を配置することに移ります。
グリッドは @<code>{1} から始まる線番号を持っていてます。列の 1 線目がグリッドの左側にあり、行の 1 線目が一番上にあります。

開始線と終了線を指定することで、これらの線に従って要素を配置できます。

CSS からそれぞれの要素を扱いやすくするために、少しだけ @<file>{grid.html} を次のように更新し、@<code>{<div class="one">One</div>}と、クラス名「@<code>{one}」を付けましょう。

//list[][grid.html][12]{
<div class="container">
  <div class="one"  >One</div>
  <div class="two"  >Two</div>
  <div class="three">Three</div>
  <div class="four" >Four</div>
  <div class="five" >Five</div>
  <div class="six"  >Six</div>
  <div class="seven">Seven</div>
</div>
//}

//sideimage[shortcut_menu2][60mm][sep=5mm,side=R]{

CSS は次のように更新します。

//list[][grid.css][8]{
.container {
  display: grid;
  grid-template-columns: 1fr 1fr 1fr 1fr;
  grid-template-rows:    1fr 1fr 1fr 1fr;
  gap: 20px;
}
//}


表示結果は先ほどと変わりませんが、四行四列のグリッド（格子）を作成することができました。

//}
//blankline
「開発者ツール」を使うと、どのようにグリッドが構成されたか、確認できます。
画面上で、右クリック @<fn>{migi-click2} して表示される「ショートカットメニュー」から「調査」をクリックします。

//footnote[migi-click2][システム設定 - トラックパッド - ポイントとクリック - 副ボタンのクリック から 「右下隅をクリック」 に設定すると、右クリックできるようになります。]
//vspace[latex][7mm]

//image[grid-kakunin][][width=100%]

開発者ツールが表示されましたので、グリッドの線番号を表示させましょう。

「インスペクタ」をクリックします。
  - 1. 下に HTML コードが表示されています。@<code>{<div class="container">} の右側に、「grid」と書かれた小さなボタンがありますので、これをクリックします。
  または、右側の「レイアウト」欄内の「グリッド」の項目にある「グリッドをオーパーレイ表示」にチェックを入れます。
  - 2. 次に、右側の「レイアウト」欄内の「グリッド」の項目にある「グリッドの表示設定」で「線番号を表示」にチェックを入れます。

グリッドの線番号が表示されました。
上部を見ると、左から、1, 2, 3, 4, 5 と番号が振られています（四列作りましたので、線は １〜５までの五本できます）。

それでは、次のように CSS を追加して、「One」から「Seven」までの要素を配置してみましょう。

//list[][grid.css][15]{
.one   { grid-column: 1 / 5;  grid-row: 1;     }
.two   { grid-column: 1;      grid-row: 2 / 4; }
.three { grid-column: 2 / 4;  grid-row: 2;     }
.four  { grid-column: 4;      grid-row: 2;     }
.five  { grid-column: 2 / 4;  grid-row: 3;     }
.six   { grid-column: 4;      grid-row: 3;     }
.seven { grid-column: 1 / 5;  grid-row: 4;     }
//}

結果は次のようになります。
//image[grid6][][width=60%]

@<code>{.one { grid-column: 1 / 5; grid-row: 1;\}} は、列は一本目の線から五本目の線まで、行は一行目に配置されています。

@<code>{.two { grid-column: 1    ; grid-row: 2 / 4;\}} は、列は一本目の線に、行は二本目から四本目に配置されています。

このように、グリッドの線を使って、好きなように要素を配置することができます。

#@# //blankline
#@# また下部を見ると見ると、右から、-1, -2, -3, -4, -5 と番号が振られています。
#@# つまり、一番右端の線を指定する際には、「左から数えて５本目」と指定することもできますし、「右から数えて１本目」と指定することもできるということです。
#@#
#@# つまり、
#@# //list[][grid.css][15]{
#@# .one   { grid-column: 1 / 5;  grid-row: 1; }
#@# //}
#@#
#@# と記述する代わりに、
#@#
#@# //list[][grid.css][15]{
#@# .one   { grid-column: 1 / -1;  grid-row: 1; }
#@# //}
#@#
#@# と記述しても同様の結果が得られます。中央に多くの列数がある場合、列数が可変する場合などには、右端から線番号を数えると楽です。活用していきましょう。

=== 要素の左揃え、中央揃え、右揃え
@<code>{justify-self}プロパティを使うと、「@<B>{水平}」方向での要素の配置を制御できます。

CSSを追加して実験してみましょう。
//vspace[latex][2mm]
//sideimage[grid7][60mm][sep=5mm,side=R,border=on]{
@<B>{左揃え} @<code>{.one { justify-self: start; \}}
//}
//sideimage[grid8][60mm][sep=5mm,side=R,border=on]{
@<B>{中央揃え} @<code>{.one { justify-self: center; \}}
//}
//sideimage[grid9][60mm][sep=5mm,side=R,border=on]{
@<B>{右揃え} @<code>{.one { justify-self: end; \}}
//}

=== 要素の上揃え、中央揃え、下揃え
@<code>{align-self}プロパティを使うと、「@<B>{垂直}」方向での要素の配置を制御できます。

CSSを追加して実験してみましょう。
//vspace[latex][2mm]
//sideimage[grid10][10mm][sep=5mm,side=R,border=on]{
@<B>{上揃え} @<code>{.two { align-self: start; \}}
//}
//sideimage[grid11][10mm][sep=5mm,side=R,border=on]{
@<B>{中央揃え} @<code>{.two { align-self: center; \}}
//}
//sideimage[grid12][10mm][sep=5mm,side=R,border=on]{
@<B>{下揃え} @<code>{.two { align-self: end; \}}
//}

=== 線番号に名前を付ける
線番号に名前を付け、より使いやすくすることができます。

//list[][grid.css][]{
.container {
  grid-template-rows: 1fr 1fr 1fr 1fr;
}
//}

と記述して、四行作成しましたが、以下のように書くことで、行のそれぞれの線に名前を付けることができます。

//list[][grid.css][]{
.container {
  grid-template-rows:
    [head]    1fr  /* 一本目の線に head    と命名 */
    [main]    1fr  /* 二本目の線に main    と命名 */
    [article] 1fr  /* 三本目の線に article と命名 */
    [foot]    1fr; /* 四本目の線に foot    と命名 */
}
//}

そして、この線番号に付けた名前を使って、
//list[][grid.css][]{
.one   { grid-column: 1 / 5;  grid-row: head;          }
.two   { grid-column: 1;      grid-row: main / span 2; } /* 二行使い、配置する */
.three { grid-column: 2 / 4;  grid-row: main;          }
.four  { grid-column: 4;      grid-row: main;          }
.five  { grid-column: 2 / 4;  grid-row: article;       }
.six   { grid-column: 4;      grid-row: article;       }
.seven { grid-column: 1 / 5;  grid-row: foot  ;        }
//}

と書くことができます。

結果は同じですが、それぞれの要素をどの行に配置するのか、より分かりやすくなりますので、
ウェブサイト全体など、良く使う線には名前を付けておくと便利です。

== iPhoneでの表示結果を確認する

開発者ツール@<fn>{rdm}を使うと、iPhoneでの表示結果を確認することができます。


//image[responsive_mode][][width=70%]{
//}

絵の右下に iPhone と iPad が重なったアイコンがあります。「レスポンシブデザインモード」と呼ばれるアイコンで、クリックするとiPhoneやiPadでの見え方を確認できます。

//footnote[rdm][キーボードショートカットも用意されています。開発者ツールの表示はcommand + option + M、レスポンシブデザインモードへの切り替えはcommand + option + M です。]

//image[responsive_mode2][][width=80%]


//blankline

//sideimage[responsive_mode3][60mm][sep=5mm,side=R]{
レスポンシブデザインモードに変更すると、画面上部には、様々な端末に切り替えられるよう、良く用いられている端末名が用意されています。クリックしてみましょう。

//}

iPadやiPhoneなど様々な端末を選ぶことができます。iPhone SE 2nd gen iOS 14.6 @<fn>{iphone-se-2} を選びましたので、端末の画面サイズ、横 375px 縦 667 px が表示されています。

その右側にある iPhone のマークをクリックすると、横向きにした際の表示も確認できます。

また「リストを編集」をクリックすると良く使う端末だけを表示させたり、新しい端末が発売されたときに、画面サイズを登録することができます。


//footnote[iphone-se-2][iPhone SE 第二世代のことです。現在は第三世代が提供されていますが、画面サイズは同じとなっています。]

//vspace[latex][7mm]

#@# iPhone でも、ブラウザのタブには「じゃんけんゲーム」と表示されています。また、画面上にも「じゃんけんゲーム」の見出しや、グーの絵などが表示されており、とてもうまくいっています。
#@#
#@# 昨今、iPhone で見る人がとても増えていますので、このままiPhoneモードで開発を進めていきましょう。
#@#

== 完成形のCSS

CSSによる装飾の基本と、グリッドを活用した配置方法を学びました。

完成形のCSSは次のようになります。

//list[][janken.css][file=source/janken.css,1]{
//}

紙幅の制約から、説明は割愛致しますが、それぞれの行にコメントも付与してございますので、読み取っていただければと思います。
