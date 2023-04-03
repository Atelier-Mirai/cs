= 始めに

楽しいプログラミングの世界へようこそ。

情報技術「IT」に囲まれた生活を送るわたくしたち。
多くの先人が築いた歴史の上に@<ruby>{今日,こんにち}があります。
//blankline
基礎篇では、「計算機の歴史と仕組み - 暮らしに生きるコンピュータ」として、算盤からiPhoneまで、コンピュータの歴史と仕組みを学びます。
また、アルゴリズムや学校教育におけるプログラミングについても簡単にご紹介しています。

#@# 第二部では、今日のネット社会に欠かせないウェブサイトを作成していきます。美しい日本の素晴らしさを象徴する「さくら」を詠んだ俳句からなるホームページです。
#@# //blankline
実践篇では、「じゃんけんゲームを創ろう - 初めてのウェブプログラミング」として、HTML / CSS / JavaScript を学び、じゃんけんアプリを作り上げていきます。
簡単なじゃんけんゲームですがiPhoneでも楽しめるものとなっています。
#@# //blankline

巻末には、今後の成長へつなげて欲しいとの願いから、参考書籍、参考リンク集、HTML / CSS / JavaScript の簡易まとめを付けました。
//blankline
現代の魔法、それがプログラミングです。
自由自在にコンピュータを操って、幸せな未來へと大きく羽ばたいていってください。

=== 対象読者
パソコンの操作ができる、初心者の方を想定しています。ウェブサイトを作ってみたい方や、プログラミングに興味があって、なにかアプリを作ってみたい人の最初の一歩になればと願っています。 @<fn>{mac}

//footnote[mac][コンピュータとして Mac をお使いの方を対象に執筆しておりますので、Linux や Windows をお使いの方は、キーボード操作等、一部異なる箇所がございます。適宜読み替えていただければ幸いです。]

計算機の歴史や歩みに興味がある方への最初の一冊として、あるいは、誰かに教えたいと思っている方が学習希望者にお渡しするテキストとして、お読み頂ければ幸いです。

=== プログラムのダウンロード
この本で作成する「じゃんけんゲーム」のプログラムは、GitHub上 @<fn>{github2}で公開しています。
//footnote[github2][@<href>{https://github.com/Atelier-Mirai/janken}]

また、ネット上でも公開 @<fn>{netlify2}しておりますので、お楽しみください。
//footnote[netlify2][@<href>{https://joyful-janken.netlify.app}]

=== 謝辞
//sideimage[kauplan][30mm][sep=5mm,side=R]{
  @<href>{https://kauplan.org/reviewstarter/, Re:VIEW Starter}を用いて、快適に執筆することができました。作者の kauplan さんに厚く御礼申し上げます。
//}

//sideimage[hayase_hiromu][30mm][sep=5mm,side=R]{
  また、表紙絵の女の子は、千葉県松戸市在住のフリーランスSDイラストレーター @<href>{https://hiromu-hayase.tumblr.com,早瀬ひろむ}さんの作品です。素敵なイラストを描いてくださり、ありがとうございます。
//}
//flushright{
  @<B>{早瀬ひろむ} さん　
//}

//sideimage[kuraudo_shokunin][30mm][sep=5mm,side=R]{
  背景の櫻と青空の絵は、@<href>{https://www.photo-ac.com/profile/590911,くらうど職人}さんの作品です。櫻咲く青空で心も明るくなります。
//}
//flushright{
  @<B>{くらうど職人} さん　
//}

また、信頼できる文献に触れて欲しいとの思いから、ＭＤＮやウィキペディア等、多くの文献より引用させていただいております。貢献に感謝するとともに、厚く御礼申し上げます。

=== 著者紹介
//sideimage[logo_l][20mm][sep=5mm]{
  卓越した技能を有する者として認められる国家資格「応用情報技術者」を保持。
  平成30年より「@<href>{https://atelier-mirai.net/, アトリヱ未來}」を創業。
  HTML講座やRuby講座などプログラミングの個人指導や、ITパスポート講座等の資格講座の開催、ウェブサイト作成等を受注している。

  趣味の将棋は、日本将棋連盟より三段の免状を允許。
  日本の美しい自然や豊かな精神性を宿す熊野古道を歩くことや、たくさんの花に囲まれた日々を愛している。
//}


//vspace[latex][10mm]

===[column] 金の延棒クイズ

二進数の不思議を感じる、ちょっと豊かな気分に成れるクイズです。
@<br>{}
@<small>{(正解はこの本のどこかにあるよ。最後まで読んでね。)}
//blankline

//sideimage[gold][35mm][sep=5mm]{
七日の給料の支払いとして金の延べ棒が一本あります。これを使って仕事をしてくれる方への日当を支払いたいと思います。

六回鋏を入れ七等分すれば日払いできますが、金の延べ棒を六回も切り取るのは大変です。

必要最小限の二回切り取ることとしたいですが、どことどこを切れば良いでしょうか？
//}
//blankline
