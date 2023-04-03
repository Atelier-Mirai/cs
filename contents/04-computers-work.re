= コンピュータの仕組み

#@# //abstract{
#@#   一台のコンピュータ。その中身はどのようになっているのでしょう。 @<br>{}
#@#   ハードウェアの仕組みを紹介します。
#@# //}
#@#
//sideimage[computer][55mm][sep=5mm,side=R]{
  机の上に置かれたコンピュータ。その中身を覗いてみると、演算・制御装置、記憶装置、入力装置、出力装置など、たくさんの部品からできています。
  IT用語辞典 @<fn>{1} から抜粋しつつ、その詳細を見ていきましょう。
//}
//vspace[latex][2mm]
//footnote[1][IT用語辞典 https://e-words.jp/]

== ハードウェア

//sideimage[cpu][40mm][sep=5mm]{
@<B>{CPU}

中央処理装置(Central Processing Unit)とは、コンピュータの主要な構成要素の一つ。他の装置・回路の制御やデータの演算などを行う装置で、演算装置と制御装置が統合されている。
CPUはメインメモリ（RAM）に格納された機械語のプログラムを、バスを通じて
//}
//vspace[latex][2mm]
一命令ずつ順番に読み出し（フェッチ）、その内容を解釈して行うべき動作を決定（デコード）し、内部の回路を駆動して実際に処理を実行する。

一度に4ビットのデータを処理できるCPUを4ビットCPUというように呼び、当初の4ビットから、8, 16, 32ビットと拡張され、現代では64ビットCPUが普及している。

高い周波数信号で動作するCPUほど、多くの処理を行え性能が高い。2GHz(ギガヘルツ: 毎秒10億回)で動作するCPUと1GHzのCPUならば、約2倍の速度差がある。
//vspace[latex][7mm]

//sideimage[memory][40mm][sep=5mm]{
@<B>{メモリ}

メモリとは、記憶、記憶力、回想、追憶、記念などの意味を持つ英単語。IT分野ではコンピュータに内蔵される半導体集積回路（IC）を利用したデータの記憶装置を指す。
コンピュータを構成する装置の一つで、CPUから直接読み書きすることができる記憶装置のことを「主記憶装置」という。
//}
//vspace[latex][2mm]

一般に主記憶装置は外部記憶装置よりはるかに高速に動作する装置が用いられるが、単価や装置構成上の制約から少ない搭載容量となっている。このため、コンピュータは起動すると外部記憶から主記憶に必要なプログラムやデータを読み込んで実行し、不要となったデータは主記憶から消去して新たに必要になったものと入れ替える。永続的な保管が必要なデータは外部記憶へ書き込み保存する。
//vspace[latex][7mm]

//sideimage[hdd][40mm][sep=5mm]{
@<B>{ストレージ}

ストレージとは、コンピュータの主要な構成要素の一つで、コンピュータが利用するプログラムやデータなどを永続的に記憶する装置。磁気ディスク（ハードディスクHDD）や光学ディスク（CD/DVD/Blu-ray）、フラッシュメモリ（USBメモリ/メモリカード/SSD）、磁気テープなどがある。
//}
//vspace[latex][2mm]
同じコンピュータに搭載される装置同士で比較すると、ストレージはメモリに比べて記憶容量が数桁（数十～数千倍）大きく、容量あたりのコストが数桁小さいが、読み書きに要する時間が数桁大きい。

写真は、磁性体を利用したHDD(ハードディスクドライブ)のものであるが、半導体を利用したSSD(ソリッドステートドライブ)がその高速性から普及している。
//vspace[latex][7mm]

//sideimage[mother_board][40mm][sep=5mm]{
@<B>{マザーボード}

マザーボードとは、コンピュータの主要な構成部品の一つで、マイクロプロセッサやメモリなど他の部品を装着し、通電したり相互に通信できるようにする基板のこと。プラスチックなどでできた板状の装置で、表面や内部に各装置を結ぶ配線や制御用の半導体チップ、
//}
//vspace[latex][2mm]
電子部品などが高密度に実装されている。プロセッサやメモリモジュール、拡張カードなどを装着するためのスロットやソケットなどの接続部品、電源ユニットからのコードを差し込む電源コネクタ、ストレージ(外部記憶装置)など周辺機器接続用のケーブルを差し込むコネクタなども配置されている。
#@#
#@# コネクタの一部は筐体背面などにむき出しになるよう設計されていることが多く、外付けの周辺機器や入出力装置（キーボード、マウス、ディスプレイ、プリンタ、スピーカーなど）などのケーブルを差し込むことができる。
#@#
#@# デスクトップパソコン向け製品などでは、異なるメーカーの部品を組み合わせて使えるよう、マザーボードの形状や寸法、主要な部品の配置などの標準規格が決められている。

//vspace[latex][7mm]

//sideimage[keyboard][40mm][sep=5mm]{
@<B>{入力装置(キーボード)}

正方形や横長の小さなボタンが縦横に整然と並び、文字や記号、コンピュータへの指示などを送信するための入力装置。100前後のキーが4～5段に並び、各キーの上部に入力される文字や機能が記されて
//}
//vspace[latex][2mm]
おり、キーを押すと、そのキーが押されたという信号がコンピュータへ送信される。
//vspace[latex][7mm]

//sideimage[display][40mm][sep=5mm]{
@<B>{出力装置(ディスプレイ)}

ディスプレイとは、表示、展示、陳列、掲示、飾り付け、示すなどの意味を持つ英単語。IT分野では、コンピュータの出力装置の一つで、画面を発光させて像を映し出す表示装置（display device、ディスプレイ装置）のこと。「モニター」（monitor）とも呼ぶ。

コンピュータの操作画面を映像として電気的に映し出し、処理状況の変化や利用者の操作に即時に反応して表示内容を変化させることができる。
//}
//vspace[latex][2mm]
データとして記録された動画像を再生・表示することもできる。
ディスプレイ以前に主要な出力装置として利用されていたのは印字装置（プリンタ）であり、状況や操作を表示内容にリアルタイムに反映する特徴は画期的で便利な特性だった。

ディスプレイの画面は格子状に規則正しく並んだ微細な画素（ドット/ピクセル）から成り、その発光状態を電気的に制御してコンピュータから受信した映像信号を表示する。一つの画素を光の三原色に対応する微細な素子で構成し、カラー表示を行う。
//vspace[latex][7mm]

//sideimage[USB-Connector][40mm][sep=5mm]{
@<B>{USB ユニバーサルシリアルバス)}
USBとは、主にコンピュータと周辺機器を繋ぐ為に用いられるデータ伝送路の標準規格。キーボードやマウス、プリンタ等の接続方式として広く普及している。

初期の規格(USB 1.1)では12Mbps(メガビット毎秒)、最新の規格(USB4)では40Gbps(ギガビット毎秒)までの通信速度に対応する。
当初はキーボードなどの入出力装置から普及が始まったが、
//}
#@# シリアル伝送方式を採用したバス型（信号線共有型）の接続規格で、一つの伝送路を最大127台の機器で共有することができる。コンピュータ側には通常1～4つ程度のポート（差込口）が用意されており、これで足りない場合はUSBハブと呼ばれる集線装置を介してポートを増やすことができる。コネクタのホットプラグに対応しており、コンピュータ本体の電源を落とさずに周辺機器の着脱ができるようになっている。

//vspace[latex][2mm]
通信速度の向上に伴いネットワークアダプタ(EthernetアダプタやWi-Fiアダプタ)や、外部接続の光学ドライブ、ハードディスクなどに利用が広がっていった。手軽なデータの受け渡し手段としてフラッシュメモリを内蔵したUSBメモリもよく使われる。


#@# TODO:
#@# 通信(WiFiやLANは？ USBは？)
#@# もう少し、説明を補足

== ソフトウェア
コンピュータを構成する電子回路や装置など、物理的実体がある「ハードウェア」に対し、それ自体は形を持たないプログラムや付随するデータなどをソフトウェアという。

コンピュータを動作させる命令の集まりであるコンピュータプログラムを組み合わせ、何らかの機能や目的を果たすようまとめたもので、その役割により、ハードウェアの制御や他のソフトウェアへの基盤的な機能の提供、利用者への基本的な操作手段の提供などを行なう「オペレーティングシステム」（OS：Operating System / 基本ソフト）と、特定の個別的な機能や目的のために作られた「アプリケーションソフト」に大別される。

=== OS (Operating System / 基本ソフト)
機器の基本的な管理や制御のための機能や、多くのソフトウェアが共通して利用する基本的な機能などを実装した、システム全体を管理するソフトウェア。

入出力装置や主記憶装置、外部記憶装置の管理、外部の別の装置やネットワークとのデータ通信の制御などが主な役割で、コンピュータに電源が投入されると最初に起動し、電源が落とされるまで動作し続ける。利用者からの指示に基いて記憶装置内に格納されたソフトウェアを起動したり終了させたりすることができる。

パソコン向けのOSとしては、Microsoft社の Windows や Apple社の mac OSや、Linuxがある。スマートフォンやタブレットでは、Apple社のiOS や、Google社の Android OSが普及している。

東京大学名誉教授 @<B>{坂村健} 氏が提唱した@<ruby>{TRON,トロン}も、組込機器向けの@<ruby>{μITRON,マイクロアイトロン}として活用されており、任天堂のゲーム機「Nintendo Switch」などに採用されている。 @<fn>{tron}
//footnote[tron][@<href>{https://monoist.itmedia.co.jp/mn/articles/1707/07/news029.html, 「Nintendo Switch」がμITRON4.0仕様準拠リアルタイムOSを採用}]

=== アプリケーションソフト
OSの機能を利用し、OSの上で動作するソフトウェアである。アプリケーションの開発者は、OSの提供する機能を利用することによって、開発の手間を省くことができ、操作性を統一することができる。また、ハードウェアの仕様の細かな違いはOSが吸収してくれるため、あるOS向けに開発されたソフトウェアは、基本的にはそのOSが動作するどんなコンピュータでも利用できる。

用途や目的に応じて多種多様なアプリケーションソフトがある。一例を挙げると、ワープロや表計算、画像閲覧・編集、動画・音楽再生、ゲーム、Webブラウザ、電子メール、カレンダー・スケジュール管理、電卓、カメラ撮影、地図閲覧、プレゼンテーションやデータベース、財務会計、人事管理、在庫管理、プロジェクト管理、文書管理などなどである。

利用者が配布・販売パッケージを入手・購入してOSに組み込む作業「インストール」を行うことで使用可能となる。


//vspace[latex][30mm]

====[column] 単位の話

1,000 m = 1 km, 100 a = 1 ha, 1 dL = 1 / 10 L, 1 cm = 1 / 100 m, 1 mm = 1 / 1,000 m などがお馴染みです。

コンピュータでは大きな数、小さな数を良く使いますので、そのための記号を紹介します。

//tsize[latex][|c|c|c|l|]
//table[][国際単位系(SI単位系)での接頭辞一覧][pos=H]{
接頭辞	接頭辞	記号	乗数
-----------------
ヨタ	yota	Y	10の24乗=1,000,000,000,000,000,000,000,000倍
ゼタ	zeta	Z	10の21乗=1,000,000,000,000,000,000,000倍
エクサ	exa	E	10の18乗=1,000,000,000,000,000,000倍
ペタ	peta	P	10の15乗=1,000,000,000,000,000倍
テラ	tera	T	10の12乗=1,000,000,000,000倍
ギガ	giga	G	10の9乗=1,000,000,000倍
メガ	mega	M	10の6乗=1,000,000倍
キロ	kilo	k	10の3乗=1,000倍
ヘクト	hecto	h	10の2乗=100倍
デカ	deca	da	10の1乗=10倍
.	.	.	10の0乗=1倍
デシ	deci	d	10の-1乗=10分の1
センチ	centi	c	10の-2乗=100分の1
ミリ	milli	m	10の-3乗=1,000分の1
マイクロ	micro	μ	10の-6乗=1,000,000分の1
ナノ	nano	n	10の-9乗=1,000,000,000分の1
ピコ	pico	p	10の-12乗=1,000,000,000,000分の1
フェムト	femto	f	10の-15乗=1,000,000,000,000,000分の1
アト	atto	a	10の-18乗=1,000,000,000,000,000,000分の1
ゼプト	zepto	z	10の-21乗=1,000,000,000,000,000,000,000分の1
ヨクト	yocto	y	10の-24乗=1,000,000,000,000,000,000,000,000分の1
//}

====[/column]