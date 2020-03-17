
// c03_stage3_neg_table generated by DK/circ_table_gen.py -- do not modify manually

 // variables used
 // --sig_max  -10.000000
 // --table_div  80.499726
 // --table_op  1.000000

struct tablec03_stage3_neg { // 1-dimensional function table
    float low;
    float high;
    float istep;
    int size;
    float data[];
};

template <int tab_size>
struct tablec03_stage3_neg_imp {
    float low;
    float high;
    float istep;
    int size;
    float data[tab_size];
    operator tablec03_stage3_neg&() const { return *(tablec03_stage3_neg*)this; }
};

static tablec03_stage3_neg_imp<2048> c03_stage3_neg_table __rt_data = {
	0,0.339227,204.7,2048, {
	0.000000000000,0.001676727562,0.003343314434,0.004999864419,0.006646480140,
	0.008283263050,0.009910313449,0.011527730497,0.013135612223,0.014734055548,
	0.016323156289,0.017903009176,0.019473707865,0.021035344949,0.022588011973,
	0.024131799444,0.025666796846,0.027193092649,0.028710774322,0.030219928347,
	0.031720640227,0.033212994501,0.034697074754,0.036172963625,0.037640742826,
	0.039100493145,0.040552294460,0.041996225751,0.043432365109,0.044860789747,
	0.046281576009,0.047694799383,0.049100534507,0.050498855185,0.051889834389,
	0.053273544277,0.054650056195,0.056019440691,0.057381767525,0.058737105675,
	0.060085523347,0.061427087986,0.062761866284,0.064089924187,0.065411326906,
	0.066726138925,0.068034424008,0.069336245210,0.070631664882,0.071920744683,
	0.073203545585,0.074480127881,0.075750551198,0.077014874495,0.078273156080,
	0.079525453615,0.080771824119,0.082012323980,0.083247008964,0.084475934216,
	0.085699154272,0.086916723065,0.088128693931,0.089335119616,0.090536052285,
	0.091731543525,0.092921644355,0.094106405230,0.095285876050,0.096460106165,
	0.097629144381,0.098793038965,0.099951837655,0.101105587663,0.102254335683,
	0.103398127893,0.104537009967,0.105671027075,0.106800223893,0.107924644606,
	0.109044332914,0.110159332039,0.111269684730,0.112375433266,0.113476619464,
	0.114573284683,0.115665469832,0.116753215369,0.117836561314,0.118915547246,
	0.119990212314,0.121060595239,0.122126734320,0.123188667438,0.124246432062,
	0.125300065251,0.126349603660,0.127395083549,0.128436540778,0.129474010820,
	0.130507528761,0.131537129306,0.132562846783,0.133584715147,0.134602767984,
	0.135617038515,0.136627559602,0.137634363747,0.138637483104,0.139636949476,
	0.140632794320,0.141625048756,0.142613743563,0.143598909190,0.144580575753,
	0.145558773046,0.146533530537,0.147504877379,0.148472842406,0.149437454143,
	0.150398740807,0.151356730308,0.152311450257,0.153262927965,0.154211190450,
	0.155156264437,0.156098176364,0.157036952383,0.157972618364,0.158905199899,
	0.159834722303,0.160761210619,0.161684689622,0.162605183816,0.163522717446,
	0.164437314492,0.165348998678,0.166257793473,0.167163722092,0.168066807502,
	0.168967072422,0.169864539328,0.170759230452,0.171651167788,0.172540373097,
	0.173426867900,0.174310673493,0.175191810939,0.176070301076,0.176946164520,
	0.177819421663,0.178690092679,0.179558197527,0.180423755949,0.181286787478,
	0.182147311436,0.183005346937,0.183860912890,0.184714028004,0.185564710784,
	0.186412979537,0.187258852376,0.188102347216,0.188943481784,0.189782273613,
	0.190618740051,0.191452898259,0.192284765212,0.193114357707,0.193941692357,
	0.194766785600,0.195589653694,0.196410312727,0.197228778611,0.198045067089,
	0.198859193736,0.199671173957,0.200481022994,0.201288755926,0.202094387669,
	0.202897932978,0.203699406453,0.204498822534,0.205296195508,0.206091539507,
	0.206884868514,0.207676196359,0.208465536725,0.209252903148,0.210038309017,
	0.210821767581,0.211603291943,0.212382895066,0.213160589775,0.213936388755,
	0.214710304557,0.215482349596,0.216252536152,0.217020876375,0.217787382283,
	0.218552065765,0.219314938583,0.220076012370,0.220835298636,0.221592808764,
	0.222348554018,0.223102545539,0.223854794345,0.224605311340,0.225354107307,
	0.226101192913,0.226846578710,0.227590275137,0.228332292518,0.229072641068,
	0.229811330889,0.230548371974,0.231283774210,0.232017547373,0.232749701138,
	0.233480245070,0.234209188633,0.234936541188,0.235662311994,0.236386510210,
	0.237109144893,0.237830225005,0.238549759408,0.239267756867,0.239984226055,
	0.240699175545,0.241412613822,0.242124549274,0.242834990199,0.243543944806,
	0.244251421210,0.244957427442,0.245661971440,0.246365061059,0.247066704067,
	0.247766908144,0.248465680888,0.249163029814,0.249858962353,0.250553485853,
	0.251246607584,0.251938334732,0.252628674407,0.253317633638,0.254005219378,
	0.254691438502,0.255376297809,0.256059804021,0.256741963789,0.257422783686,
	0.258102270214,0.258780429802,0.259457268808,0.260132793517,0.260807010146,
	0.261479924842,0.262151543681,0.262821872674,0.263490917762,0.264158684819,
	0.264825179656,0.265490408015,0.266154375574,0.266817087949,0.267478550690,
	0.268138769284,0.268797749157,0.269455495673,0.270112014135,0.270767309786,
	0.271421387807,0.272074253322,0.272725911396,0.273376367035,0.274025625188,
	0.274673690747,0.275320568548,0.275966263371,0.276610779941,0.277254122927,
	0.277896296945,0.278537306557,0.279177156273,0.279815850548,0.280453393787,
	0.281089790342,0.281725044516,0.282359160560,0.282992142674,0.283623995010,
	0.284254721671,0.284884326711,0.285512814134,0.286140187899,0.286766451917,
	0.287391610053,0.288015666123,0.288638623900,0.289260487110,0.289881259436,
	0.290500944513,0.291119545936,0.291737067254,0.292353511972,0.292968883555,
	0.293583185423,0.294196420955,0.294808593488,0.295419706320,0.296029762704,
	0.296638765857,0.297246718952,0.297853625127,0.298459487476,0.299064309057,
	0.299668092888,0.300270841951,0.300872559187,0.301473247504,0.302072909768,
	0.302671548812,0.303269167431,0.303865768383,0.304461354394,0.305055928151,
	0.305649492307,0.306242049482,0.306833602259,0.307424153189,0.308013704788,
	0.308602259540,0.309189819894,0.309776388269,0.310361967049,0.310946558587,
	0.311530165204,0.312112789190,0.312694432802,0.313275098268,0.313854787785,
	0.314433503518,0.315011247604,0.315588022149,0.316163829231,0.316738670895,
	0.317312549161,0.317885466019,0.318457423430,0.319028423326,0.319598467613,
	0.320167558169,0.320735696843,0.321302885459,0.321869125811,0.322434419670,
	0.322998768778,0.323562174852,0.324124639581,0.324686164633,0.325246751644,
	0.325806402230,0.326365117980,0.326922900459,0.327479751205,0.328035671734,
	0.328590663537,0.329144728083,0.329697866814,0.330250081150,0.330801372489,
	0.331351742204,0.331901191646,0.332449722143,0.332997335002,0.333544031506,
	0.334089812915,0.334634680471,0.335178635391,0.335721678871,0.336263812087,
	0.336805036193,0.337345352322,0.337884761586,0.338423265078,0.338960863870,
	0.339497559012,0.340033351536,0.340568242454,0.341102232758,0.341635323421,
	0.342167515395,0.342698809614,0.343229206994,0.343758708431,0.344287314803,
	0.344815026968,0.345341845768,0.345867772025,0.346392806544,0.346916950112,
	0.347440203498,0.347962567453,0.348484042713,0.349004629992,0.349524329993,
	0.350043143397,0.350561070870,0.351078113063,0.351594270607,0.352109544120,
	0.352623934203,0.353137441438,0.353650066395,0.354161809626,0.354672671668,
	0.355182653041,0.355691754253,0.356199975793,0.356707318136,0.357213781744,
	0.357719367061,0.358224074518,0.358727904531,0.359230857501,0.359732933816,
	0.360234133848,0.360734457956,0.361233906483,0.361732479762,0.362230178107,
	0.362727001824,0.363222951200,0.363718026511,0.364212228022,0.364705555979,
	0.365198010621,0.365689592170,0.366180300836,0.366670136816,0.367159100295,
	0.367647191446,0.368134410428,0.368620757387,0.369106232460,0.369590835767,
	0.370074567421,0.370557427519,0.371039416148,0.371520533383,0.372000779287,
	0.372480153911,0.372958657296,0.373436289470,0.373913050450,0.374388940242,
	0.374863958841,0.375338106231,0.375811382385,0.376283787264,0.376755320820,
	0.377225982993,0.377695773712,0.378164692899,0.378632740460,0.379099916295,
	0.379566220292,0.380031652329,0.380496212274,0.380959899985,0.381422715310,
	0.381884658088,0.382345728145,0.382805925302,0.383265249367,0.383723700140,
	0.384181277410,0.384637980960,0.385093810559,0.385548765970,0.386002846946,
	0.386456053230,0.386908384559,0.387359840658,0.387810421243,0.388260126023,
	0.388708954699,0.389156906960,0.389603982489,0.390050180961,0.390495502040,
	0.390939945383,0.391383510640,0.391826197452,0.392268005450,0.392708934258,
	0.393148983495,0.393588152766,0.394026441674,0.394463849811,0.394900376762,
	0.395336022104,0.395770785407,0.396204666233,0.396637664137,0.397069778665,
	0.397501009358,0.397931355747,0.398360817360,0.398789393713,0.399217084317,
	0.399643888677,0.400069806289,0.400494836643,0.400918979224,0.401342233506,
	0.401764598960,0.402186075049,0.402606661228,0.403026356949,0.403445161653,
	0.403863074778,0.404280095754,0.404696224005,0.405111458949,0.405525799998,
	0.405939246556,0.406351798024,0.406763453795,0.407174213256,0.407584075788,
	0.407993040767,0.408401107562,0.408808275538,0.409214544052,0.409619912458,
	0.410024380102,0.410427946326,0.410830610465,0.411232371851,0.411633229808,
	0.412033183656,0.412432232711,0.412830376280,0.413227613669,0.413623944176,
	0.414019367096,0.414413881718,0.414807487326,0.415200183200,0.415591968612,
	0.415982842835,0.416372805131,0.416761854763,0.417149990984,0.417537213048,
	0.417923520199,0.418308911680,0.418693386730,0.419076944580,0.419459584462,
	0.419841305598,0.420222107211,0.420601988516,0.420980948727,0.421358987051,
	0.421736102692,0.422112294853,0.422487562728,0.422861905511,0.423235322392,
	0.423607812554,0.423979375181,0.424350009450,0.424719714536,0.425088489609,
	0.425456333838,0.425823246386,0.426189226415,0.426554273082,0.426918385541,
	0.427281562943,0.427643804437,0.428005109167,0.428365476275,0.428724904901,
	0.429083394180,0.429440943245,0.429797551227,0.430153217253,0.430507940448,
	0.430861719935,0.431214554833,0.431566444259,0.431917387329,0.432267383153,
	0.432616430842,0.432964529504,0.433311678243,0.433657876163,0.434003122364,
	0.434347415946,0.434690756005,0.435033141635,0.435374571930,0.435715045981,
	0.436054562876,0.436393121703,0.436730721547,0.437067361493,0.437403040622,
	0.437737758016,0.438071512754,0.438404303914,0.438736130572,0.439066991804,
	0.439396886683,0.439725814282,0.440053773673,0.440380763927,0.440706784112,
	0.441031833298,0.441355910552,0.441679014940,0.442001145530,0.442322301385,
	0.442642481571,0.442961685152,0.443279911191,0.443597158750,0.443913426893,
	0.444228714682,0.444543021178,0.444856345444,0.445168686539,0.445480043527,
	0.445790415467,0.446099801421,0.446408200451,0.446715611618,0.447022033982,
	0.447327466607,0.447631908555,0.447935358887,0.448237816667,0.448539280958,
	0.448839750825,0.449139225331,0.449437703543,0.449735184526,0.450031667348,
	0.450327151076,0.450621634779,0.450915117527,0.451207598391,0.451499076443,
	0.451789550757,0.452079020406,0.452367484467,0.452654942018,0.452941392137,
	0.453226833905,0.453511266404,0.453794688718,0.454077099932,0.454358499134,
	0.454638885413,0.454918257861,0.455196615571,0.455473957638,0.455750283161,
	0.456025591239,0.456299880975,0.456573151473,0.456845401841,0.457116631189,
	0.457386838628,0.457656023275,0.457924184246,0.458191320663,0.458457431650,
	0.458722516333,0.458986573842,0.459249603310,0.459511603873,0.459772574671,
	0.460032514845,0.460291423544,0.460549299916,0.460806143115,0.461061952297,
	0.461316726625,0.461570465262,0.461823167377,0.462074832143,0.462325458736,
	0.462575046337,0.462823594132,0.463071101309,0.463317567063,0.463562990591,
	0.463807371097,0.464050707787,0.464292999874,0.464534246575,0.464774447111,
	0.465013600710,0.465251706602,0.465488764026,0.465724772222,0.465959730438,
	0.466193637927,0.466426493948,0.466658297762,0.466889048641,0.467118745859,
	0.467347388696,0.467574976440,0.467801508383,0.468026983823,0.468251402065,
	0.468474762420,0.468697064206,0.468918306745,0.469138489368,0.469357611411,
	0.469575672218,0.469792671138,0.470008607528,0.470223480752,0.470437290181,
	0.470650035191,0.470861715167,0.471072329503,0.471281877596,0.471490358854,
	0.471697772690,0.471904118527,0.472109395794,0.472313603928,0.472516742375,
	0.472718810586,0.472919808024,0.473119734158,0.473318588464,0.473516370428,
	0.473713079544,0.473908715316,0.474103277252,0.474296764874,0.474489177710,
	0.474680515296,0.474870777179,0.475059962914,0.475248072065,0.475435104205,
	0.475621058918,0.475805935793,0.475989734434,0.476172454452,0.476354095465,
	0.476534657105,0.476714139012,0.476892540836,0.477069862236,0.477246102882,
	0.477421262454,0.477595340643,0.477768337149,0.477940251684,0.478111083968,
	0.478280833733,0.478449500723,0.478617084691,0.478783585402,0.478949002630,
	0.479113336162,0.479276585795,0.479438751338,0.479599832611,0.479759829445,
	0.479918741682,0.480076569178,0.480233311798,0.480388969418,0.480543541930,
	0.480697029234,0.480849431243,0.481000747882,0.481150979090,0.481300124814,
	0.481448185018,0.481595159676,0.481741048774,0.481885852311,0.482029570300,
	0.482172202764,0.482313749742,0.482454211284,0.482593587453,0.482731878324,
	0.482869083988,0.483005204546,0.483140240115,0.483274190823,0.483407056814,
	0.483538838243,0.483669535279,0.483799148106,0.483927676920,0.484055121933,
	0.484181483369,0.484306761467,0.484430956478,0.484554068670,0.484676098323,
	0.484797045732,0.484916911207,0.485035695071,0.485153397662,0.485270019333,
	0.485385560450,0.485500021396,0.485613402567,0.485725704374,0.485836927243,
	0.485947071615,0.486056137946,0.486164126707,0.486271038384,0.486376873477,
	0.486481632504,0.486585315995,0.486687924498,0.486789458574,0.486889918802,
	0.486989305774,0.487087620099,0.487184862401,0.487281033321,0.487376133513,
	0.487470163650,0.487563124417,0.487655016518,0.487745840673,0.487835597614,
	0.487924288094,0.488011912879,0.488098472752,0.488183968511,0.488268400971,
	0.488351770965,0.488434079339,0.488515326957,0.488595514699,0.488674643461,
	0.488752714156,0.488829727713,0.488905685078,0.488980587213,0.489054435095,
	0.489127229721,0.489198972102,0.489269663265,0.489339304256,0.489407896136,
	0.489475439983,0.489541936892,0.489607387973,0.489671794356,0.489735157185,
	0.489797477620,0.489858756842,0.489918996044,0.489978196439,0.490036359255,
	0.490093485737,0.490149577149,0.490204634768,0.490258659890,0.490311653829,
	0.490363617914,0.490414553491,0.490464461923,0.490513344591,0.490561202890,
	0.490608038235,0.490653852056,0.490698645800,0.490742420932,0.490785178931,
	0.490826921296,0.490867649541,0.490907365197,0.490946069812,0.490983764949,
	0.491020452191,0.491056133136,0.491090809396,0.491124482605,0.491157154410,
	0.491188826474,0.491219500479,0.491249178122,0.491277861116,0.491305551193,
	0.491332250099,0.491357959597,0.491382681466,0.491406417502,0.491429169517,
	0.491450939340,0.491471728814,0.491491539800,0.491510374176,0.491528233833,
	0.491545120680,0.491561036643,0.491575983661,0.491589963690,0.491602978704,
	0.491615030689,0.491626121650,0.491636253605,0.491645428590,0.491653648653,
	0.491660915862,0.491667232297,0.491672600054,0.491677021245,0.491680497996,
	0.491683032450,0.491684626762,0.491685283104,0.491685003664,0.491683790642,
	0.491681646254,0.491678572732,0.491674572319,0.491669647276,0.491663799877,
	0.491657032411,0.491649347179,0.491640746498,0.491631232699,0.491620808127,
	0.491609475139,0.491597236109,0.491584093422,0.491570049478,0.491555106689,
	0.491539267481,0.491522534294,0.491504909582,0.491486395808,0.491466995453,
	0.491446711008,0.491425544976,0.491403499876,0.491380578236,0.491356782598,
	0.491332115516,0.491306579558,0.491280177300,0.491252911335,0.491224784263,
	0.491195798700,0.491165957270,0.491135262611,0.491103717371,0.491071324211,
	0.491038085800,0.491004004822,0.490969083969,0.490933325944,0.490896733462,
	0.490859309248,0.490821056037,0.490781976573,0.490742073614,0.490701349924,
	0.490659808278,0.490617451463,0.490574282272,0.490530303511,0.490485517992,
	0.490439928538,0.490393537982,0.490346349164,0.490298364934,0.490249588150,
	0.490200021678,0.490149668395,0.490098531182,0.490046612933,0.489993916546,
	0.489940444929,0.489886200996,0.489831187671,0.489775407882,0.489718864568,
	0.489661560672,0.489603499146,0.489544682947,0.489485115041,0.489424798398,
	0.489363735997,0.489301930820,0.489239385859,0.489176104108,0.489112088569,
	0.489047342251,0.488981868164,0.488915669329,0.488848748768,0.488781109508,
	0.488712754585,0.488643687036,0.488573909902,0.488503426233,0.488432239078,
	0.488360351494,0.488287766541,0.488214487281,0.488140516782,0.488065858114,
	0.487990514352,0.487914488574,0.487837783859,0.487760403291,0.487682349958,
	0.487603626946,0.487524237349,0.487444184261,0.487363470776,0.487282099994,
	0.487200075015,0.487117398940,0.487034074873,0.486950105920,0.486865495187,
	0.486780245781,0.486694360810,0.486607843386,0.486520696618,0.486432923616,
	0.486344527494,0.486255511361,0.486165878331,0.486075631515,0.485984774025,
	0.485893308974,0.485801239471,0.485708568629,0.485615299557,0.485521435365,
	0.485426979161,0.485331934052,0.485236303145,0.485140089544,0.485043296353,
	0.484945926673,0.484847983605,0.484749470246,0.484650389692,0.484550745038,
	0.484450539375,0.484349775791,0.484248457374,0.484146587208,0.484044168373,
	0.483941203949,0.483837697009,0.483733650626,0.483629067869,0.483523951803,
	0.483418305489,0.483312131985,0.483205434346,0.483098215621,0.482990478857,
	0.482882227096,0.482773463376,0.482664190729,0.482554412184,0.482444130766,
	0.482333349494,0.482222071382,0.482110299441,0.481998036673,0.481885286080,
	0.481772050653,0.481658333383,0.481544137252,0.481429465237,0.481314320309,
	0.481198705436,0.481082623576,0.480966077683,0.480849070705,0.480731605583,
	0.480613685252,0.480495312640,0.480376490671,0.480257222258,0.480137510312,
	0.480017357732,0.479896767415,0.479775742249,0.479654285113,0.479532398882,
	0.479410086422,0.479287350592,0.479164194243,0.479040620220,0.478916631358,
	0.478792230486,0.478667420426,0.478542203989,0.478416583982,0.478290563201,
	0.478164144435,0.478037330465,0.477910124064,0.477782527995,0.477654545014,
	0.477526177869,0.477397429299,0.477268302034,0.477138798795,0.477008922295,
	0.476878675239,0.476748060321,0.476617080228,0.476485737637,0.476354035216,
	0.476221975625,0.476089561513,0.475956795521,0.475823680280,0.475690218414,
	0.475556412534,0.475422265244,0.475287779138,0.475152956800,0.475017800804,
	0.474882313717,0.474746498093,0.474610356478,0.474473891409,0.474337105411,
	0.474200001000,0.474062580683,0.473924846957,0.473786802307,0.473648449211,
	0.473509790135,0.473370827535,0.473231563857,0.473092001538,0.472952143003,
	0.472811990668,0.472671546939,0.472530814211,0.472389794868,0.472248491285,
	0.472106905827,0.471965040846,0.471822898688,0.471680481683,0.471537792156,
	0.471394832417,0.471251604769,0.471108111503,0.470964354899,0.470820337226,
	0.470676060746,0.470531527705,0.470386740343,0.470241700886,0.470096411553,
	0.469950874549,0.469805092070,0.469659066301,0.469512799416,0.469366293579,
	0.469219550944,0.469072573652,0.468925363835,0.468777923614,0.468630255100,
	0.468482360391,0.468334241577,0.468185900735,0.468037339934,0.467888561230,
	0.467739566669,0.467590358285,0.467440938105,0.467291308141,0.467141470397,
	0.466991426865,0.466841179527,0.466690730355,0.466540081308,0.466389234337,
	0.466238191380,0.466086954367,0.465935525214,0.465783905829,0.465632098109,
	0.465480103940,0.465327925197,0.465175563744,0.465023021437,0.464870300119,
	0.464717401622,0.464564327770,0.464411080375,0.464257661238,0.464104072150,
	0.463950314893,0.463796391236,0.463642302940,0.463488051753,0.463333639415,
	0.463179067654,0.463024338190,0.462869452729,0.462714412971,0.462559220601,
	0.462403877298,0.462248384729,0.462092744551,0.461936958409,0.461781027941,
	0.461624954773,0.461468740522,0.461312386793,0.461155895184,0.460999267279,
	0.460842504655,0.460685608879,0.460528581507,0.460371424085,0.460214138150,
	0.460056725228,0.459899186837,0.459741524483,0.459583739664,0.459425833867,
	0.459267808571,0.459109665243,0.458951405343,0.458793030320,0.458634541612,
	0.458475940651,0.458317228855,0.458158407638,0.457999478399,0.457840442532,
	0.457681301420,0.457522056435,0.457362708942,0.457203260297,0.457043711844,
	0.456884064921,0.456724320855,0.456564480965,0.456404546559,0.456244518939,
	0.456084399395,0.455924189209,0.455763889656,0.455603502000,0.455443027495,
	0.455282467390,0.455121822923,0.454961095321,0.454800285808,0.454639395593,
	0.454478425882,0.454317377868,0.454156252737,0.453995051669,0.453833775831,
	0.453672426385,0.453511004484,0.453349511271,0.453187947883,0.453026315446,
	0.452864615081,0.452702847899,0.452541015002,0.452379117486,0.452217156437,
	0.452055132935,0.451893048049,0.451730902844,0.451568698374,0.451406435686,
	0.451244115820,0.451081739807,0.450919308671,0.450756823429,0.450594285087,
	0.450431694648,0.450269053105,0.450106361443,0.449943620640,0.449780831668,
	0.449617995489,0.449455113060,0.449292185329,0.449129213238,0.448966197720,
	0.448803139702,0.448640040105,0.448476899840,0.448313719813,0.448150500922,
	0.447987244059,0.447823950108,0.447660619947,0.447497254447,0.447333854470,
	0.447170420873,0.447006954508,0.446843456217,0.446679926838,0.446516367199,
	0.446352778125,0.446189160432,0.446025514932,0.445861842426,0.445698143714,
	0.445534419586,0.445370670826,0.445206898213,0.445043102519,0.444879284510,
	0.444715444944,0.444551584576,0.444387704152,0.444223804414,0.444059886097,
	0.443895949929,0.443731996633,0.443568026927,0.443404041522,0.443240041123,
	0.443076026429,0.442911998134,0.442747956926,0.442583903487,0.442419838493,
	0.442255762616,0.442091676520,0.441927580866,0.441763476307,0.441599363491,
	0.441435243063,0.441271115659,0.441106981913,0.440942842451,0.440778697894,
	0.440614548860,0.440450395959,0.440286239797,0.440122080975,0.439957920089,
	0.439793757729,0.439629594481,0.439465430924,0.439301267636,0.439137105185,
	0.438972944138,0.438808785055,0.438644628492,0.438480475000,0.438316325126,
	0.438152179410,0.437988038389,0.437823902596,0.437659772558,0.437495648798,
	0.437331531833,0.437167422178,0.437003320341,0.436839226827,0.436675142136,
	0.436511066765,0.436347001204,0.436182945940,0.436018901456,0.435854868231,
	0.435690846738,0.435526837447,0.435362840825,0.435198857332,0.435034887425,
	0.434870931559,0.434706990182,0.434543063740,0.434379152673,0.434215257418,
	0.434051378409,0.433887516076,0.433723670843,0.433559843131,0.433396033359,
	0.433232241940,0.433068469285,0.432904715799,0.432740981885,0.432577267943,
	0.432413574367,0.432249901548,0.432086249876,0.431922619733,0.431759011502,
	0.431595425559,0.431431862278,0.431268322030,0.431104805181,0.430941312095,
	0.430777843131,0.430614398648,0.430450978997,0.430287584529,0.430124215592,
	0.429960872527,0.429797555677,0.429634265377,0.429471001962,0.429307765762,
	0.429144557105,0.428981376315,0.428818223715,0.428655099622,0.428492004351,
	0.428328938215,0.428165901524,0.428002894583,0.427839917696,0.427676971164,
	0.427514055284,0.427351170351,0.427188316657,0.427025494492,0.426862704140,
	0.426699945886,0.426537220011,0.426374526793,0.426211866507,0.426049239425,
	0.425886645819,0.425724085954,0.425561560096,0.425399068508,0.425236611448,
	0.425074189173,0.424911801939,0.424749449997,0.424587133596,0.424424852984,
	0.424262608406,0.424100400102,0.423938228314,0.423776093278,0.423613995230,
	0.423451934401,0.423289911023,0.423127925323,0.422965977527,0.422804067859,
	0.422642196539,0.422480363787,0.422318569819,0.422156814850,0.421995099093,
	0.421833422756,0.421671786049,0.421510189178,0.421348632346,0.421187115755,
	0.421025639605,0.420864204093,0.420702809415,0.420541455765,0.420380143334,
	0.420218872312,0.420057642887,0.419896455243,0.419735309566,0.419574206036,
	0.419413144835,0.419252126139,0.419091150126,0.418930216969,0.418769326842,
	0.418608479914,0.418447676356,0.418286916333,0.418126200012,0.417965527555,
	0.417804899126,0.417644314884,0.417483774988,0.417323279594,0.417162828858,
	0.417002422933,0.416842061970,0.416681746121,0.416521475533,0.416361250354,
	0.416201070728,0.416040936800,0.415880848712,0.415720806605,0.415560810617,
	0.415400860887,0.415240957550,0.415081100741,0.414921290593,0.414761527238,
	0.414601810806,0.414442141426,0.414282519225,0.414122944329,0.413963416863,
	0.413803936950,0.413644504711,0.413485120267,0.413325783737,0.413166495239,
	0.413007254889,0.412848062802,0.412688919092,0.412529823871,0.412370777251,
	0.412211779341,0.412052830250,0.411893930086,0.411735078954,0.411576276960,
	0.411417524207,0.411258820798,0.411100166834,0.410941562416,0.410783007642,
	0.410624502610,0.410466047416,0.410307642157,0.410149286927,0.409990981819,
	0.409832726925,0.409674522337,0.409516368144,0.409358264435,0.409200211298,
	0.409042208820,0.408884257087,0.408726356183,0.408568506193,0.408410707198,
	0.408252959280,0.408095262521,0.407937616999,0.407780022794,0.407622479983,
	0.407464988642,0.407307548849,0.407150160677,0.406992824200,0.406835539492,
	0.406678306625,0.406521125669,0.406363996695,0.406206919772,0.406049894969,
	0.405892922354,0.405736001992,0.405579133951,0.405422318294,0.405265555086,
	0.405108844391,0.404952186271,0.404795580788,0.404639028002,0.404482527973,
	0.404326080761,0.404169686425,0.404013345022,0.403857056608,0.403700821240,
	0.403544638974,0.403388509864,0.403232433963,0.403076411326,0.402920442004,
	0.402764526049,0.402608663512,0.402452854443,0.402297098892,0.402141396908,
	0.401985748539,0.401830153831,0.401674612833,0.401519125590,0.401363692147,
	0.401208312550,0.401052986842,0.400897715067,0.400742497267,0.400587333486,
	0.400432223764,0.400277168143,0.400122166662,0.399967219362,0.399812326281,
	0.399657487458,0.399502702932,0.399347972738,0.399193296915,0.399038675498,
	0.398884108523,0.398729596024,0.398575138037,0.398420734595,0.398266385732,
	0.398112091480,0.397957851872,0.397803666939,0.397649536712,0.397495461223,
	0.397341440502,0.397187474577,0.397033563479,0.396879707235,0.396725905875,
	0.396572159425,0.396418467913,0.396264831366,0.396111249809,0.395957723269,
	0.395804251770,0.395650835338,0.395497473996,0.395344167769,0.395190916680,
	0.395037720752,0.394884580007,0.394731494468,0.394578464156,0.394425489093,
	0.394272569299,0.394119704794,0.393966895599,0.393814141732,0.393661443214,
	0.393508800062,0.393356212296,0.393203679933,0.393051202990,0.392898781485,
	0.392746415434,0.392594104854,0.392441849760,0.392289650169,0.392137506096,
	0.391985417555,0.391833384560,0.391681407127,0.391529485268,0.391377618998,
	0.391225808329,0.391074053274,0.390922353845,0.390770710055,0.390619121914,
	0.390467589435,0.390316112629,0.390164691506,0.390013326076,0.389862016350,
	0.389710762338,0.389559564048,0.389408421490,0.389257334673,0.389106303606,
	0.388955328296,0.388804408751,0.388653544979,0.388502736988,0.388351984784,
	0.388201288374,0.388050647765,0.387900062963,0.387749533973,0.387599060802,
	0.387448643454,0.387298281935,0.387147976249,0.386997726402,0.386847532397,
	0.386697394239,0.386547311930,0.386397285476,0.386247314878,0.386097400141,
	0.385947541266,0.385797738256,0.385647991115,0.385498299842,0.385348664442,
	0.385199084914,0.385049561261,0.384900093483,0.384750681582,0.384601325557,
	0.384452025410,0.384302781141,0.384153592750,0.384004460236,0.383855383599,
	0.383706362838,0.383557397953,0.383408488943,0.383259635806,0.383110838540,
	0.382962097145,0.382813411618,0.382664781957,0.382516208160,0.382367690225,
	0.382219228148,0.382070821928,0.381922471560,0.381774177042,0.381625938371,
	0.381477755542,0.381329628553,0.381181557398,0.381033542075,0.380885582579,
	0.380737678904,0.380589831048,0.380442039004,0.380294302769,0.380146622336,
	0.379998997701,0.379851428858,0.379703915801,0.379556458526,0.379409057025,
	0.379261711293,0.379114421323,0.378967187110,0.378820008646,0.378672885925,
	0.378525818940,0.378378807685,0.378231852151,0.378084952333,0.377938108221,
	0.377791319810,0.377644587090,0.377497910055,0.377351288697,0.377204723006,
	0.377058212976,0.376911758597,0.376765359862,0.376619016762,0.376472729287,
	0.376326497429,0.376180321180,0.376034200529,0.375888135468,0.375742125988,
	0.375596172078,0.375450273730,0.375304430933,0.375158643678,0.375012911955,
	0.374867235754,0.374721615065,0.374576049877,0.374430540180,0.374285085963,
	0.374139687217,0.373994343929,0.373849056090,0.373703823689,0.373558646714,
	0.373413525155,0.373268458999,0.373123448237,0.372978492856,0.372833592845,
	0.372688748192,0.372543958886,0.372399224915,0.372254546267,0.372109922930,
	0.371965354892,0.371820842140,0.371676384663,0.371531982449,0.371387635484,
	0.371243343756,0.371099107253,0.370954925961,0.370810799869,0.370666728964,
	0.370522713232,0.370378752660,0.370234847235,0.370090996945,0.369947201776,
	0.369803461714,0.369659776746,0.369516146860,0.369372572040,0.369229052274,
	0.369085587548,0.368942177847,0.368798823159,0.368655523470,0.368512278764,
	0.368369089030,0.368225954251,0.368082874414,0.367939849505,0.367796879509,
	0.367653964413,0.367511104201,0.367368298859,0.367225548372,0.367082852727,
	0.366940211907,0.366797625900,0.366655094688,0.366512618258,0.366370196596,
	0.366227829684,0.366085517510,0.365943260057,0.365801057311,0.365658909256,
	0.365516815876,0.365374777158,0.365232793084,0.365090863641,0.364948988811,
	0.364807168580,0.364665402933,0.364523691853,0.364382035325,0.364240433332,
	0.364098885860,0.363957392893,0.363815954413,0.363674570407,0.363533240857,
	0.363391965747,0.363250745062,0.363109578786,0.362968466901,0.362827409393,
	0.362686406244,0.362545457439,0.362404562960,0.362263722793,0.362122936919,
	0.361982205324,0.361841527990,0.361700904900,0.361560336039,0.361419821389,
	0.361279360934,0.361138954657,0.360998602541,0.360858304571,0.360718060728,
	0.360577870996,0.360437735358,0.360297653797,0.360157626297,0.360017652840,
	0.359877733409,0.359737867987,0.359598056557,0.359458299102,0.359318595605,
	0.359178946049,0.359039350416,0.358899808689,0.358760320850,0.358620886884,
	0.358481506771,0.358342180496,0.358202908039,0.358063689385,0.357924524516,
	0.357785413413,0.357646356060,0.357507352438,0.357368402532,0.357229506322,
	0.357090663791,0.356951874921,0.356813139696,0.356674458097,0.356535830106,
	0.356397255706,0.356258734878,0.356120267606,0.355981853871,0.355843493656,
	0.355705186942,0.355566933712,0.355428733947,0.355290587631,0.355152494744,
	0.355014455269,0.354876469188,0.354738536483,0.354600657136,0.354462831128,
	0.354325058442,0.354187339060,0.354049672963,0.353912060134,0.353774500553,
	0.353636994204,0.353499541067,0.353362141125,0.353224794359,0.353087500752,
	0.352950260284,0.352813072937,0.352675938694,0.352538857536,0.352401829444,
	0.352264854400,0.352127932386,0.351991063384,0.351854247375,0.351717484340,
	0.351580774261,0.351444117121,0.351307512899,0.351170961578,0.351034463140,
	0.350898017565,0.350761624836,0.350625284934,0.350488997839,0.350352763535,
	0.350216582001,0.350080453220,0.349944377173,0.349808353841,0.349672383206,
	0.349536465249,0.349400599952,0.349264787295,0.349129027260,0.348993319829,
	0.348857664983,0.348722062702,0.348586512969,0.348451015765,0.348315571071,
	0.348180178867,0.348044839136,0.347909551859,0.347774317017,0.347639134591,
	0.347504004562,0.347368926912,0.347233901621,0.347098928671,0.346964008044,
	0.346829139720,0.346694323680,0.346559559906,0.346424848379,0.346290189079,
	0.346155581989,0.346021027089,0.345886524360,0.345752073783,0.345617675340,
	0.345483329012,0.345349034779,0.345214792623,0.345080602525,0.344946464466,
	0.344812378427,0.344678344389,0.344544362333,0.344410432240,0.344276554092,
	0.344142727869,0.344008953552,0.343875231122,0.343741560561,0.343607941849,
	0.343474374968,0.343340859898,0.343207396620,0.343073985116,0.342940625366,
	0.342807317352,0.342674061054,0.342540856453,0.342407703531,0.342274602268,
	0.342141552646,0.342008554644,0.341875608246,0.341742713430,0.341609870178,
	0.341477078472,0.341344338292,0.341211649619,0.341079012433,0.340946426717,
	0.340813892451,0.340681409616,0.340548978192,0.340416598161,0.340284269504,
	0.340151992201,0.340019766234,0.339887591584,0.339755468231,0.339623396156,
	0.339491375341,0.339359405765,0.339227487411
	}
};

double always_inline c03_stage3_negclip(double x) {
    double f = fabs(x);
    f = f * c03_stage3_neg_table.istep;
    int i = static_cast<int>(f);
    if (i < 0) {
        f = c03_stage3_neg_table.data[0];
    } else if (i >= c03_stage3_neg_table.size-1) {
        f = c03_stage3_neg_table.data[c03_stage3_neg_table.size-1];
    } else {
        f -= i;
        f = c03_stage3_neg_table.data[i]*(1-f) + c03_stage3_neg_table.data[i+1]*f;
    }
    return copysign(f, x);
}
