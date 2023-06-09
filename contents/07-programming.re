= プログラムとは

#@# //abstract{
#@#   プログラムとは何か？ その語源を訪ね、そして今日使われているいくつかのプログラミング言語をご紹介します。そして学校教育でのいくつかの事例をご紹介します。
#@# //}

#@# === プログラミング言語
#@# コンピュータはよく人に喩えられます。コンピュータは、原理的には、人の論理的な思考のすべてが可能です。
#@#
#@# コンピュータの特色は、
#@#   * 高速に計算できる!!(一秒間に数十億回も!!)
#@#   * 繰り返しが得意!!(1日でも1年でも飽きることなく同じことを繰り返します)
#@#   * 博覧強記!!(絶対忘れません!!)
#@#   * 命令どおりに動く(逆に言うと、気を回したり機転を利かすことはできないのですが、膨大な計算の結果、AI(人工知能)は人間らしく見えます)
#@#
#@# コンピュータに、何かさせたいと思ったら、命令をする必要があります。例えば、
#@# 3+8を計算せよ 半径3cmの赤い円を描け 440 Hz(ラ) の音を出せなどです。どうやったら命令できるのでしょう?人間がコンピュータに命令を指示するために 作られた言語が、プログラミング言語です。よく使われているところでは、Ruby(ルビー)、 C(シー)、Java(ジャバ)などがあります。
#@# この本では、JavaScript(ジャバスクリプト)という、ブラウザの上で動く言語を使って、じゃんけんゲームを作ります。
#@#
#@#
#@# TODO: GUI と CUIのお話もあったほうがいい？
#@# （ざっくり触れて、詳しくは、参考文献読んでねにしましょうか）

== 「プログラム」＝「コンピュータへの指示書」
今日の「コンピュータ」＝「電子計算機」が登場する以前から「プログラム」という言葉は使われてきました。
語源は「前に書かれたもの」で、街頭で大勢に示す文書「公文書」の意味です。
#@# //blankline

アルゴリズムとは、ある特定の課題への解法、解き方の手順を書き表したものでしたが、このアルゴリズムを、コンピュータが計算できるよう、コンピュータが理解できる言語で書き表したもの、それが「プログラム」です。
「プログラム」＝「コンピュータへの指示書」です。
#@# //blankline

その昔のコンピュータは、特定の用途の計算のみを行うことができました。（専用計算機）
黎明期のコンピュータは、回路と回路の間の配線を繋ぎ代えることで、異なる種類の計算も行うことができるようになりましたが、たくさんの配線を繋ぎ代えることはとても大変です。
そのために生まれたアイディアが、
「計算機への指令」＝「プログラム」
そのものを計算機に内蔵するというアイディアです。これにより、様々な手順を必要なときに読み込んで書かれた通りの計算を行うことができるようになりました。
これが、現在ほとんどのコンピュータで広く採用されている「プログラム内蔵方式」＝「ノイマン・アーキテクチャ」です。
#@# //blankline

また、シャノン等によりスイッチのオンとオフの回路（スイッチング回路）から、論理回路・デジタル回路への道が拓かれたことや、チューリングによるチューリングマシンの研究、19世紀を生きた数学者であるジョージ・ブールの仕事、ブール代数も、今日のコンピュータの存在に大きく貢献しています。

コンピュータのプログラムは、3つの要素で成り立ちます。

 * 順次処理：上から下へ順番に進みます。
 * 条件判断：YESかNOで答えられる質問です。
 * 繰り返し：何回でも反復します。

これらを組み合わせて、自らの意図する機能を創り上げていきます。

#@# TODO: プログラミングの要素なので、
#@# あと、変数や、関数、データ構造としての配列や連想配列などの説明もあるといいかも

== プログラミング言語の種類
人間がコンピュータに指示するために作られた言語が、プログラミング言語です。
用途に応じ様々なプログラミング言語が考案されてきました。そのいくつかをご紹介します。

=== 機械語(左) と アセンブリ言語(右)
//sideimage[machine][50mm][sep=5mm]{
機械語は、「0」と「1」の二進数や「0」-「Ｆ」までの十六進数を書き連ねたものです。
コンピュータはこれを読み取り直接解釈、実行可能な命令データの集まりです。

アセンブリ言語は、コンピュータが直接解釈実行可能な機械語を、人間にわかりやすいよう英略語を用いて書き表した言語です。

左側の機械語は分かりにくいですが、右側のアセンブリ言語は、CLC:比較せよ, LDA:読み込め, ADC:足せ, STA:書き込め, BRK:中断 など、人に理解しやすくなっています。
//}

#@# TODO:
#@# FORTRAN
#@# COBOL
#@# BASIC

=== C言語
//sideimage[c][50mm][sep=5mm]{
@<B>{1 から 10 までの合計を求める}

略してC(シー)ともいいます。比較的人に読みやすい文法を持ちながら、機械に近いところまで書き表すことができるので、小さなコンピュータ(マイコン)が組み込まれた電子機器のプログラミングや、UNIX(ユニックス)などOS(オペレーティングシステム)の開発などに広く用いられています。
//}

=== Ruby(ルビー)
//sideimage[ruby][50mm][sep=5mm]{
@<B>{1 から 10 までの合計を求める}

まつもとゆきひろさん(通称 Matz)により開発されたオブジェクト指向スクリプト言語です。日本で開発されたプログラミング言語として初めて国際電気標準会議で国際規格に認証されました。

開発者のまつもとゆきひろさんは、「Rubyの言語仕様策定において最も重視 しているのはストレスなくプログラミングを楽しむことである (enjoy programming)」と述べています。
//}

=== Scratch(スクラッチ)
//sideimage[scratch][50mm][sep=5mm]{
@<B>{1 から 10 までの合計を求める}

MITメディアラボが開発した視覚的なプログラミング言語で、初めてプログラミングをする小学生が、遊び心ある実験やアニメ、ゲームなどを作ったりすることができます。

小学生でも Ruby を使ってプログラムやロボットを作れるようにした、Smalruby もお薦めです。
//}
@<fn>{smalruby}
//footnote[smalruby][@<href>{https://smalruby.jp,NPO法人Rubyプログラミング少年団}]



#@# == プログラム開発の手順
#@#
#@# TODO: ここで述べるのが適切？　そもそもいる？
#@#
#@# さまざまな開発手法があるが、ここでは、ウォーターフォールモデルの例を挙げる。
#@# 1. プログラムの仕様決定(外部設計) i. 課題を明確にする
#@# ii. 解決のためのアイデアを練る iii. 必要な仕様を決定する
#@# 2. プログラム設計(内部設計)
#@# i. データ構造、アルゴリズムを設計する
#@# ii. フローチャート等を作成する 3. プログラムのコーディング
#@# i. プログラミング言語の文法に従って、プログラムを書く 4. プログラムのデバッグ・テスト
#@# i. 文法エラー、論理エラーを取り除く。
#@# ii. 単体テスト、結合テストを行う。
#@#     タイプミス等の修正を行う。
#@#     「外部設計」で顧客の要求仕様を十分に検討し、「内部設計」で処理手順を十分に検
#@#     討しているとよいが、そうでなかった場合、この段階において出戻りが発生する場合
#@#     がある。
#@# 5. プログラムのドキュメント作成 各工程でドキュメント作成を並行して進めるとよい。 ドキュメントには以下の2種類ある
#@#     システムレベルドキュメント
#@# プログラムの保守、管理のための技術的情報の記録 (ソースコードからドキュメントを自動生成する手法もある)
#@#     ユーザレベルドキュメント
#@#      プログラム利用者のための使用説明書
#@#
#@# TODO: 発祥や、開発者名、使われている分野など追記
#@#

== 学校教育でのプログラミング
小学校からプログラミング教育が始まりました。概要を文部科学省より引用します。

=== なぜプログラミング教育を導入するのか
今日、コンピュータは人々の生活の様々な場面で活用されています。家電や自動車をはじめ身近なものの多くにもコンピュータが内蔵され、人々の生活を便利で豊かにしています。誰にとっても、職業生活をはじめ、学校での学習や生涯学習、家庭生活や余暇生活など、コンピュータなどの情報機器やサービスとそれによって@<ruby>{齎,もたら}される情報を適切に選択・活用し問題を解決していくことが不可欠な社会が到来しつつあります。

コンピュータをより適切、効果的に活用していくためには、その仕組みを知ることが重要です。コンピュータは人が命令を与えることによって動作します。端的に言えば、この命令が「プログラム」であり、命令を与えることが「プログラミング」です。プログラミングによって、コンピュータ自分が求める動作をさせることができるとともに、コンピュータの仕組みの一端をうかがい知ることできるので、コンピュータが「魔法の箱ではなくなり、より主体的に活用することにつながります。

プログラミング教育は子供たちの可能性を広げることにも@<ruby>{繋,つなが}ります。プログラミング能力を開花させ、創造力を発揮して、起業する若者や特許を取得する子供も現れています。秘めた可能性を発掘し、社会で活躍できるきっかけとなることも期待できるのです。

このように、コンピュータを理解し上手に活用していく力を身に付けることは、あらゆる活動においてコンピュータ等の活用が求められるこれからの社会を生きていく子供たちにとって、将来どのような職業に就くとしても、極めて重要なこととなっています。
@<fn>{1}
//footnote[1][出典：文部科学省：小学校プログラミング教育の手引(第三版)]

=== 小学校でのプログラミング教育のねらい
 - 1. 「プログラミング的思考」を育むこと。
 - 2. プログラムの働きや良さ、情報社会がコンピュータ等の情報技術によって支えられていることに気付き、コンピュータを活用して身近な問題の解決や、よりよい社会を築く態度を育むこと。
 - 3. 各教科内容を指導する際に行う場合は、各教科で学びをより確実なものとすること。

小学校においては、文字入力など基本的な操作を習得、プログラミングを体験しながらコンピュータに意図した処理を行わせるために必要な論理的思考力を身に付ける。

=== 中学校でのプログラミング教育のねらい
中学校においては、技術・家庭科においてプログラミング、情報セキュリティに関する内容を充実「計測・制御のプログラミング」に加え、「ネットワークを利用した双方向性のあるコンテンツのプログラミング」等について学ぶ。

=== 高等学校でのプログラミング教育のねらい
高等学校においては、情報科において共通必履修科目「情報I」を新設し、全ての生徒がプログラミングのほか、ネットワーク（情報セキュリティを含む）やデータベースの基礎等について学習「情報I」に加え、選択科目「情報II」を開設。「情報I」において培った基礎の上に、情報システムや多様なデータを適切かつ効果的に活用し、あるいはコンテンツを創造する力を育成。@<fn>{2}

//footnote[2][出典：文部科学省 新学習指導要領のポイント（情報活用能力の育成・ＩＣＴ活用）]

=== プログラミング的思考とは
「自分が意図する一連の活動を実現するために、どのような動きの組合せが必要であり、一つ一つの動きに対応した記号を、どのように組み合わせたらいいか、記号の組合せをどのように改善していけば、より意図した活動に近づくのか」を論理的に考えていく力。

=== 「正多角形を描く」場合について考える
//sideimage[triangle][40mm][sep=5mm]{
コンピュータで正三角形を描く場合を見てみます。
「正三角形を描く」という命令は通常は用意されていないので、そのままでは実行できません。そこで、コンピュータが理解できる(用意されている)命令を組み合わせて命令することを考えます。
紙の上に作図する場合、正多角形がもっている「辺の長さが全て等しい」、「角の大きさが全て等しい」、「円に内接する」、「中心角の大きさが全て等しい」のような正多角形の意味や性質を使って作図します。

コンピュータで作図する場合にも同様に考えます。ここでは「辺の長さと、角の大きさが全て等しい」という正多角形の意味を使い作図する例を考えます。
//}
//vspace[latex][2mm]
この場合、「長さ 100 進む(線を引く)」、「左に120度曲がる」といったコンピュータが理解できる(用意されている)命令を組み合わせることで「正三角形を描け」ます。

より大きな正三角形を描きたければ、「長さ200進む(線を引く)」というように修正します。曲がる角度を変えることで、正六角形や正八角形も描くことができます。

紙の上に鉛筆と定規、分度器やコンパス等を用いて正三角形を描く際も、用いる性質や手順は異なるとしても、児童は同じように手順を考えた上で作図しているはずです。

=== 未来の学びコンソーシアムより 実践例の紹介
#@# @<fn>{fn-manabi}
//image[manabi3][][width=70%]
#@# //footnote[fn-manabi][@<href>{https://miraino-manabi.jp, 未来の学びコンソーシアム}]
