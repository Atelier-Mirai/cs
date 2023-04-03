= 初めてのHTML

//abstract{
  ウェブサイト作成の土台となるHTML(HyperText Markup Language)の基本文法をご紹介します。HTMLは、ウェブサイトに記されたものが、見出しなのか、本文なのか、あるいは画像なのかといった、「文書構造」を記述するための言語で、とても簡潔で理解しやすい文法となっています。

  何事も上達するには基礎がとても大切です。こつこつ習得していきましょう。
//}

== 学習の手引き

=== ウェブサイト作成の為の三つの言語 @<code>{HTML / CSS / JavaScript}
ウェブサイトを作成する為に用いられる言語には、大きく次の三つがあります。
//vspace[latex][3mm]
 * @<code>{HTML(@<ruby>{HyperText Markup Language,ハイパーテキストマークアップランゲージ})} @<br>{}
#@# ウェブサイトの文書構造を記述するための言語です。見出し、本文、画像など、それぞれが意味するものについて、専用の「タグ」を使って表現していきます。
#@# HTML(HyperText Markup Language) は、ウェブページを作成するために開発された言語で、
  　HyperText Markup Language を日本語で表すなら、「ハイパーテキストに目印をつける言語」くらいの意味になります。@<br>{}
  　目印をつける(Markup)というのは、文書の各部分（見出し・段落・表・リストなど)が果たしている役割が分かるようにすることです。そのために専用の「タグ」を使います。 @<br>{}
  　コンピュータに理解できるよう文書構造を定義することが、HTMLの最も重要な役割です。
//vspace[latex][3mm]
 * @<code>{CSS(@<ruby>{Cascading Style Sheet,カスケーディング・スタイルシート})} @<br>{}
  　ウェブサイトの見た目を飾り付け、彩る為の言語です。文字の大きさや色の指定から画像の配置先など、様々な装飾を行うことができます。@<br>{}
#@# CSS(Cascading Style Sheet) とは、
#@# ウェブページの要素の配置や見栄えなどを記述するための言語です。指定できる項目は、要素の大きさや配置、要素間の位置関係や空白、要素の境界線や余白、要素間 の間の空白や周囲の余白、文字の大きさや文字や行の間隔、@<ruby>{書体,フォント}の種類や変形(太字や斜体など)、箇条書きの表示書式、背景色や背景画像など多岐に渡ります。
#@# HTMLタグが親子関係(包含関係)にある場合、多くの設定値は親要素に指定されたものが子要素、孫要素に引き継がれ、子要素で指定されたものが追加されていきます。このように設定値が上から下へ伝播していく様子を、階段状の瀧を意味する cascade (カスケード)になぞらえて、命名されました。
  　HTMLのタグが親子関係(包含関係)にある場合、多くの設定値は親要素に指定されたものが子要素、孫要素に引き継がれていきます。このように設定値が上から下へ@<ruby>{伝播,でんぱ}していく様子を、階段状の瀧を意味する @<ruby>{cascade,カスケード}になぞらえて、命名されました。
//vspace[latex][3mm]
 * @<code>{@<ruby>{JavaScript,ジャバスクリプト}} @<br>{}
  　ウェブサイトに、「双方向性・相互作用性（インタラクティブ）」を@<ruby>{齎,もたら}すために用いられるプログラミング言語です。 @<br>{}
  　例えば、閲覧者の操作に反応して表示が書き換わったり、ページが表示される際に写真などの要素に動きや効果を加えたり、サーバと通信してデータを取得したりするなど、現在のウェブサイトには欠かせないプログラミング言語となっています。
#@# 特定のボタンが押された際の動きを記述したり、ページが読み込まれた際のアニメーション効果を実現するなど、様々に活躍します。
#@# JavaScript(ジャバスクリプト) は主にブラウザで動くプログラミング言語です。
#@# JavaScript は、HTML ファイルから JavaScript が書かれたファイルを読み込む形で良く使われます。
//vspace[latex][3mm]

それぞれの詳細を@<ruby>{知悉,ちしつ}することは大変ですが、全てを知らずとも良く使う基本的なコードのみでもウェブサイトの作成は充分可能ですので、学んでいきましょう。

=== 学習の為の参考サイトや書籍のご紹介

==== HTML / CSS を学ぶ為に
ウェブサイト作成のために、様々な参考書籍があり、またネット上でも有益なサイトが多数ありますが、始めて学ぶ方向けには、（準）公式サイトである、ＭＤＮより提供されている

 * @<href>{https://developer.mozilla.org/ja/docs/Learn/Getting_started_with_the_web,ウェブ入門}
 * @<href>{https://developer.mozilla.org/ja/docs/Learn/Getting_started_with_the_web/HTML_basics,HTML の基本}
 * @<href>{https://developer.mozilla.org/ja/docs/Learn/Getting_started_with_the_web/CSS_basics,CSS の基本}

が役に立つことでしょう。
//blankline

また、どのような仕組みでウェブサイトが閲覧できるのか、少し技術的な背景についても知見があると、（専門家を目指す方はもちろんですが） 知的好奇心を満たす点からも楽しいものです。

 * @<href>{https://developer.mozilla.org/ja/docs/Learn/Getting_started_with_the_web/How_the_Web_works,ウェブのしくみ}

//blankline
ＭＤＮでの学習を終えた方には、巻末に挙げた参考書籍の中から次の二冊をお勧めします。

 * CSSグリッドで作る HTML5&CSS3 レッスンブック
 * 作って学ぶ　HTML＆CSSモダンコーディング

前書は、初心者向けに基礎的なウェブサイトの作成を簡単な技術的な背景も含めて解説されている良書です。本書の執筆に関しても、その多くの部分を負っており、貢献に感謝いたします。後書は、前書の学習を終え、基礎的なHTML/CSSが書けるようになった方が、より進んだサイト作成の技術を学ぶために最適な一冊となっています。
//blankline

==== JavaScript を学ぶ為に
JavaScript の学習に当たっては、以下のＭＤＮの説明が概要を掴むには良いでしょう。

 * @<href>{https://developer.mozilla.org/ja/docs/Learn/Getting_started_with_the_web/JavaScript_basics,JavaScript の基本}

簡潔に説明されてはいますが、始めてプログラミングに触れる方には少し難しいと感じるかもしれません。そういった方へは、巻末の参考書籍

 * スラスラ読める JavaScript ふりがなプログラミング

がお勧めです。一語一語、漢文に倣った読み下し文でコードの意味が書かれており、短いコードの一文一文を確かめながら実行することで、理解を深めていくことができるようになっています。

JavaScript の 文法を理解し、簡単なコードを書けるようになったところで、実際のウェブサイトに組み込んで見ましょう。

 * 動くWebデザインアイディア帳 / 動くWebデザインアイディア帳 実践編

では、様々な動きを@<ruby>{齎,もたら}すための、 CSSアニメーション や、JavaScript で書かれた各種ライブラリの使い方等が紹介されています。少しコードが汚いのが残念ではありますが、二冊合計で９００ページにも上る豊富な事例が掲載されておりますので、実際のウェブサイト作成に役立つ一冊となっています。

 * JavaScript Primer 迷わないための入門書

は、JavaScript をより深く知りたい方にお勧めの一冊。難易度高目ではありますが、前半だけでも読み通すと、全容を知ることができ、他のプログラミング言語の学習にも生きてくることでしょう。

== HTMLの基本

テキストエディタ Atomの使い方をご説明する過程で、以下の HTML を作成しました。
15行の短いコードの中にHTMLの基本が詰まっています。

//list[][index.html][1]{
<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>HTML学習</title>
  </head>
  <body>
    <h1>初めてのHTML</h1>
    <p>
      HTMLを学習して、
      素敵なサイトを作れるように
      成ります。
    </p>
  </body>
</html>
//}

=== ファイル名について
ファイル名を、@<file>{index.html} としました。
@<file>{index}は、「索引」「指針」「指標」などの意味を持つ英単語です。
ウェブサイトにアクセスした際、特にページの指定がされなければ、ブラウザは @<file>{index.html}を表示します。例えば、@<file>{https://example.com/} にアクセスすると、ブラウザは@<file>{https://example.com/index.html}のファイルを表示します。

@<file>{.html}は、@<B>{拡張子}と呼ばれます。ファイルの種類が HTML であることを示しています。
拡張子が @<B>{.html}であるファイルを開くと、@<B>{OS}により既定のブラウザが開きます。


#@# @<file>{index}は、@<B>{ファイル名}と呼ばれます。後述する@<B>{拡張子}と区別する意図で、@<B>{主ファイル名}と呼ばれることもあります。

#@# == HTMLの文法

//image[html_head_body][][width=100%]{

//}

=== DOCTYPE
HTML文書の先頭に書かれている @<code>{<!DOCTYPE html>} は、@<B>{DOCTYPE宣言}と呼ばれます。その唯一の役割は @<B>{HTML5@<fn>{html5}}で書かれている旨をブラウザに伝えることです。今日では無意味な記述ですが、歴史的な経緯により、先頭に書く必要があります。

//footnote[html5][ウェブの発明者であるバーナーズリー氏が主催するW3Cの規格HTML5と、ブラウザ開発企業であるMozilla, Apple, Operaによって設立された団体WHATWGが推進する規格HTML Living Standard がありましたが、HTML Living Standard に合流する形で、HTML5は廃止されています。]


=== @<code>{<html>} と @<code>{<head>} と @<code>{<body>} について
@<code>{<html>} 全体は、大きく二つの部分 @<code>{<head>} と @<code>{<body>}  に分かれます。
@<code>{<head>}  は、ウェブページに関する設定を書く場所で、以下のことを記述しています。

 * 文字コードとして、@<code>{utf-8} を使用すること
 * 文書の表題が、「HTML学習」であること

@<code>{<body>} は、コンテンツ(内容・出し物)を書く場所で、以下を記述しています。

 * 大見出し(h1)に、「初めてのHTML」
 * 段落(p)に、「HTMLを学習して(略)」

//note[文字コードと「文字化け」について]{
かつてコンピュータが英数字しか扱えなかった時代、アルファベットの「@<code>{A}」は十六進数の@<code>{41}(十進数の@<code>{65})、「@<code>{B}」は@<code>{42}と番号を割り振っていました。これを @<ruby>{ASCII,アスキー}コードと言います。

その後、日本語を扱えるように拡張され、例えば「@<code>{日}」は 十六進数の @<code>{93 FA}と番号付けされました。これを @<ruby>{Shift JIS,シフトジス}コードと言います。

Shift JIS コードは長らく使われてきましたが、現在ではほぼ世界中の文字を扱えるようになった @<ruby>{UTF-8,ユーティーエフエイト} が標準となっています。例えば「@<code>{日}」には、@<code>{E6 97 A5}という文字コードが割り振られています。

同じ「@<code>{日}」という文字ですが、割り当てられている文字コードが違うため、古いウェブサイトを閲覧した際など、正しく文字が読めないことが起こります。これがいわゆる「文字化け」です。

@<code>{<meta charset="utf-8">} ととても短いコードですが、
せっかく作ったウェブサイトが文字化けしてしまわぬよう、
大事な役割を担っていたのですね。
//}



=== 要素とは
//sideimage[html11][60mm][sep=5mm,side=R]{
  @<code>{HTML}では、@<B>{コンテンツ(内容)} を @<B>{開始タグ} と @<B>{終了タグ} で @<B>{マークアップ} (印付け)することにより、その種類を明確にします。マークアップした部分は左のような構造になり、全体を要素と呼びます。

  この例では、開始タグ@<code>{<h1>}と、終了タグ@<code>{</h1>}で囲まれた範囲「初めてのHTML」が「大見出し」であることを示しています。
//}

人が見ると、「見出し」が「始めてのHTML」、「本文」が「HTMLを学習して・・・」であることは一目瞭然ですが、コンピュータにとってそれが何であるかは自明ではありません。そこで、@<code>{<h1>始めてのHTML</h1>}と書くことで、「始めてのHTML」が「大見出し」であることを「印付け（マークアップ）」してあげるのです。

それぞれが何であるかを表現できるように用意された適切なタグを使うことが、良いウェブサイト作りの第一歩になります。  @<fn>{fn-100}
//footnote[fn-100][全部で100以上のタグが用意されていますが、良く用いるタグは十数個です。安心して少しずつ学んでいきましょう。]

=== タグは入れ子にする
//sideimage[right_html][40mm][sep=5mm,side=R]{
複数のHTMLタグでマークアップする場合、開始タグと終了タグは、他のタグの中に完全に入った状態(入れ子)にすることが求められます。
//}
//sideimage[wrong_html][40mm][sep=5mm,side=R]{
上は正しいHTMLで、下は誤ったHTMLです。タグの対応状態を確認してください。
//}

=== 親要素と子要素
//sideimage[html14][60mm][sep=5mm,side=R]{
  入れ子の形で記述すると、階層構造が作られます。このとき、上位階層の要素を「親要素」、下位階層の要素を「子要素」と呼びます。

  例えば、@<code>{<body>} は @<code>{<h1>} の親要素、 @<code>{<h1>} は @<code>{<body>} の子要素です。
//}

=== コメント(覚書・説明書き)
//sideimage[comment][60mm][sep=5mm,side=R]{
ソースコードを分かり易くするための覚書、説明書きが出来るよう、@<B>{コメント} と呼ばれる構文があります。
//}
//vspace[latex][2mm]
作成したウェブサイトを閲覧する際にはないものとして扱われますので、文法上、絶対に書かなければ成らないものはありませんが、適切なコメントを書くことにより、自らの助けともなります。

また、不要となったコードを一時的に非表示にしたり、参考となるコードを残しておく為にも使うことが出来ます。

@<code>{<!--  -->} の間にコメントを書いていきますが、Atom など ほとんどのテキストエディタでは、@<code>{command + /} (コマンドキーと @<code>{/}キーを同時に押す)でコメントにしたり、もう一度押すとコメントを解除できます。エディタの支援機能を活用して、効率的にコーディングしていきましょう。

=== 字下げ(インデント)
HTMLでは、改行や空白は無視されますので、どのように改行しても良いですが、タグの親子関係(入れ子関係)が分かりやすいよう、綺麗に字下げ(インデント)することで、自分が書きたいことを明確にでき、コードの不具合も発見しやすくなります。

//sideimage[good_html1][60mm][sep=5mm,side=R]{
@<B>{好ましい字下げ 1}
@<br>{}
まったく字下げをせず一行に書いていますが、短いコードなのでひと目で分かります。
//}
//blankline

//sideimage[good_html2][60mm][sep=5mm,side=R]{
@<B>{好ましい字下げ 2}
@<br>{}
タグごとに字下げをした例です。タグの中にタグが配置されているという、抱合関係・親子関係が明確で、これも好ましいコードです。
//}
//blankline

//sideimage[good_html3][60mm][sep=5mm,side=R]{
@<B>{好ましい字下げ 3}
@<br>{}
全てのタグを字下げすると、行数の増加や、深く成りすぎた字下げにより、かえって分かりにくくなることもあります。
そのため、@<code>{<h1>}タグはそのまま書いてもひと目で内容が分かるので、字下げせずに書いた例です。これも好ましいコードです。
//}

//clearpage

//sideimage[bad_html][60mm][sep=5mm,side=R]{
@<B>{不適切な字下げ}
@<br>{}
字下げがめちゃくちゃに成っています。少し極端な例を挙げましたが、慣れないうちは書くことに一生懸命でついぐちゃぐちゃに成ってしまいます。上の三つの例のように見易く綺麗に整えることを心がけましょう。
//}

#@# //clearpage

#@# == ウェブサイトの土台を作る

#@# //abstract{
#@#   JavaScriptは主にウェブブラウザの中で動くプログラミング言語です。HTMLからJavaScriptを呼び出すことで、ジャンケンゲームを創り始めていきます。
#@# //}

#@# TODO: 複数のファイルを呼び出すんだよ〜って説明を

== ウェブサイトの完成形

#@# //flushright{
#@#   @<B>{iPhoneでの閲覧例} 　
#@# //}
#@#
HTML の文法を学び、基礎ができたところで、いよいよウェブサイトを作っていきましょう。
まず、どのようなサイトを作りたいか、デザインしましょう。

//image[ipad][][width=80%]

//sideimage[iphone][55mm][sep=5mm,side=R]{
@<href>{https://www.figma.com/ja/, Figma} など、設計用のサービスもございますが、手で有り合わせの紙にイメージを書き出すだけでも充分です。見出しの文字があって、こんな写真を載せてなど、書き出してみましょう。
ウェブサイトは、最近では iPhone で閲覧する人が大半です。ですので、iPhone で見たときと、iPad や Mac で見たときに、それぞれどのように見えるのか、スケッチすると良いでしょう。
//blankline
ここで作るサイトは、日本の美しい桜をテーマに、俳句の紹介をするサイトを作ることにしましょう。桜の写真と有名な俳人達、詠んだ俳句を配置したサイトにします。
//blankline
右はiPhoneで見たときの完成形のイメージ、iPadやMacで見たときの完成形のイメージは次頁のようにしましょう。

表示している文字や写真は同じものですが、画面幅に応じて見やすいように配置が変更している点にも注目してください。iPhone, iPad, Mac とそれぞれ閲覧する端末に適した配置となるようにウェブサイトを作ることを、@<B>{レスポンシブデザイン、レスポンシブウェブデザイン}と言います。

また、iPhone で見る人が多いことから、iPhoneでの見た目を優先して作っていくことを、「モバイルファースト」と言います。
//}

//clearpage

== HTMLを記述する

作成したいウェブサイトのイメージができたので、実際に HTML を書いて、ウェブサイトを作り始めていきましょう。

=== ビューポート

作成した@<file>{index.html}を編集し、次のように更新しましょう。

//list[][index.html][1]{
<!DOCTYPE html>
<html>
  <!-- サイトに関する設定事項を記述します -->
  <head>
    <!-- 文字コードの指定 -->
    <meta charset="utf-8">

    <!-- ページのタイトル -->
    <title>桜吹雪</title>

    <!-- ビューポート(視点)の指定をすると、
         iPhone でも きれいに見せることができる -->
    <meta name="viewport" content="width=device-width">
  </head>

  <!-- 表示したい内容・出し物・コンテンツを記述します -->
  <body>

  </body>
</html>
//}

HTMLの文法で解説したように、分かりやすくするために @<code>{<!-- -->} で囲まれた「コメント」を入れています。  @<fn>{comment}

ページのタイトルを、
//list[][][9]{
<title>桜吹雪</title>
//}
としましたので、ブラウザのタブに「桜吹雪」と表示されます。

//footnote[comment][このように多くのコメントを記入することはあまりありませんが、ご自身の読みやすさに合わせて、適宜記しておくと、理解の助けになると思います。]

//blankline
ここで、着目したいのは13行目の次の記述です。
//list[][][13]{
<meta name="viewport" content="width=device-width">
//}
先に述べたように、iPhone で見る人が多いので、この短いコードを入れておくことで、後々、それぞれの端末の表示幅に応じた配置ができるようになります。

=== サイト名

HTML は、ウェブサイトの「文書構造」を記述するための言語です。そして、サイトに表示する文字が、「見出し」なのか「本文」なのかなど、それぞれの要素に適した「タグ」を使って「印付け（マークアップ）」を行うことが、肝要でした。

ウェブサイトの完成図を見ると、いくつかの部品に分けられそうです。それぞれの部品に適した「印付け（マークアップ）」を行っていきましょう。

//sideimage[header][60mm][sep=5mm,side=R]{
まずは、サイト名から作っていきましょう。

サイト名を表すための専用のタグは用意されておりませんが、@<code>{<header>}タグを使って書くのが良さそうです。
現在、空っぽになっている @<code>{<body>}タグの中に書き加えて、次のようにしましょう。
//}

//list[][index.html][16]{
<!-- 表示したい内容・出し物・コンテンツを記述します -->
<body>
  <!-- ヘッダー(サイト名) -->
  <header>
    さくら
  </header>
</body>
//}

それでは、作成した @<file>{index.html} をブラウザで開き、ここまでの結果を
確認してみましょう。

//image[header-browser][][width=80%]{
//}

ブラウザのタブには「桜吹雪」と表示されています。また、画面上にも「さくら」とサイト名が表示されていますね。とてもうまくいっているようです。
今は、絵も色もなくて少し寂しいですが、最後には綺麗に仕上げていきますので、お楽しみに。

=== iPhone での 表示確認

//sideimage[shortcut_menu][60mm][sep=5mm,side=R]{
そして、せっかくの機会なので、ここで 今作っている桜吹雪のウェブサイトを iPhone で見たらどのように見えるのか、確認してみましょう。

画面上で、右クリック @<fn>{migi-click} して表示される「ショートカットメニュー」から「調査」をクリックしましょう。
//}

//footnote[migi-click][システム設定 - トラックパッド - ポイントとクリック - 副ボタンのクリック から 「右下隅をクリック」 に設定すると、右クリックできるようになります。]

画面下部にいろいろ表示されたことと思います。「開発者ツール」と呼ばれるもので、その名の通り、ウェブサイトを作り上げていく上でいろいろ役に立つ便利なツールです。

//image[iphone-browser][][width=80%]{
//}

絵の右下に、iPhone と iPad が重なったようなアイコンがあります。「レスポンシブデザインモード」と呼ばれるアイコンで、クリックすると、iPhone や iPad でどのように見えるか、切り替えることができます。 @<fn>{rdm}

//footnote[rdm][キーボードショートカットも用意されており、command + option + M でも、切り替えることができます。]

画面上部には、様々な端末に切り替えられるよう、良く用いられている端末名が用意されています。クリックしてみましょう。

//sideimage[device][60mm][sep=5mm,side=R]{
iPadやiPhoneなど様々な端末を選ぶことができます。iPhone SE 2nd gen iOS 14.6 @<fn>{iphone-se-2} を選びましたので、端末の画面サイズ、横 375px 縦 667 px が表示されています。

その右側にある iPhone のマークをクリックすると、横向きにした際の表示も確認できます。

また「リストを編集」をクリックすると良く使う端末だけを表示させたり、新しい端末が発売されたときに、画面サイズを登録することができます。
//}

//footnote[iphone-se-2][iPhone SE 第二世代のことです。現在は第三世代が提供されていますが、画面サイズは同じとなっています。]

//vspace[latex][7mm]

iPhone でも、ブラウザのタブには「桜吹雪」と表示されています。また、画面上にも「さくら」とサイト名が表示されており、とてもうまくいっています。

ウェブサイトの作成は、モバイルファーストで進めていきますので、このままiPhoneモードにしておきましょう。

//note[ピクセル数について]{
iPhone SE の画面サイズは、横 375px 縦 667 px です。px とは何でしょうか？
「IT用語辞典」に分かりやすい説明がございますので、引用して紹介いたします。

//quote{
ピクセルとは、デジタル画像や画面などを構成する最小単位である、色のついた微細な点のこと。また、その数を表す単位。単位を表す場合は “px” と略記されることもある。
//}

つまり、横に375個、縦に667個、小さな画素を配置することで、iPhone の画面が構成されています。(実際には、@<ruby>{Retina,レティナ}ディスプレイとして、より木目細かく見えるように二倍〜三倍の画素が搭載されています。)
//}

=== サイト名にリンクを設定する

サイト名をクリックすると、そのサイトのトップページに跳ぶように、リンクが設定されているのが一般的です。

ですので、サイト名を先ほど、次のようにマークアップしましたが、

//list[][index.html][19]{
<header>
  さくら
</header>
//}

これを、次のように更新しましょう。

//list[][index.html][19]{
<header>
  <a href="index.html">さくら</a>
</header>
//}

//sideimage[header-link][60mm][sep=5mm,side=R]{
@<code>{<a>} は、 @<code>{@<ruby>{anchor,アンカー}} (@<ruby>{錨,いかり})要素で、他の文書へのリンクを示す為に用いられる、ウェブサイトを特徴づけるタグです。

@<code>{href="index.html"} は、@<B>{属性}と呼ばれるもので、要素に関する追加情報を記すことができます。ここでは、@<code>{href}が@<B>{属性名}で、@<code>{index.html}が@<B>{属性値}です。
これにより「@<B>{さくら}をクリックすると@<file>{index.html}に跳ぶ」というリンクが実現できます。

//blankline
結果を確認してみると、サイト名の「さくら」が黒一色から、青字に下線が引かれた装飾 @<fn>{aoji}に変わっています。クリックするとリンクの効果により跳んでいくことも確認できるでしょう。

もっともこの場合は、@<file>{index.html}と自分自身へのリンクとなっていますから、同じ画面が表示されます。

属性値を @<code>{index.html}から@<code>{https://sakura-fubuki.netlify.app}に変更してみて下さい(@<code>{<a href="https://sakura-fubuki.netlify.app">さくら</a>}となります)。クリックすると完成したウェブサイトへ跳んでいけます(確認できたら元に戻しておきましょう)。
//}

//footnote[aoji][ネット草莽期には様々な表現が考案されました。流行り廃りはありましたが、地の文とリンクとを区別するために、今でも見かけるなじみのある装飾表現です。]

//vspace[latex][7mm]

=== ナビゲーションメニュー

//sideimage[nav][60mm][sep=5mm,side=R]{
次はナビゲーションメニューを作りましょう。

ナビゲーションを表すための専用のタグとして、@<code>{<nav>}が用意されていますので、これを使いましょう。
//}
//vspace[latex][2mm]

また、ナビゲーションメニューは、「トップ」「サイトについて」「お問い合わせ」といくつかの項目から構成されています。
箇条書きリストを示すためのタグとして@<code>{<ul>}が、一つ一つの項目用のタグとして @<code>{<li>} がありますので、使いましょう。

先ほど書いたサイト名の次にナビゲーションメニューを付け加えると次のようになります。

//list[][index.html][16]{
<!-- 表示したい内容・出し物・コンテンツを記述します -->
<body>
  <!-- ヘッダー(サイト名) -->
  <header>
    <a href="index.html">さくら</a>
  </header>

  <!-- ナビゲーションメニュー -->
  <nav>
    <ul>
      <li>トップ</li>
      <li>サイトについて</li>
      <li>お問い合わせ</li>
    </ul>
  </nav>
</body>
//}

//sideimage[nav-non-link][60mm][sep=5mm,side=R]{
それでは、結果を確認してみましょう。
箇条書きの項目一つ一つが表示され、ナビゲーションらしくなりました。

今はメニューが縦に並んでいますが、横に並べるのは後ほどCSSを使って装飾します。

ナビゲーションですので、クリックしたら跳ぶようにリンクを設定します。

//}
//vspace[latex][2mm]

そのために、

  * @<code>{<li>トップ</li>}　　　　 ⇨ @<code>{<li><a href="index.html">トップ</a></li>}
  * @<code>{<li>サイトについて</li>} ⇨ @<code>{<li><a href="#">サイトについて</a></li>}
  * @<code>{<li>お問い合わせ</li>}　 ⇨ @<code>{<li><a href="#">お問い合わせ</a></li>}

に、書き換えましょう。
すると、次のようなコードになります。


//list[][index.html][23]{
<!-- ナビゲーションメニュー -->
<nav>
  <ul>
    <li><a href="index.html">トップ</a></li>
    <li><a href="#">サイトについて</a></li>
    <li><a href="#">お問い合わせ</a></li>
  </ul>
</nav>
//}

項目であることを示す@<code>{<li>}タグの中に、アンカーリンクであることを示す@<code>{<a>}タグが抱合されていることが分かるでしょうか。
HTMLを書いていくときには、このような抱合関係、親子関係がとてもよく出てきます。

「メニューの一項目がコードの一行」と分かりやすいので、慣れてくると自然に感じますが、@<code>{<a>}タグの中に含まれる要素が沢山ある場合など、より抱合関係を明確にしたい場合には、次のように書くこともできます。

//list[][index.html][23]{
<!-- ナビゲーションメニュー -->
<nav>
  <ul>
    <li>
      <a href="index.html">
        トップ
      </a>
    </li>
    <li>
      <a href="#">
        サイトについて
      </a>
    </li>
    <li>
      <a href="#">
        お問い合わせ
      </a>
    </li>
  </ul>
</nav>
//}

表示結果はどちらも同じですので、場合によって適宜使い分けて下さい。
//blankline

//sideimage[nav-linked][60mm][sep=5mm,side=R]{
それでは、ナビゲーションメニューを確認してみましょう。
リンクもついて、より雰囲気が出てきました。
//}

//vspace[latex][2mm]

@<code>{href="index.html"} と書くことで、@<file>{index.html} へのリンクを設定できることを紹介しましたが、「サイトについて」や、「お問い合わせ」には @<code>{href="#"} という属性が設定されています。これは「自分自身への」リンクを設定するときの記述で、将来、@<file>{about.html}や@<file>{contact.html}へのリンクを設定するまでの仮置(プレースホルダ)として用いることもできます。

=== ヒーローイメージ

//sideimage[hero][60mm][sep=5mm,side=R]{
「ヒーローイメージ」とは「サイトを印象づける大きな画像」のことです。

春を彩る美しい桜を詠んだ俳句を紹介するサイトですから、大きな桜の絵を飾ることにしましょう。

//blankline
桜の画像はどのようにしたら良いでしょうか。自分で写真を撮りに行くのはもちろん良いですし、巻末の参考リンクにも掲載したように、多くのサイトでも豊富な写真やイラストが提供されていますので、そちらを利用するのも便利です。

ここでは、 @<href>{https://www.pakutaso.com/, ぱくたそ} より桜の写真を使わせていただくこととしましょう。
//blankline
それでは、先ほどのナビゲーションのあとに続けてコードを書いていきましょう。
//}
//vspace[latex][2mm]

//list[][index.html][23]{
<!-- ナビゲーションメニュー -->
<nav>
  <ul>
    <li><a href="index.html">トップ</a></li>
    <li><a href="#">サイトについて</a></li>
    <li><a href="#">お問い合わせ</a></li>
  </ul>
</nav>

<!-- ヒーローイメージ（サイトを印象づける大きな画像） -->
<figure class="hero">
  <!-- 写真の出典は ぱくたそ https://www.pakutaso.com/ より -->
  <img src="images/sakura.jpg" alt="青空と咲き誇る小彼岸桜">
</figure>
//}

ここでの要点は、何といっても次の一行です。
//list[][index.html][35]{
<img src="images/sakura.webp" alt="青空と咲き誇る小彼岸桜">
//}

@<code>{<img>}は、画像を表示するために用意されているタグです。
今まで登場してきた、@<code>{<a>}タグと比べると、大きく二つの違いがあります。

//notice[<img>と<a>との比較]{
@<code>{<img src ="images/sakura.webp" alt="青空と咲き誇る小彼岸桜">} @<br>{}
　@<code>{<a   href="index.html"                                  >トップ</a>}
//}

 * @<B>{コンテンツ(内容物)}や @<B>{終了タグ@<code>{</img>}}がない。 @<br>{}
   @<code>{<a>}タグの場合には、「トップ」がリンクであることが分かるよう、その前後を@<code>{<a>} と @<code>{</a>} で囲んでいましたが、
   @<code>{<img>}には、画像そのものを表示することが目的であるため、@<B>{開始タグ}のみで用件が済んでしまいます。そのため、コンテンツ(内容物)や終了タグがありません。 @<br>{}
   このように、コンテンツを持たない要素のことを、@<B>{空要素}と言います。

 * @<code>{src}と@<code>{alt}の二つの属性を持っている。 @<br>{}
   @<code>{src} 属性は、source(源泉) の 略で、表示したい画像の所在を与えます。ここでは、@<code>{src="images/sakura.webp"}と書くことで、@<file>{images}ディレクトリ(フォルダ)の中にある @<code>{sakura.webp} という画像を表示することを示しています。 @<br>{}
   もう一つの、@<code>{alt} 属性は、alternative(@<ruby>{代替,だいたい})の略で、何らかの理由で画像が見つからないときに表示する@<ruby>{代替,だいたい}テキストを指定します。また目の見えない方のための読み上げソフトも、これを利用して画像の内容を伝えますので、その絵を表すのに相応しい、テキストを記述しましょう。

//blankline
もう一つのポイントは、この@<code>{<img>}タグを囲むように書かれた @<code>{<figure>}タグです。
//list[][index.html][lineno=33&36]{
<figure class="hero">
  (略)
</figre>
//}

//sideimage[hero-non-css][60mm][sep=5mm,side=R]{
@<code>{<figure>}タグは、その内容物（コンテンツ）が、「図版」であることを示すために用いるタグです。写真の他にも、イラストや図、詩やプログラムコードなど、さまざまなものを含むことができます。

また、@<code>{<figure>}タグには、@<code>{class="hero"}と、属性名@<code>{class}と属性値@<code>{hero}が書かれています。属性名@<code>{class}は、特に@<B>{クラス名}とも呼ばれます。

@<B>{クラス名}は、「特定の要素を他の要素から区別する、異なる要素を同じものとして取り扱う」ために用います。

例えば、このサイトでは、多くの桜の写真が出現します。ヒーローイメージの桜は大きく、その他の桜は小さくなど、区別するためにとても便利です。

さて、結果を確認してみましょう。右のようになります。
完成形のヒーローイメージと比べると、桜の写真が見切れているようです。
写真が大きく画面幅に全てを収めきれていないためですが、後ほどCSSを用いて見栄えよくすることとして、今は先へ進みましょう。
//}

===[column] コンピュータによる画像表現

==== ラスター形式

//sideimage[nine][25mm][sep=5mm]{
コンピュータで画像を表現するにはどのようにしたら良いのでしょうか。
左は 8 × 8 = 64 個の画素を使って作成した 数字の「９」の画像です。
画素が光っていない黒を0, 光っている白を1とすると、
//quote{
//noindent
00000000
01111110
01111110
00000000
11111110
11111110
11111110
00000000
//}
の64@<ruby>{bit,ビット}(= 8 @<ruby>{Byte,バイト})で表現できます。
//}
//vspace[latex][2mm]

白黒画像でしたらこれで完了ですが、カラー写真では、フルカラー16,777,216色を表現するために、赤256段階(=8@<ruby>{bit,ビット})、緑256段階(=8@<ruby>{bit,ビット})、青256段階(=8@<ruby>{bit,ビット})が必要ですから、8 Byte × 8 × 8 × 8 = 512 @<ruby>{Byte,バイト}となります。

iPhone では、3,024 × 4,032 = 12,192,768 もの画素数で写真を撮ることができ、さらに赤1,024段階(=10ビット)、緑1,024段階(=10ビット)、青1,024段階(=10ビット)の1,073,741,824色が表現できます。なので、写真一枚を保存するために、
3,024 × 4,032 × 10 × 10 × 10 = 12,192,768,000 @<ruby>{bit,ビット} (=1,524,096,000 @<ruby>{Byte,バイト} =  1,488,375 @<ruby>{kB,キロバイト} = 1,453 @<ruby>{MB,メガバイト} = 1.4 @<ruby>{GB,ギガバイト}) もの容量が必要となります。数十枚写真を撮るだけで、容量一杯となってしまいます。
//blankline
そこで、写真の情報量をそのまま保存するのではなく、「@<B>{圧縮}」して保存することにしましょう。

先ほどの数字の「９」の例ですと、
//quote{
//noindent
黒黒黒黒黒黒黒黒 黒白白白白白白黒 黒白白白白白白黒 黒黒黒黒黒黒黒黒 白白白白白白白黒 白白白白白白白黒 白白白白白白白黒 黒黒黒黒黒黒黒黒
//}
とそのまま表現する代わりに、同じ色が続いているところは色の数を記すことにすると
//quote{
//noindent
黒９白６黒２白６黒９白７黒１白７黒１白７黒９
//}
と 22 文字で表現できます。さらに黒の次は白なので、省略できそうです。すると、

//quote{
//noindent
９６２６９７１７１７９
//}
と 11 文字で表現できます。

そのまま表現していた際には 64 文字必要でしたが、11 ÷ 64 = 17% と 約 1 / 6 で済みました。これが圧縮の原理です。(ランレングス圧縮というアルゴリズムで、FAXなどで用いられています。)
//blankline
FAXなどで用いられているランレングス圧縮ですが、繰り返しが少ないと効率が悪化するという弱点を抱えています。そこで、より優れた様々な圧縮アルゴリズムが考案されています。
例えば、iPhone では HEVC(High Efficiency Video Coding) 方式を採用することにより、一枚の写真を保存するために 1.4 @<ruby>{GB,ギガバイト} 必要であったものを、数 @<ruby>{MB,メガバイト} と、数百分の一に圧縮しています。

==== 次世代画像形式の@<ruby>{WebP,ウェッピー}

様々な画像形式が考案され、写真用の@<ruby>{JPEG,ジェイペグ}, 図やイラストのための@<ruby>{GIF,ジフ},@<ruby>{PNG,ピング}が主流となりましたが、こうした中登場したのが、次世代画像形式の@<ruby>{WebP,ウェッピー}です。

//quote{
//noindent
　WebPとは、グーグル社が開発・公開している画像ファイル形式の一つ。標準のファイル拡張子は「.webp」。Webページへ埋め込む静止画像に適した画像形式として、既存のJPEGやGIF、PNGの置き換えが可能である。 @<br>{}
　JPEGのような写真に適した高圧縮率の非可逆圧縮方式と、GIFやPNGのような図表やイラストに適した可逆圧縮方式の両方に対応する。透過PNGのようなピクセル単位の透過度(アルファチャンネル)が非可逆圧縮でも利用でき、GIFアニメーションのような簡易なアニメーション機能(フルカラー画像や非可逆圧縮も可)にも対応する。【出典: IT用語辞典】
//}

ウェブ制作会社ICSが提供する技術情報メディアがあります。HTML / CSS / JavaScriptを中心とした記事が多数掲載されています。@<ruby>{WebP,ウェッピー}について書かれた記事もございましたので、引用してご紹介いたします。 @<fn>{ics}

==== 次世代画像形式のWebP、そしてAVIFへ

長い間、Webの静止画に関しては「写真のJPEG、ロゴやイラストのGIF、透過画像のPNG」という明確な使い分けが確立されて来ました。WebPはこのすべてを置き換えることができる次世代のフォーマットです。

==== WebPはJPEG/GIF/PNG(APNG)をカバーする魅力的なフォーマット

WebPを使うことで、これまでは用途や画像の特徴ごとに使い分けが必要だったフォーマットの一本化が可能になります。主な特徴を簡単に紹介しましょう。

 * 高い圧縮率：同等画質のJPEGと比較して20-30%のサイズ削減（JPEGの置き換え）
 * 不可逆圧縮と透過アニメーションの併用（透過アニメーションでも画質を犠牲にしてサイズを削減できる）（GIF/PNGの置き換え）
 * 画質劣化のない可逆圧縮もサポート（GIF/PNGの置き換え）

//image[webp][][width=90%]

==== さらに次世代のフォーマット、AVIFも

  * 多様な色空間やサンプリング方式をサポート
  * WebPよりもさらに高画質でコンパクト（同じサイズでも画質が高く、JPEGに特有のブロックノイズも発生しない）
  * Amazon・Netflix・Google・Microsoft・Mozilla等の幅広い企業によるコンソーシアムが共同で開発（FacebookやAppleも後から参画）

//image[avif][][width=90%]

//blankline

@<code>{ImageMagick} @<fn>{imagemagick}等のツールを導入することで、簡単に画像形式を変換することができますし、また、ネット上でオンラインで変換してくれるサイトもございます。

画像の表示も速くなり、利用者に快適に閲覧してもらえますので、使っていきましょう。

===[/column]

//footnote[ics][@<href>{https://ics.media/entry/201001/,次世代画像形式のWebP、そしてAVIFへ}]

//footnote[imagemagick][@<href>{https://imagemagick.biz/,ImageMagickの使いかた 日本語マニュアル}]

=== キャッチフレーズ
//sideimage[h1][60mm][sep=5mm,side=R]{
それでは、続いてキャッチフレーズのコーディングに移りましょう。

悠久の歴史の中で、様々な俳句が詠まれてきましたが、俳聖「@<B>{松尾芭蕉}」のこの句を紹介することにしましょう。
//quote{
@<B>{扇にて 酒くむかげや ちる櫻}
//}
春の桜の下で宴を楽しんでいる様子、そして散る桜にふっと淋しさを覚えるそんな心情が浮かびます。
//}

//vspace[latex][2mm]

ヒーローイメージに続けて、コードを書いていきましょう。
次のようになります。

//list[][index.html][32]{
<!-- ヒーローイメージ（サイトを印象づける大きな画像） -->
<figure class="hero">
  <!-- 写真の出典は ぱくたそ https://www.pakutaso.com/ より -->
  <img src="images/sakura.jpg" alt="青空と咲き誇る小彼岸桜">
</figure>

<!-- キャッチフレーズ（ここでは 俳聖 松尾芭蕉の名句を紹介）-->
<h1>
  扇にて 酒くむかげや ちる櫻
  <a href="https://ja.wikipedia.org/wiki/松尾芭蕉">松尾芭蕉</a>
</h1>
//}

//sideimage[h1-non-css][60mm][sep=5mm,side=R]{
39行目で登場した、@<code>{<h1>}は、「大見出し」であることを示すタグです。@<code>{@<ruby>{Heading,ヘディング}(見出し)}が由来です。

また、ウィキペディアの松尾芭蕉へのリンクも作成しています。
//blankline
結果は右のようになります。俳句も表示され、リンクも設定されていることが確認できます。
//}

=== 装飾画像とソースコードへのリンクボタン

//sideimage[circle_linkbutton][60mm][sep=5mm,side=R]{
続いては、装飾画像とソースコードへのリンクボタンを作っていきましょう。
完成形のイメージは右のようになります。

円を三つ組み合わせた簡潔な装飾画像に、金色の美しいリンクボタンとなっています。

装飾画像は、@<code>{SVG (@<ruby>{Scalable,スケーラブル} @<ruby>{Vector,ベクター} @<ruby>{Graphics,グラフィックス})} という図形描画に適した画像形式のファイルで表示しています。

金色のボタンは、画像編集ソフトで作成することもできますが、CSSを使って綺麗に装飾しています。

//blankline
それでは、早速コードを見てみましょう。

//}

//list[][index.html][38]{
<!-- キャッチフレーズ（ここでは 俳聖 松尾芭蕉の名句を紹介）-->
<h1>
  扇にて 酒くむかげや ちる櫻
  <a href="https://ja.wikipedia.org/wiki/松尾芭蕉">松尾芭蕉</a>
</h1>

<!-- 装飾画像とソースコードへのリンクボタン -->
<p>
  <!-- 装飾画像 -->
  <img src="images/circle.svg" alt=""><br>
  <!-- ソースコードへのリンクボタン -->
  <a href="https://github.com/Atelier-Mirai/sakura-fubuki">
    ソースコードはこちら
  </a>
</p>
//}

//sideimage[circle_link_button_non_css][60mm][sep=5mm,side=R]{

結果は、右のようになります。
//blankline
ここで、登場した @<code>{<p>} タグは、@<code>{@<ruby>{paragraph,パラグラフ}}(段落)を表すためのタグです。通常の文章などを記述する際に広く用いることができるタグです。

@<code>{<p>} タグの中には、装飾画像のための @<code>{<img>}タグ、改行のための @<code>{<br>}タグ、リンクのための @<code>{<a>}タグと、三つのタグが含まれています。
//blankline
それぞれについて、解説していきます。
//}

==== @<code>{<br>}タグ
通常、特にCSSで設定を変更しない場合は、画像と文字はそのまま横に並んで表示されますので、@<code>{<br>}タグを入れて、改行しています。
//vspace[latex][7mm]

==== @<code>{SVG (@<ruby>{Scalable,スケーラブル} @<ruby>{Vector,ベクター} @<ruby>{Graphics,グラフィックス})}

画像の表現方法には、大きく分けて、「細かい画素それぞれに色を塗って表現する」@<B>{ラスター形式}と、「図形を表示するためのデータを指定した」@<B>{ベクター形式}の二通りがあります。

@<B>{ラスター形式}は、先に @<ruby>{WebP,ウェッピー}の欄で紹介したように、「細かい画素それぞれに色を塗って表現する」ため、図形や写真などどのような画像でも表すことができますが、ファイルサイズが大きくなる、拡大すると粗が見えるなどの特徴があります。

それとは対照的に、@<B>{ベクター形式}は、「図形を表示するためのデータを指定した」形ですので、円や四角など図形の表示は得意ですが写真の表現は苦手、ファイルサイズは小さく、拡大しても木目細かく綺麗に見えるなどの特徴があります。

@<code>{SVG}は、画像編集ソフトで作成するのが一般的ですが、HTMLに似た記法
@<fn>{xml} で書かれていますので、テキストエディタで編集することもできます。
//footnote[xml][XML（Extensible Markup Language）]

//list[][circle.svg]{
<?xml version="1.0" encoding="utf-8"?>
<svg version="1.1"
     xmlns="http://www.w3.org/2000/svg"
     xmlns:xlink="http://www.w3.org/1999/xlink"
     x="0px"
	   y="0px"
     viewBox="0 0 310 246"
     style="enable-background:new 0 0 310 246;"
     xml:space="preserve">

  <style>
    .st0 {
      opacity: 0.15;
      fill: #e7609e;
      stroke: #ffffff;
      stroke-width: 2;
      stroke-miterlimit: 10;
    }

    .st1 {
      fill: none;
      stroke: #e7609e;
      stroke-miterlimit: 10;
    }
  </style>

  <circle class="st0" cx="100" cy="100" r="100"/>
  <circle class="st0" cx="225" cy= "90" r= "80"/>
  <circle class="st0" cx="180" cy="180" r= "40"/>

  <circle class="st1" cx="100" cy="100" r="100"/>
  <circle class="st1" cx="225" cy= "90" r= "80"/>
  <circle class="st1" cx="180" cy="180" r= "40"/>
</svg>
//}

//sideimage[en][60mm][sep=5mm,side=R]{
詳しい説明は致しませんが、何となくですが、x座標100、y座標100に、半径100の円を書くと読めると思います。

右の「円の方程式」 @<fn>{juken}を想起しても良いかと思います。中心の座標と半径を指定したら、円周上の各点の座標をブラウザが計算して表示します。

「拡大縮小が得意、画像サイズが小さい、写真は苦手」というSVGの特徴が理解できるかと思います。
//}

//footnote[juken][図は、@<href>{https://univ-juken.com/en-hoteishiki,受験辞典}より引用]

//vspace[latex][7mm]

==== @<code>{<a>}タグ (@<ruby>{Git,ギット} / @<ruby>{GitHub,ギットハブ})

#@# //list[][][49]{
#@# <a href="https://github.com/Atelier-Mirai/sakura-fubuki">
#@#   ソースコードはこちら
#@# </a>
#@# //}

@<code>{<a href="https://github.com/Atelier-Mirai/sakura-fubuki">ソースコードはこちら</a>} は、既に見慣れたリンクを作成するためのコードです。

「ソースコードはこちら」が、リンクであることを示すために、@<code>{<a>}タグで印付け（マークアップ）しています。
そして、@<B>{属性名}@<code>{href}に、@<B>{属性値}@<code>{https://github.com/Atelier-Mirai/sakura-fubuki}をセットすることで、「ソースコードはこちら」をクリックすると、@<code>{https://github.com/Atelier-Mirai/sakura-fubuki} に跳ぶようにしています。
ここまでが、@<code>{<a>}タグの復習です。

それでは、リンク先の @<href>{https://github.com/Atelier-Mirai/sakura-fubuki,https://github.com/Atelier-Mirai/sakura-fubuki} に訪れてみましょう。

//image[github][][width=75%]

//sideimage[github_download][50mm][sep=5mm,side=R]{
「桜吹雪」の為に作成した、HTMLなどのソースコードが閲覧できます。
右上の緑色の@<B>{Code}ボタンから、コードをダウンロードすることもできます。
@<code>{ZIP}形式で圧縮されていますので適宜展開してください。手元のコンピュータでコードをいろいろ編集などできるようになります。
//blankline
@<code>{@<ruby>{Git,ギット}} や @<code>{@<ruby>{GitHub,ギットハブ}} を用いると、ソースコードのバージョン管理や、コードの公開、共用などとても便利です。ぜひ、学んでみてください。
//}

==== @<href>{https://www.amazon.co.jp/dp/4863543433/,改訂2版 わかばちゃんと学ぶ Git使い方入門}
//sideimage[wakaba][30mm][sep=5mm]{
せっかく学ぶなら、やっぱり楽しい方がいい。

「Gitって難しそう」「勉強しようとは思っているけど、なかなか一歩が踏み出せない」そんな方のための楽しくGitを理解できる本です。

・個性的なキャラクターたちが登場するマンガ・感覚的にわかる図解・丁寧な実践パート
上記3つの特長で、Gitを無理なく学べます。

仕事に必要な基本の使い方はもちろん、サンプルデータが使えるので、プルリクエストの練習・GitHub PagesでのWebページ公開もできます!

開発現場のリアルな声を反映。セクションごとに対応コマンドを掲載!さらなるレベルアップも可能に。付録として「コマンド操作に挑戦!」も追加されています。
//}

=== さくらを詠んだ俳句

//sideimage[haiku][70mm][sep=5mm,side=R]{
続いて様々な俳句を紹介しましょう。
//blankline
「さくらを詠んだ俳句」という見出しがあり、
その下に、

 * 桜の写真
 * 詠んだ俳句
 * 俳人名

が並ぶ構成です。

その生涯を知りたい方のために、ウィキペディアへのリンクも用意しましょう。
また、写真は今回も @<href>{https://www.pakutaso.com/, ぱくたそ} より使わせていただきましょう。
//blankline
仕様は固まりましたので、実装しましょう。どのようなコードを書けば良いでしょうか。

写真の載せ方は、@<code>{<figure>}タグや@<code>{<img>}タグを用いれば良いと、すでに学習しています。名前やリンクも、@<code>{<p>}タグや@<code>{<a>}タグを使えば良さそうです。
//blankline
見出しは、どうすれば良いでしょうか。

キャッチフレーズに 俳聖 松尾芭蕉の名句「扇にて 酒くむかげや ちる櫻」を紹介した際には、大見出しとして @<code>{<h1>}タグを使いました。

サイト全体の大見出しとして @<code>{<h1>}タグ を使いましたので、「さくらを詠んだ俳句」というこの「節」の見出しには、中見出しとして@<code>{<h2>}タグを、それぞれの俳句には、小見出しとして@<code>{<h3>}タグを使えば良さそうです。 @<fn>{h}
//}
//blankline
他に必要なタグとして、「写真と俳句、俳人名」が一@<ruby>{塊,かたまり}であることを示しておくと都合が良さそうです。このような目的のために、@<code>{<@<ruby>{article,アーティクル}>}タグが用意されています。「記事」という意味の英単語で、新聞や雑誌、ブログ記事など、それ自身でも独立して再利用できるものに使うことができます。

さらに、この六つの「記事」を束ねた「節」として、@<code>{<@<ruby>{section,セクション}>} タグが用意されています。書籍や文章の「節」という意味の英単語が由来で、ウェブサイトの区分、区間として用いることができます。
//blankline
以上を踏まえて、次のようにコードを書きましょう。

//footnote[h][以下 @<code>{<h4>, <h5>, <h6>} まで用意されていますが、あまり使うことはないでしょう。]

//list[][index.html][lineno=54-72&123]{
<!-- 俳句の紹介 -->
<section>
  <!-- h2 は 中見出し -->
  <h2>さくらを詠んだ俳句</h2>

  <!-- それぞれの俳句の紹介 -->
  <article>
    <!-- ウィキペディアへのリンク -->
    <a href="https://ja.wikipedia.org/wiki/小林一茶">
      <!-- 桜の写真を載せる -->
      <figure>
        <img src="images/ipponzakura.webp" alt="">
      </figure>
      <!-- h3 は小見出し -->
      <h3>穀つぶし 櫻の下に くらしけり</h3>
      <!-- 詠んだ人の名前 -->
      <p>小林一茶</p>
    </a>
  </article>
  (略)
</section>
//}

//sideimage[haiku_non_css][60mm][sep=5mm,side=R]{
早速、ブラウザで確認してみましょう。右のように表示されていれば完成です。
//}

=== フッター
//sideimage[footer][60mm][sep=5mm,side=R]{
長いHTMLの旅もいよいよ最後です。フッターを作っていきましょう。

フッターは、文書の最後に置かれる定型情報で、連絡先やナビゲーションメニュー、著作権などが良く記されます。
//}

ここでは、とっても簡潔に @<ruby>{©,コピーライト} のみのフッターにしましょう。
コードは、次のようになります。

//list[][index.html][123]{
</section>

<!-- フッター（著作権や連絡先など） -->
<footer>
  <div>
    <p>© さくら</p>
  </div>
</footer>
//}

//sideimage[footer_non_css][60mm][sep=5mm,side=R]{
ヘッダー(サイト名)を表示する際に、 @<code>{<header>}タグを用いましたので、@<code>{<footer>}タグは、連想が付いたのではないでしょうか。
//}
//vspace[latex][2mm]
また「段落」というほどの分量ではありませんが、「© さくら」のために @<code>{<p>}タグを用いています。

@<code>{<div>}タグは、@<code>{@<ruby>{division,ディビジョン}}(分割、部門)が由来です。いったいどのような役割を果たすためのものでしょうか。

@<code>{<div>}タグは、他のタグとは異なり、特別な意味を持たない汎用的なタグです。フッターには、もしかすると住所や電話番号などの連絡先、ナビゲーションメニューなどが配置されるかもしれませんが、これらを束ねるための適切なタグがないため、汎用的に使える @<code>{<div>}タグを用いています。

=== HTML 全ソースコード

今まで作ってきた HTML 全ソースコード を掲載いたします。
HTML(HyperText Markup Language)は、文書構造を記述するための言語です。
意味が理解できるのではないでしょうか。

//list[][index.html][file=source/sakura_fubuki/index5.html,1]{
//}
