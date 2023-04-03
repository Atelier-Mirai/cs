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

とあります。人とコンピュータの間にある窓口であり、コンピュータを操作する場合、利用者はコンピュータがどういった状態にあるのかを確認する必要があります。このために、コンピュータの画面上には、アイコンやメニュー、ボタンといった操作要素が表示されており、利用者はこれらのアイコンをクリックすることで、コンピュータを操作できます(@<code>{GUI,Graphical User Interface})。

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

 1. プレイヤーが出す手を、0, 1, 2 と、数字で入力するのではなく、グーチョキパーの3つのボタンを押すことで、選べるようにします。
 2. コンピュータが出した手を表示する機能がありませんでしたので、グーチョキパーのいずれなのかを示すアニメーション機能を実装します。
 4. ○勝○敗と、今までの勝敗を表示できるようにします。
 5. 開始ボタンを分かりやすくするために、色を付け、大きくします。
 6. じゃんけんは皆知っていますが、紹介文とウィキペディアへのリンクも用意します。
 7. じゃんけんゲームを楽しむ端末は様々です。iPhone、iPad、Macなど、多様な端末で好ましい見た目となるよう、「レスポンシブデザイン」を行います。

//image[janken_complete][][width=65%]

== 完成形のHTML

 @<code>{UI/UX} に考慮し、次のように @<file>{index.html}を更新します。
これが完成形のHTMLです。

//list[][index.html][file=source/index.html, 1]{
//}

いろいろな変更が追加されていますので、大まかに解説していきます。

=== レスポンシブ対応

//list[][][9]{
<!-- iPhoneで見た際にレイアウトを整えるための設定です -->
<meta name="viewport" content="width=device-width">
//}

と新しい設定が書かれています。@<B>{レスポンシブ対応}と呼ばれる、iPhone用、Mac用と、端末に応じて 好ましい見た目を提供するために必要なコードで、これにより 各端末に相応しい装飾意匠を提供できるようになります。

=== スタイルシートの読み込み
//list[][][11]{
  <!-- スタイルシートを読み込み、サイトを飾り付けします。-->
  <link rel="stylesheet" href="janken.css">
//}

デザインしたスタイルシートを読み込むためのコードです。 @<file>{janken.css} ファイル内にいろいろな意匠を記述し、ウェブサイトの見た目を整えていきます。

文書構造のためのHTML、意匠飾り付けのためのCSS、動き・相互作用のためのJavaScriptと、ウェブアプリのための三つの言語がここで揃い踏みします。
#@# 一般にウェブサイトは複数のページがありますが、同じcssを使うことで、ウェブサイト全体の統一感を持たせることもできます。
#@# また、次回別のウェブサイトの作成の際に転用することも可能となり、生産性の向上につながります。

=== 画像ファイルの指定
//list[][][29]{
<!-- img タグは、絵(image)を表示するためのタグです -->
<img id="computer_hand_type" src="guu.webp">
//}

@<code>{imgタグ} を使うことで、ウェブサイト上に画像を表示することができます。
@<code>{src="guu.webp"} として、グーの絵を表示させています。

=== @<code>{id} 属性
//list[][][30]{
<img id="computer_hand_type" src="guu.webp">
//}
@<code>{id="computer_hand_type"} と @<code>{id属性} を付与しています。 @<code>{id属性} はページ内で一つしか存在しない要素に対して用います。グー、チョキ、パーと、三つの画像が登場するので、JavaScriptからどの画像が選ばれたのか、画像要素を区別しやすくするために @<code>{id属性} を付与しています。

=== @<code>{class} 属性
//list[][][40]{
<!-- div は汎用タグで、適切なタグがない時に用います
     クラス名をcontrol_areaとし、配置を整え易くします -->
<div class="control_area">
//}

@<code>{class="control_area"} と @<code>{class属性} を付与しています。 @<code>{id属性} と異なり、@<code>{class属性} はページ内で複数要素が存在しても構いません。CSSで要素を分類(Classify、分類分け)し、一括してスタイルを適用する目的で幅広く用いられます。

=== button 要素
//list[][][43]{
<!-- プレイヤーの手を選ぶ為のボタンです。 -->
<div class="player_hand_type">
  <!-- JavaScriptでの操作用に id属性をguu 値を0 にします。 -->
  <button id="guu"   value="0"></button>
  <button id="choki" value="1"></button>
  <button id="paa"   value="2"></button>
</div>
//}

UI改善のため、ボタン要素を導入します。後ほど CSS によりグーの絵を表示させます。今まで @<code>{0} などと数値で入力していましたが、絵を見てボタンを押せば良いので、とても使いやすくなります。

グー・チョキ・パーのボタンを押した時に @<code>{JavaScript} でどのボタンが押されたのか分かるよう、 @<code>{value="0"} と記述しています。後ほど、この @<code>{0} を受け取って処理をするよう、JavaScriptを改修していきます。

=== a 要素
//list[][][76]{
<a href="https://ja.wikipedia.org/wiki/じゃんけん">ウィキペディア</a>
//}

@<code>{a} は、 @<code>{anchor} (錨)要素です。他の文書へのリンクを示す、ウェブサイトを特徴づけるタグです。じゃんけんに関するウィキペディアへのリンクを用意しています。

「ウィキペディア」をクリックすると、ウィキペディア内のじゃんけんについて書かれた記事、@<href>{https://ja.wikipedia.org/wiki/じゃんけん} に跳ぶよう、記述しています。

=== figcaption 要素
//list[][][81]{
<figure>
  <!-- figcaption で 図版(figure)に 標題(caption)を設定します -->
  <figcaption>じゃんけん相関図</figcaption>
  <img src="janken.webp" alt="じゃんけん説明図">
//}
@<code>{figcaption}は、図版(@<code>{figure})に標題(@<code>{caption})を付ける際に用いるタグです。@<code>{<img><figcaption>}と順番を逆にすることで、図の下に表題を表示することもできます。

=== ul 要素 と ol 要素、li 要素
//list[][][86]{
<!-- ul は 箇条書き項目(Unordered List)に用いるタグです-->
<ul>
  <!-- li は リスト項目(List Item)を示す際に用いるタグです -->
  <li>紙 ＞ 石 ：紙は石を包む</li>
  <li>鋏 ＞ 紙 ：鋏は紙を切る</li>
  <li>石 ＞ 鋏 ：石は鋏に克つ</li>
</ul>
//}

@<code>{ul}要素は、「箇条書き項目」であることを示すために用いるタグです。
@<code>{Unordered List}(順不同) の由来からも分かるように、その箇条書きの各項目の順番が重要でない場合に用います。

逆に項目の順番が重要であるときは、@<code>{ol} タグを用います。@<code>{Ordered List}(順序付き) の由来の通り、各項目の順序に意味がある場合に用います。

@<code>{li}要素は、@<code>{List Item}(リスト項目) に由来し、@<code>{ul} や @<code>{ol} 内に書かれる一つ一つの項目を書く際に用いるタグです。

#@#
#@# そして、歴史的な経緯により、URLに使える文字は、半角英数文字です。
#@#
#@# //list[][]{
#@# <a href="https://ja.wikipedia.org/wiki/じゃんけん">ウィキペディア</a>
#@# //}
#@#
#@# と書けると良いのですが、半角英数文字のみが利用可能なため、
#@# 「URLエンコーディング」という方式により、
#@# 「 @<code>{じゃんけん} 」を
#@# 「 @<code>{%E3%81%98%E3%82%83%E3%82%93%E3%81%91%E3%82%93} 」に変換しています。

== CSSの基本

それでは、HTML 文書に、飾り付けを行っていきましょう。そして先に完成形のHTMLファイル @<file>{index.html}を示しましたが、いきなりこれを扱う前に、小さなHTMlファイルを作り練習することとしましょう。

=== 練習用の HTML

練習用の HTML として、@<file>{study.html} を作ります。
//list[][study.html][file=source/study.html,1]{
//}

@<code>{<!-- -->}は、コメント(備忘録、覚え書、説明書き)です。すっきり省略して次のように書いても構いません。
//list[][study.html][file=source/study_comment_less.html,1]{
//}


//sideimage[css-sample0][90mm][sep=5mm,side=R]{
これをブラウザで表示すると、右のようになります。

見出しは大きく太字で、順序付き項目には番号が、箇条書き項目には黒丸が付けられています。
自分では何もCSSを記述していませんが、見やすいようにブラウザが飾り付けを行っています。 @<fn>{browser_css}

//footnote[browser_css][ユーザーエージェントスタイルシートと呼ばれます。]

それではこれから、CSSを使って、装飾いろいろを施していきましょう。
//}

=== CSS とは何か

（準）公式サイト ＭＤＮに、@<href>{https://developer.mozilla.org/ja/docs/Learn/Getting_started_with_the_web/CSS_basics,CSSの基本} という、優れたコンテンツがございますので、引用しつつ、一緒にやって行きましょう。

//quote{
CSS (Cascading Style Sheets) は、ウェブページのスタイルを設定するコードです。
CSSは、HTMLの要素を選択的にスタイル付けするために使用するものです。
例えば、この CSS は段落のテキストを選択し、色を赤に設定しています。
//}

//list[][style.css]{
p {
  color: red;
}
//}

//sideimage[css-sample1][90mm][sep=5mm,side=R]{
先ほど作成した、 @<file>{style.css} に上のコードを記述しましょう。
そして、ブラウザを再読み込みすると、
右のように、段落の部分が赤くなっています。
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

一つの規則セットで複数のプロパティ値を変更するには、次のようにセミコロンで区切って書いてください。

//list[][style.css]{
p {
  color: red;
  width: 480px;
  border: 1px solid black;
}
//}

//sideimage[css-sample2][90mm][sep=5mm,side=R]{
@<file>{style.css} に上のコードを記述し、
ブラウザを再読み込みすると、右のようになります。

段落の部分が赤くなるほか、幅が480pxになる、黒い枠で囲まれるようになります。
//}

=== 複数の要素を選択する

複数の要素を選択して、そのすべてに一つの規則セットを適用することもできます。複数のセレクタはカンマで区切ります。たとえば、以下のようになります。

//list[][style.css]{
p, li, h1 {
  color: red;
}
//}

//sideimage[css-sample3][90mm][sep=5mm,side=R]{
@<file>{style.css} に上のコードを記述し、
ブラウザを再読み込みすると、右のようになります。

段落、項目、見出しと、全てが赤くなっています。
//}

=== 特定要素中の要素を指定する
HTML の階層構造を使い、適用先を限定可能です。例えばセレクタを「@<code>{ol li { \}} 」と指定することで、 @<code>{ol}タグの中の @<code>{li} 要素が適用先となります。

//list[][style.css]{
ol li {
  color: red;
}
//}

//sideimage[css-sample4][90mm][sep=5mm,side=R]{
@<file>{style.css} に上のコードを記述し、
ブラウザを再読み込みすると、右のようになります。

単に 「@<code>{li { \}}」と書くと、順序付き項目と箇条書き項目の両方が赤くなりますが、
順序付き項目のみが赤くなっていることが確認できます。
//}

=== フォントとテキスト
#@# CSS の基本を学習しましたので、@<file>{style.css} ファイルにいくつかの規則を追加して、この例をより見栄え良くしていきましょう。

色を指定する他にも、CSS では、文字の大きさや配置、行間、文字間の調整も行えます。

HTML 本文内にテキストを配置する要素 (<h1>, <li>, <p>) のフォントの大きさを設定します。また、見出しを中央揃えにします。最後に、二つ目の規則セット (下記) を展開して、行の高さや文字の間隔などの設定を行い、本文を読みやすくしましょう。

//list[][style.css]{
h1 {
  font-size: 60px;      /* 書体の大きさを指定します */
  text-align: center;   /* 文字は中央揃えにします */
}

p, li {
  font-size: 16px;
  line-height: 2;       /* 行の高さを 2 行分にします */
  letter-spacing: 1px;  /* 文字の間隔を 1px 空けます */
}
//}

//sideimage[css-sample5][90mm][sep=5mm,side=R]{
@<file>{style.css} に上のコードを記述し、
ブラウザを再読み込みすると、右のようになります。

より、見やすくなったと思いますが、いかがでしょうか。
//}

=== コメント
先ほどのコード内で、@<code>{/* */} と書かれていました。
これは、CSSでの「コメント」です。
@<code>{/* */} は、手入力することもできますが、 Atom などのエディタでは、@<code>{Comannd + /} で入力できます。

ブラウザは書かれたコードを解釈し、画面に表示する際、コメントは無視します。たくさんのCSSを書いて行きますので、見出しや書いたコードの説明文として、活用していきましょう。

=== さまざまな種類のセレクタ

セレクタにはさまざまな種類があります。上記の例では、要素セレクタを使用しており、特定の種類の要素をすべて選択しています。しかし、もっと特定の要素を選択することもできます。ここでは、より一般的なセレクタの種類を紹介します。 @<fn>{selector}

//footnote[selector][他にも様々なセレクターがあります。詳しくは、 MDN の @<href>{https://developer.mozilla.org/ja/docs/Learn/CSS/Building_blocks/Selectors,セレクターガイド}をご覧ください。]

//vspace[latex][2mm]

//image[selector][][width=100%]

それでは、早速 ID セレクタを使ってみましょう。

HTML を次のように、書き換えましょう。

//list[][study.html]{
<ul>
  <li id="html">HTMLは、「文書構造」の為の言語です。</li>
  <li id="css">CSSは、「意匠・装飾」の為の言語です。</li>
  <li id="javascript">JavaScriptは、「相互作用・動き」の為の言語です。</li>
</ul>
//}

そして、@<file>{style.css} に次のコードを書き加えます。
//list[][style.css]{
#html {
  background: orange;   /* 背景色を指定します */
}

#css {
  background: cyan;
}

#javascript {
  background: yellow;
}
//}

//sideimage[css-sample6][90mm][sep=5mm,side=R]{
ブラウザを再読み込みすると、右のように、それぞれの言語に応じた背景色も付き、美しくなりました。
//}

次に、クラスセレクタを使ってみましょう。

HTML を次のように、書き換えましょう。

//list[][study.html]{
<ol>
  <li class="hardware">コンピュータ (Mac / Linux / Windows など)</li>
  <li class="software">エディタ (Atom / Zed / VS Codeなど)</li>
  <li class="software">ブラウザ (Firefox, Safariなど)</li>
</ol>
//}

そして、@<file>{style.css} に次のコードを書き加えます。
//list[][style.css]{
.hardware {
  border-bottom: 3px solid lime;      /* 下に枠線を引きます */
}

.software {
  border-bottom: 3px double magenta;  /* 下に枠線を二重線で引きます */
}
//}

//sideimage[css-sample7][90mm][sep=5mm,side=R]{
ブラウザを再読み込みすると、それぞれの種類に応じた背景色も付き、さらに美しくなりました。

//}
//vspace[latex][2mm]

@<code>{li} セレクタや、@<code>{ol li} セレクタとの違いを確認しましょう。

 * IDセレクタを用いると、ページ内に存在する唯一の要素を選択して装飾できます。
 * クラスセレクタを用いると、ページ内に存在する同分類の要素を選択して装飾できます。

良く出てきますので、活用して、素敵な作品を作っていきましょう。


=== CSS の優先順位
先ほどのコードの中から一部分を取り上げてみましょう。
@<code>{h1}要素に対して、文字の大きさや配置を指定するコードです。

//list[][style.css]{
h1 {
  font-size: 36px;      /* 書体の大きさを指定します */
  text-align: center;   /* 文字は中央揃えにします */
}
//}

@<code>{h1}要素に関する装飾を、同じ規則セットの中に書いていますが、次のように分けて書いても同じになります。

//list[][style.css]{
h1 {
  font-size: 36px;      /* 書体の大きさを指定します */
}

h1 {
  text-align: center;   /* 文字は中央揃えにします */
}
//}

それでは、同じプロパティに関する指定を、二回書いたらどうなるでしょうか。
つまり、次のようにです。

//list[][style.css]{
h1 {
  font-size: 36px;      /* 書体の大きさを指定します */
}

h1 {
  font-size: 18px;      /* 書体の大きさを指定します */
}
//}

//sideimage[css-sample8][90mm][sep=5mm,side=R]{
結果は、右のように文字が小さくなりました。

同じ適用先に同じプロパティを複数指定した場合、後から記述した設定が優先され、先の記述を上書きします。
//}
//vspace[latex][2mm]

他の優先順位についても見ておきましょう。

 * @<code>{li} と単一タグのセレクタと、@<code>{ol li}のように複数タグのセレクタとでは、複数タグのセレクタが優先されます。
 * 複数タグのセレクタと、クラスセレクタとでは、クラスセレクタが優先されます。
 * クラスセレクタと、IDセレクタとでは、IDセレクタが優先されます。

@<href>{https://developer.mozilla.org/ja/docs/Web/CSS/Specificity,詳細度}や @<href>{https://developer.mozilla.org/ja/docs/Web/CSS/Cascade,CSS カスケード入門}により、詳しい説明があります。詳細はそちらをご覧ください。

#@# === 文法
#@#
#@# 紙幅の都合上、全ては説明できないので、要点のみを解説します。
#@#
#@# //sideimage[css_comment][35mm][sep=5mm]{
#@# CSSでのコメントです。 @<code>{/* */} と手で入力もできますが、 @<code>{Comannd + /} で入力できます。たくさんのCSSを書きますので、CSSの見出しや書いたCSSの説明文として、活用しましょう。
#@# //}
#@# //vspace[latex][7mm]
#@#
#@# //sideimage[css1][35mm][sep=5mm]{
#@# デザインをし易くするため、全ての要素の余白を0にします。
#@# //}
#@#
#@# //sideimage[css21][50mm][sep=5mm]{
#@# CSSではデザインやレイアウトの設定をどこに適用するかを「セレクタ」で指定します。例えば、
#@# @<code>{<img>}タグのデザインを変更したい場合には、セレクタを「@<code>{img}」と指定します。
#@#
#@# どのようなデザインにするかは、プロパティと値の組で @<code>{{\}} で囲んで記述します。例えば横幅を変更したければ @<code>{width} プロパティを利用します。プロパティと値とは @<code>{:} (コロン)で区切ります。
#@# //}
#@# //vspace[latex][2mm]
#@# プロパティと値の組は「宣言」と呼ばれます。複数の宣言は @<code>{;} (セミコロン)で区切ります。セレクタと宣言の記述全体は、「@<code>{ルール} 」と呼ばれます。同じところに適用するルールを、複数のルールに分けて記述することが可能です。
#@#
#@# //vspace[latex][7mm]
#@#
#@# //sideimage[css2][35mm][sep=5mm]{
#@# 写真の幅を横幅一杯(100%)に、高さを縦横比が保たれるよう自動調整するためのCSSです。 @<br>{}
#@# @<code>{img { width: 100%; \}} @<code>{img { height: auto; \}} と複数のルールに分けて記述しても、同じ結果が得られます。
#@# //}
#@#
#@# #@# //sideimage[css3][35mm][sep=5mm]{
#@# #@# 複数のルールに分けて記述した例です。同じ結果が得られます。
#@# #@# //}
#@# #@#
#@# //sideimage[css4][35mm][sep=5mm]{
#@#   同じ適用先に、同じプロパティを複数指定した場合、後から記述した設定が優先され、先に記述した設定を上書きします。 @<br>{}
#@#   左の場合、横幅 @<code>{width} の値は @<code>{50%} になります。
#@# //}
#@#
#@# === セレクタ
#@# セレクタでは、CSSの設定を「どこ」に適用するかを指定します。 @<br>{}
#@# 基本的なセレクタの書き方は次の通りです。
#@#
#@# //sideimage[css31][55mm][sep=5mm]{
#@# @<B>{全ての要素} @<br>{}
#@# @<code>{* { \} } のように、セレクタを「@<code>{*}」と指定すると、全ての要素が適用先となります。
#@# //}
#@# //vspace[latex][7mm]
#@#
#@# //sideimage[css32][55mm][sep=5mm]{
#@# @<B>{全てのimg要素} @<br>{}
#@# @<code>{img { \} } と 要素名として @<code>{img} を指定すると、@<code>{img}要素のみに適用先を限定できます。
#@# //}
#@# //vspace[latex][7mm]
#@#
#@# //sideimage[css33][55mm][sep=5mm]{
#@# @<B>{特定の要素の中のimg要素} @<br>{}
#@# HTMLの階層構造を使い、適用先を限定可能です。例えばセレクタを「@<code>{article img { \} } 」と指定すると、@<code>{article}の中の@<code>{img}要素が適用先となります。
#@# //}
#@# //vspace[latex][7mm]
#@#
#@# //sideimage[css34][55mm][sep=5mm]{
#@# @<B>{一階層下のimg要素} @<br>{}
#@# 特定の要素の一階層下の要素に限定して適用することもできます。例えばセレクタを「@<code>{body > img { \} }」と指定すると、@<code>{body}の一階層下の@<code>{img}要素のみが適用先となります。
#@# //}
#@# //vspace[latex][7mm]
#@#
#@# //sideimage[css35][55mm][sep=5mm]{
#@# @<B>{特定の要素に隣接するarticle} @<br>{}
#@# 特定の要素に隣接した要素に限定して適用することもできます。例えばセレクタを「@<code>{img + article { \} }」と指定すると、@<code>{img}に続けて記述した同じ階層の@<code>{article}要素が適用先となります。
#@# //}
#@# //vspace[latex][7mm]
#@#
#@# //sideimage[css36][55mm][sep=5mm]{
#@# @<B>{特定の要素の後に記述した全てのarticle} @<br>{}
#@#
#@# 特定の要素の後に記述した要素に限定して適用することもできます。例えばセレクタを「@<code>{img ~ article { \} }」と指定すると、@<code>{img}の後に記述した同じ階層の全ての@<code>{article}要素が適用先となります。
#@# //}
#@# //vspace[latex][7mm]
#@#
#@# //sideimage[css37][55mm][sep=5mm]{
#@# @<B>{複数の適用先} @<br>{}
#@# 複数の適用先に同じ設定を適用したい場合、セレクタを「@<code>{,}(カンマ)」で区切って指定します。例えば「@<code>{body > img}」と「@<code>{img + article { \} }」の二つのセレクタをカンマ区切りで続けて@<code>{body > img, img + article { \} } のように指定すると、@<code>{body}の一階層下の@<code>{img}要素と、@<code>{img}に続けて記述した同じ階層の@<code>{article}要素が適用先となります。
#@# //}
#@# //vspace[latex][7mm]
#@#
#@# //sideimage[css41][55mm][sep=5mm]{
#@# @<B>{ID属性} @<br>{}
#@# @<code>{#computer}
#@# ページ内に一つしか存在しない要素の場合 、ID属性で指定することも可能です。id属性を指定する際は、「 @<code>{#}(シャープ) 」を用います。例えば 、セレクタを「 @<code>{#computer} 」と指定すると 、@<code>{id="computer"}属性を付与した要素が適用先となります。
#@# //}
#@# //vspace[latex][7mm]
#@#
#@# //sideimage[css42][55mm][sep=5mm]{
#@# @<B>{class属性} @<br>{}
#@# @<code>{.score {\}}
#@# クラス属性を付与すると、要素名などでは区別しづらい要素を特定しやすく便利です。クラス属性を指定する際は、「@<code>{.}(ピリオド)」を用います。例えば、セレクタを「@<code>{.score}」と指定すると、@<code>{class="score"}属性を付与した要素が適用先となります。
#@# //}
#@# //vspace[latex][7mm]


=== CSSでの色指定

//sideimage[rgb][40mm][sep=5mm,side=R]{
色を指定する際に @<code>{color: red;} と、色の名前を書きましたが、
CSSでは、光の三原色と呼ばれる赤(Red)・緑(Green)・青(Blue)の組み合わせで、色を表現する「RGBカラー
」が主流です。@<fn>{1}

光を重ねるほど明るくなり、三色が重なる部分は白になります(加法混色)。
色の三原色と呼ばれる 黄・赤紫・青緑は、重ねるほどに暗くなります(減法混色)。
光の三原色「赤・緑・青」と、色の三原色「黄・赤紫・青緑」、相補性を成して美しいですね。

//}
//footnote[1][@<href>{https://www.webcolordesign.net/color_basic/hsb_basic/rgb_color.html,基本的な色指定であるRGB値}より、引用・改変。]

//vspace[latex][2mm]

赤(Red)・緑(Green)・青(Blue)を、点灯している、消灯している の二段階の値で組み合わせると、2の3乗=8色を表現可能です。中間色を表現するために、消灯している、わずかに点灯している・・・と、それぞれ256段階の輝度を持たせると、256の3乗 = 16,777,216色を表現可能です。

色を指定する際は、@<code>{#(シャープ)}の後に、この256段階を16進数に変換して、次のように記述します。
赤は @<code>{#ff0000}、緑は @<code>{#00ff00} です。青は @<code>{#0000ff} です。赤と緑を合わせると 黄 @<code>{#ffff00} になります。

ですので、@<code>{color: red;} に代えて、@<code>{color: #ff0000; } と書いても同じ結果が得られます。

//blankline
ちなみに、良く使う色１４０色には「CSSカラーネーム」として、名前が付けられています。 @<fn>{genshoku}

//footnote[genshoku][出典: @<href>{https://www.colordic.org/, 原色大辞典}]

//image[colorname][CSSカラーネーム][width=111%]


=== 和名での色指定

英語では１４０の色名が付けられていますが、@<href>{https://www.colordic.org/w, 和色大辞典} には４６５色、@<href>{https://irononamae.web.fc2.com/wa/,和の色日本の伝統色} には７５９色もの日本の伝統色が紹介されています。

//image[dentoushoku][和の色 日本の伝統色(部分)][width=100%]

二千六百余年にも渡る歴史の中で受け継がれてきた情緒豊かな伝統色をぜひ使いたいものです。

そこで、次のように @<B>{CSSカスタムプロパティ} を定義します。
これにより @<code>{color: var(--amairo);} などと、和名での色指定ができるようになります。
//image[iro][CSSカスタムプロパティによる和色指定][pos=h,width=80%]

ウェブサイト作成で使いやすいよう、 @<href>{https://github.com/Atelier-Mirai/wa_no_iro,和の色 日本の伝統色}として、８３８色を纏めていますので、ご利用下さい。