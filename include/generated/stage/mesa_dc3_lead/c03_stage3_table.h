
// c03_stage3_table generated by DK/circ_table_gen.py -- do not modify manually

 // variables used
 // --sig_max  10.000000
 // --table_div  80.499726
 // --table_op  1.000000

struct tablec03_stage3 { // 1-dimensional function table
    float low;
    float high;
    float istep;
    int size;
    float data[];
};

template <int tab_size>
struct tablec03_stage3_imp {
    float low;
    float high;
    float istep;
    int size;
    float data[tab_size];
    operator tablec03_stage3&() const { return *(tablec03_stage3*)this; }
};

static tablec03_stage3_imp<2048> c03_stage3_table __rt_data = {
	0,-0.833333,204.7,2048, {
	0.000000000000,-0.001678128755,-0.003348885072,-0.005012318635,-0.006668478983,
	-0.008317415510,-0.009959177455,-0.011593813902,-0.013221373773,-0.014841905824,
	-0.016455458643,-0.018062080646,-0.019661820070,-0.021254724973,-0.022840843231,
	-0.024420222531,-0.025992910372,-0.027558954058,-0.029118400700,-0.030671297208,
	-0.032217690293,-0.033757626460,-0.035291152009,-0.036818313031,-0.038339155407,
	-0.039853724804,-0.041362066673,-0.042864226252,-0.044360248555,-0.045850178379,
	-0.047334060297,-0.048811938659,-0.050283857588,-0.051749860983,-0.053209992511,
	-0.054664295613,-0.056112813497,-0.057555589140,-0.058992665286,-0.060424084446,
	-0.061849888894,-0.063270120669,-0.064684821577,-0.066094033181,-0.067497796811,
	-0.068896153556,-0.070289144267,-0.071676809555,-0.073059189792,-0.074436325108,
	-0.075808255395,-0.077175020302,-0.078536659237,-0.079893211368,-0.081244715620,
	-0.082591210678,-0.083932734985,-0.085269326742,-0.086601023908,-0.087927864203,
	-0.089249885102,-0.090567123843,-0.091879617421,-0.093187402589,-0.094490515862,
	-0.095788993513,-0.097082871578,-0.098372185850,-0.099656971885,-0.100937265002,
	-0.102213100278,-0.103484512557,-0.104751536441,-0.106014206300,-0.107272556265,
	-0.108526620233,-0.109776431867,-0.111022024593,-0.112263431607,-0.113500685871,
	-0.114733820114,-0.115962866835,-0.117187858301,-0.118408826551,-0.119625803394,
	-0.120838820412,-0.122047908958,-0.123253100158,-0.124454424916,-0.125651913907,
	-0.126845597585,-0.128035506179,-0.129221669697,-0.130404117927,-0.131582880434,
	-0.132757986566,-0.133929465452,-0.135097346003,-0.136261656915,-0.137422426667,
	-0.138579683526,-0.139733455544,-0.140883770561,-0.142030656205,-0.143174139895,
	-0.144314248841,-0.145451010044,-0.146584450297,-0.147714596190,-0.148841474105,
	-0.149965110222,-0.151085530518,-0.152202760767,-0.153316826545,-0.154427753225,
	-0.155535565985,-0.156640289804,-0.157741949464,-0.158840569555,-0.159936174471,
	-0.161028788412,-0.162118435389,-0.163205139220,-0.164288923535,-0.165369811776,
	-0.166447827196,-0.167522992864,-0.168595331663,-0.169664866293,-0.170731619269,
	-0.171795612927,-0.172856869422,-0.173915410730,-0.174971258647,-0.176024434793,
	-0.177074960614,-0.178122857379,-0.179168146183,-0.180210847951,-0.181250983434,
	-0.182288573214,-0.183323637704,-0.184356197148,-0.185386271624,-0.186413881045,
	-0.187439045157,-0.188461783544,-0.189482115627,-0.190500060667,-0.191515637762,
	-0.192528865854,-0.193539763725,-0.194548350000,-0.195554643149,-0.196558661487,
	-0.197560423175,-0.198559946221,-0.199557248483,-0.200552347666,-0.201545261329,
	-0.202536006880,-0.203524601581,-0.204511062546,-0.205495406746,-0.206477651008,
	-0.207457812013,-0.208435906304,-0.209411950279,-0.210385960200,-0.211357952187,
	-0.212327942224,-0.213295946157,-0.214261979697,-0.215226058419,-0.216188197765,
	-0.217148413044,-0.218106719434,-0.219063131980,-0.220017665599,-0.220970335079,
	-0.221921155079,-0.222870140132,-0.223817304645,-0.224762662900,-0.225706229054,
	-0.226648017141,-0.227588041075,-0.228526314647,-0.229462851527,-0.230397665267,
	-0.231330769301,-0.232262176944,-0.233191901395,-0.234119955738,-0.235046352942,
	-0.235971105862,-0.236894227239,-0.237815729703,-0.238735625773,-0.239653927858,
	-0.240570648256,-0.241485799157,-0.242399392646,-0.243311440696,-0.244221955179,
	-0.245130947858,-0.246038430395,-0.246944414347,-0.247848911167,-0.248751932208,
	-0.249653488722,-0.250553591860,-0.251452252675,-0.252349482120,-0.253245291050,
	-0.254139690225,-0.255032690307,-0.255924301865,-0.256814535369,-0.257703401200,
	-0.258590909643,-0.259477070892,-0.260361895049,-0.261245392126,-0.262127572043,
	-0.263008444633,-0.263888019639,-0.264766306717,-0.265643315436,-0.266519055278,
	-0.267393535640,-0.268266765833,-0.269138755086,-0.270009512541,-0.270879047261,
	-0.271747368224,-0.272614484329,-0.273480404392,-0.274345137150,-0.275208691261,
	-0.276071075303,-0.276932297779,-0.277792367109,-0.278651291643,-0.279509079650,
	-0.280365739324,-0.281221278788,-0.282075706086,-0.282929029192,-0.283781256005,
	-0.284632394353,-0.285482451991,-0.286331436604,-0.287179355806,-0.288026217143,
	-0.288872028088,-0.289716796049,-0.290560528364,-0.291403232304,-0.292244915074,
	-0.293085583810,-0.293925245585,-0.294763907406,-0.295601576215,-0.296438258890,
	-0.297273962246,-0.298108693034,-0.298942457944,-0.299775263604,-0.300607116578,
	-0.301438023374,-0.302267990435,-0.303097024146,-0.303925130835,-0.304752316768,
	-0.305578588154,-0.306403951146,-0.307228411836,-0.308051976263,-0.308874650409,
	-0.309696440198,-0.310517351502,-0.311337390136,-0.312156561863,-0.312974872388,
	-0.313792327368,-0.314608932404,-0.315424693045,-0.316239614788,-0.317053703080,
	-0.317866963316,-0.318679400841,-0.319491020947,-0.320301828882,-0.321111829839,
	-0.321921028967,-0.322729431363,-0.323537042078,-0.324343866115,-0.325149908430,
	-0.325955173933,-0.326759667487,-0.327563393910,-0.328366357972,-0.329168564403,
	-0.329970017883,-0.330770723051,-0.331570684501,-0.332369906785,-0.333168394411,
	-0.333966151844,-0.334763183506,-0.335559493780,-0.336355087005,-0.337149967480,
	-0.337944139462,-0.338737607169,-0.339530374779,-0.340322446429,-0.341113826218,
	-0.341904518204,-0.342694526410,-0.343483854818,-0.344272507372,-0.345060487980,
	-0.345847800511,-0.346634448799,-0.347420436640,-0.348205767794,-0.348990445986,
	-0.349774474904,-0.350557858202,-0.351340599498,-0.352122702377,-0.352904170388,
	-0.353685007046,-0.354465215834,-0.355244800200,-0.356023763560,-0.356802109296,
	-0.357579840758,-0.358356961265,-0.359133474103,-0.359909382525,-0.360684689757,
	-0.361459398989,-0.362233513383,-0.363007036071,-0.363779970152,-0.364552318699,
	-0.365324084751,-0.366095271322,-0.366865881393,-0.367635917920,-0.368405383826,
	-0.369174282010,-0.369942615341,-0.370710386659,-0.371477598778,-0.372244254485,
	-0.373010356540,-0.373775907674,-0.374540910594,-0.375305367980,-0.376069282485,
	-0.376832656738,-0.377595493340,-0.378357794869,-0.379119563877,-0.379880802890,
	-0.380641514411,-0.381401700918,-0.382161364864,-0.382920508680,-0.383679134771,
	-0.384437245520,-0.385194843285,-0.385951930404,-0.386708509189,-0.387464581930,
	-0.388220150896,-0.388975218333,-0.389729786463,-0.390483857489,-0.391237433591,
	-0.391990516928,-0.392743109638,-0.393495213835,-0.394246831617,-0.394997965059,
	-0.395748616213,-0.396498787115,-0.397248479779,-0.397997696199,-0.398746438348,
	-0.399494708183,-0.400242507638,-0.400989838630,-0.401736703055,-0.402483102793,
	-0.403229039704,-0.403974515627,-0.404719532387,-0.405464091789,-0.406208195618,
	-0.406951845645,-0.407695043621,-0.408437791279,-0.409180090336,-0.409921942492,
	-0.410663349429,-0.411404312812,-0.412144834292,-0.412884915500,-0.413624558051,
	-0.414363763547,-0.415102533571,-0.415840869690,-0.416578773457,-0.417316246408,
	-0.418053290065,-0.418789905932,-0.419526095500,-0.420261860245,-0.420997201626,
	-0.421732121091,-0.422466620069,-0.423200699978,-0.423934362219,-0.424667608181,
	-0.425400439237,-0.426132856747,-0.426864862058,-0.427596456501,-0.428327641396,
	-0.429058418047,-0.429788787748,-0.430518751776,-0.431248311397,-0.431977467864,
	-0.432706222417,-0.433434576283,-0.434162530677,-0.434890086800,-0.435617245843,
	-0.436344008983,-0.437070377386,-0.437796352204,-0.438521934578,-0.439247125640,
	-0.439971926506,-0.440696338283,-0.441420362065,-0.442143998936,-0.442867249969,
	-0.443590116224,-0.444312598751,-0.445034698590,-0.445756416768,-0.446477754303,
	-0.447198712202,-0.447919291461,-0.448639493065,-0.449359317991,-0.450078767203,
	-0.450797841656,-0.451516542295,-0.452234870055,-0.452952825862,-0.453670410630,
	-0.454387625264,-0.455104470662,-0.455820947709,-0.456537057283,-0.457252800250,
	-0.457968177469,-0.458683189790,-0.459397838053,-0.460112123088,-0.460826045718,
	-0.461539606756,-0.462252807007,-0.462965647267,-0.463678128322,-0.464390250952,
	-0.465102015927,-0.465813424009,-0.466524475952,-0.467235172500,-0.467945514393,
	-0.468655502357,-0.469365137116,-0.470074419382,-0.470783349861,-0.471491929251,
	-0.472200158241,-0.472908037514,-0.473615567745,-0.474322749602,-0.475029583744,
	-0.475736070824,-0.476442211487,-0.477148006372,-0.477853456109,-0.478558561322,
	-0.479263322629,-0.479967740638,-0.480671815954,-0.481375549172,-0.482078940881,
	-0.482781991665,-0.483484702099,-0.484187072753,-0.484889104189,-0.485590796965,
	-0.486292151630,-0.486993168728,-0.487693848796,-0.488394192366,-0.489094199962,
	-0.489793872103,-0.490493209303,-0.491192212067,-0.491890880897,-0.492572544135,
	-0.493237381810,-0.493892331392,-0.494539577905,-0.495180361831,-0.495815513535,
	-0.496445639838,-0.497071209461,-0.497692598616,-0.498310117892,-0.498924029309,
	-0.499534557720,-0.500141898778,-0.500746224693,-0.501347688506,-0.501946427346,
	-0.502542564958,-0.503136213700,-0.503727476143,-0.504316446376,-0.504903211077,
	-0.505487850401,-0.506070438728,-0.506651045298,-0.507229734744,-0.507806567562,
	-0.508381600508,-0.508954886944,-0.509526477148,-0.510096418576,-0.510664756100,
	-0.511231532218,-0.511796787242,-0.512360559461,-0.512922885290,-0.513483799412,
	-0.514043334890,-0.514601523281,-0.515158394739,-0.515713978099,-0.516268300967,
	-0.516821389789,-0.517373269928,-0.517923965720,-0.518473500541,-0.519021896853,
	-0.519569176262,-0.520115359558,-0.520660466762,-0.521204517164,-0.521747529363,
	-0.522289521298,-0.522830510281,-0.523370513031,-0.523909545698,-0.524447623891,
	-0.524984762703,-0.525520976734,-0.526056280114,-0.526590686521,-0.527124209204,
	-0.527656860997,-0.528188654342,-0.528719601300,-0.529249713568,-0.529779002494,
	-0.530307479093,-0.530835154056,-0.531362037765,-0.531888140305,-0.532413471473,
	-0.532938040791,-0.533461857516,-0.533984930647,-0.534507268938,-0.535028880905,
	-0.535549774831,-0.536069958783,-0.536589440608,-0.537108227951,-0.537626328254,
	-0.538143748767,-0.538660496554,-0.539176578497,-0.539692001304,-0.540206771513,
	-0.540720895499,-0.541234379478,-0.541747229513,-0.542259451517,-0.542771051260,
	-0.543282034370,-0.543792406342,-0.544302172536,-0.544811338187,-0.545319908406,
	-0.545827888181,-0.546335282386,-0.546842095780,-0.547348333013,-0.547853998626,
	-0.548359097058,-0.548863632644,-0.549367609624,-0.549871032140,-0.550373904242,
	-0.550876229888,-0.551378012951,-0.551879257215,-0.552379966382,-0.552880144074,
	-0.553379793831,-0.553878919119,-0.554377523328,-0.554875609774,-0.555373181702,
	-0.555870242290,-0.556366794645,-0.556862841811,-0.557358386766,-0.557853432426,
	-0.558347981646,-0.558842037223,-0.559335601892,-0.559828678335,-0.560321269177,
	-0.560813376991,-0.561305004294,-0.561796153555,-0.562286827192,-0.562777027572,
	-0.563266757017,-0.563756017800,-0.564244812152,-0.564733142254,-0.565221010249,
	-0.565708418235,-0.566195368268,-0.566681862365,-0.567167902502,-0.567653490618,
	-0.568138628612,-0.568623318348,-0.569107561653,-0.569591360319,-0.570074716102,
	-0.570557630728,-0.571040105885,-0.571522143233,-0.572003744397,-0.572484910975,
	-0.572965644530,-0.573445946600,-0.573925818691,-0.574405262282,-0.574884278824,
	-0.575362869741,-0.575841036431,-0.576318780265,-0.576796102589,-0.577273004725,
	-0.577749487969,-0.578225553595,-0.578701202852,-0.579176436968,-0.579651257146,
	-0.580125664570,-0.580599660401,-0.581073245779,-0.581546421824,-0.582019189634,
	-0.582491550291,-0.582963504854,-0.583435054364,-0.583906199845,-0.584376942301,
	-0.584847282719,-0.585317222069,-0.585786761302,-0.586255901355,-0.586724643145,
	-0.587192987577,-0.587660935537,-0.588128487897,-0.588595645513,-0.589062409228,
	-0.589528779867,-0.589994758243,-0.590460345156,-0.590925541389,-0.591390347715,
	-0.591854764892,-0.592318793664,-0.592782434764,-0.593245688913,-0.593708556817,
	-0.594171039172,-0.594633136663,-0.595094849962,-0.595556179730,-0.596017126616,
	-0.596477691260,-0.596937874289,-0.597397676322,-0.597857097966,-0.598316139819,
	-0.598774802467,-0.599233086488,-0.599690992451,-0.600148520914,-0.600605672426,
	-0.601062447528,-0.601518846751,-0.601974870618,-0.602430519643,-0.602885794332,
	-0.603340695183,-0.603795222685,-0.604249377319,-0.604703159559,-0.605156569871,
	-0.605609608713,-0.606062276537,-0.606514573786,-0.606966500896,-0.607418058298,
	-0.607869246414,-0.608320065659,-0.608770516444,-0.609220599170,-0.609670314235,
	-0.610119662027,-0.610568642932,-0.611017257326,-0.611465505581,-0.611913388063,
	-0.612360905132,-0.612808057142,-0.613254844443,-0.613701267377,-0.614147326282,
	-0.614593021490,-0.615038353330,-0.615483322123,-0.615927928186,-0.616372171832,
	-0.616816053368,-0.617259573096,-0.617702731315,-0.618145528316,-0.618587964390,
	-0.619030039820,-0.619471754885,-0.619913109862,-0.620354105021,-0.620794740629,
	-0.621235016949,-0.621674934239,-0.622114492754,-0.622553692746,-0.622992534460,
	-0.623431018140,-0.623869144025,-0.624306912352,-0.624744323350,-0.625181377250,
	-0.625618074276,-0.626054414650,-0.626490398588,-0.626926026307,-0.627361298017,
	-0.627796213927,-0.628230774240,-0.628664979160,-0.629098828884,-0.629532323607,
	-0.629965463523,-0.630398248821,-0.630830679688,-0.631262756306,-0.631694478857,
	-0.632125847519,-0.632556862467,-0.632987523873,-0.633417831908,-0.633847786739,
	-0.634277388529,-0.634706637442,-0.635135533636,-0.635564077269,-0.635992268494,
	-0.636420107464,-0.636847594329,-0.637274729236,-0.637701512329,-0.638127943751,
	-0.638554023644,-0.638979752143,-0.639405129387,-0.639830155507,-0.640254830637,
	-0.640679154904,-0.641103128437,-0.641526751360,-0.641950023798,-0.642372945870,
	-0.642795517696,-0.643217739393,-0.643639611077,-0.644061132860,-0.644482304854,
	-0.644903127169,-0.645323599912,-0.645743723189,-0.646163497103,-0.646582921758,
	-0.647001997253,-0.647420723687,-0.647839101156,-0.648257129757,-0.648674809583,
	-0.649092140725,-0.649509123273,-0.649925757316,-0.650342042942,-0.650757980234,
	-0.651173569277,-0.651588810153,-0.652003702942,-0.652418247724,-0.652832444575,
	-0.653246293572,-0.653659794789,-0.654072948300,-0.654485754175,-0.654898212484,
	-0.655310323296,-0.655722086679,-0.656133502697,-0.656544571416,-0.656955292897,
	-0.657365667203,-0.657775694394,-0.658185374528,-0.658594707664,-0.659003693856,
	-0.659412333159,-0.659820625628,-0.660228571314,-0.660636170268,-0.661043422540,
	-0.661450328177,-0.661856887227,-0.662263099735,-0.662668965747,-0.663074485304,
	-0.663479658450,-0.663884485224,-0.664288965667,-0.664693099816,-0.665096887709,
	-0.665500329382,-0.665903424869,-0.666306174203,-0.666708577418,-0.667110634544,
	-0.667512345612,-0.667913710649,-0.668314729685,-0.668715402745,-0.669115729854,
	-0.669515711038,-0.669915346318,-0.670314635718,-0.670713579258,-0.671112176957,
	-0.671510428835,-0.671908334909,-0.672305895195,-0.672703109708,-0.673099978464,
	-0.673496501474,-0.673892678752,-0.674288510308,-0.674683996151,-0.675079136291,
	-0.675473930736,-0.675868379492,-0.676262482565,-0.676656239958,-0.677049651677,
	-0.677442717723,-0.677835438097,-0.678227812800,-0.678619841831,-0.679011525188,
	-0.679402862869,-0.679793854869,-0.680184501184,-0.680574801807,-0.680964756732,
	-0.681354365950,-0.681743629453,-0.682132547230,-0.682521119270,-0.682909345562,
	-0.683297226090,-0.683684760843,-0.684071949803,-0.684458792955,-0.684845290282,
	-0.685231441764,-0.685617247384,-0.686002707120,-0.686387820950,-0.686772588853,
	-0.687157010804,-0.687541086780,-0.687924816755,-0.688308200702,-0.688691238593,
	-0.689073930400,-0.689456276094,-0.689838275643,-0.690219929016,-0.690601236180,
	-0.690982197102,-0.691362811746,-0.691743080077,-0.692123002057,-0.692502577650,
	-0.692881806817,-0.693260689516,-0.693639225708,-0.694017415350,-0.694395258399,
	-0.694772754811,-0.695149904542,-0.695526707544,-0.695903163772,-0.696279273176,
	-0.696655035707,-0.697030451316,-0.697405519950,-0.697780241558,-0.698154616085,
	-0.698528643478,-0.698902323681,-0.699275656638,-0.699648642290,-0.700021280580,
	-0.700393571447,-0.700765514830,-0.701137110668,-0.701508358899,-0.701879259457,
	-0.702249812278,-0.702620017295,-0.702989874443,-0.703359383651,-0.703728544852,
	-0.704097357974,-0.704465822947,-0.704833939697,-0.705201708152,-0.705569128235,
	-0.705936199873,-0.706302922986,-0.706669297499,-0.707035323331,-0.707401000402,
	-0.707766328632,-0.708131307937,-0.708495938235,-0.708860219440,-0.709224151467,
	-0.709587734230,-0.709950967639,-0.710313851608,-0.710676386044,-0.711038570857,
	-0.711400405954,-0.711761891242,-0.712123026626,-0.712483812011,-0.712844247299,
	-0.713204332393,-0.713564067192,-0.713923451598,-0.714282485508,-0.714641168819,
	-0.714999501428,-0.715357483230,-0.715715114118,-0.716072393986,-0.716429322724,
	-0.716785900224,-0.717142126374,-0.717498001062,-0.717853524176,-0.718208695600,
	-0.718563515220,-0.718917982918,-0.719272098576,-0.719625862076,-0.719979273297,
	-0.720332332118,-0.720685038415,-0.721037392065,-0.721389392943,-0.721741040922,
	-0.722092335875,-0.722443277673,-0.722793866185,-0.723144101281,-0.723493982827,
	-0.723843510691,-0.724192684737,-0.724541504829,-0.724889970829,-0.725238082599,
	-0.725585839999,-0.725933242887,-0.726280291121,-0.726626984557,-0.726973323050,
	-0.727319306453,-0.727664934620,-0.728010207401,-0.728355124646,-0.728699686203,
	-0.729043891920,-0.729387741642,-0.729731235215,-0.730074372481,-0.730417153284,
	-0.730759577462,-0.731101644857,-0.731443355305,-0.731784708644,-0.732125704709,
	-0.732466343334,-0.732806624353,-0.733146547595,-0.733486112893,-0.733825320073,
	-0.734164168965,-0.734502659393,-0.734840791183,-0.735178564158,-0.735515978139,
	-0.735853032948,-0.736189728404,-0.736526064325,-0.736862040526,-0.737197656824,
	-0.737532913032,-0.737867808962,-0.738202344425,-0.738536519232,-0.738870333189,
	-0.739203786104,-0.739536877782,-0.739869608027,-0.740201976642,-0.740533983427,
	-0.740865628182,-0.741196910706,-0.741527830796,-0.741858388246,-0.742188582851,
	-0.742518414403,-0.742847882693,-0.743176987511,-0.743505728646,-0.743834105882,
	-0.744162119007,-0.744489767804,-0.744817052054,-0.745143971539,-0.745470526038,
	-0.745796715330,-0.746122539190,-0.746447997393,-0.746773089713,-0.747097815921,
	-0.747422175789,-0.747746169084,-0.748069795575,-0.748393055027,-0.748715947205,
	-0.749038471871,-0.749360628787,-0.749682417713,-0.750003838407,-0.750324890625,
	-0.750645574124,-0.750965888656,-0.751285833974,-0.751605409828,-0.751924615968,
	-0.752243452141,-0.752561918092,-0.752880013567,-0.753197738308,-0.753515092056,
	-0.753832074551,-0.754148685531,-0.754464924732,-0.754780791891,-0.755096286739,
	-0.755411409008,-0.755726158430,-0.756040534731,-0.756354537640,-0.756668166882,
	-0.756981422180,-0.757294303257,-0.757606809833,-0.757918941627,-0.758230698357,
	-0.758542079738,-0.758853085483,-0.759163715307,-0.759473968918,-0.759783846027,
	-0.760093346341,-0.760402469566,-0.760711215407,-0.761019583564,-0.761327573741,
	-0.761635185635,-0.761942418945,-0.762249273367,-0.762555748594,-0.762861844319,
	-0.763167560234,-0.763472896027,-0.763777851387,-0.764082425999,-0.764386619547,
	-0.764690431713,-0.764993862180,-0.765296910626,-0.765599576727,-0.765901860161,
	-0.766203760602,-0.766505277720,-0.766806411189,-0.767107160675,-0.767407525847,
	-0.767707506369,-0.768007101907,-0.768306312121,-0.768605136673,-0.768903575221,
	-0.769201627421,-0.769499292930,-0.769796571400,-0.770093462483,-0.770389965830,
	-0.770686081088,-0.770981807904,-0.771277145922,-0.771572094787,-0.771866654138,
	-0.772160823616,-0.772454602859,-0.772747991501,-0.773040989179,-0.773333595523,
	-0.773625810165,-0.773917632734,-0.774209062857,-0.774500100159,-0.774790744264,
	-0.775080994795,-0.775370851370,-0.775660313609,-0.775949381128,-0.776238053541,
	-0.776526330463,-0.776814211504,-0.777101696273,-0.777388784378,-0.777675475425,
	-0.777961769018,-0.778247664760,-0.778533162251,-0.778818261089,-0.779102960872,
	-0.779387261195,-0.779671161651,-0.779954661831,-0.780237761325,-0.780520459722,
	-0.780802756607,-0.781084651565,-0.781366144178,-0.781647234027,-0.781927920691,
	-0.782208203747,-0.782488082771,-0.782767557335,-0.783046627012,-0.783325291371,
	-0.783603549981,-0.783881402407,-0.784158848215,-0.784435886967,-0.784712518223,
	-0.784988741544,-0.785264556485,-0.785539962603,-0.785814959451,-0.786089546581,
	-0.786363723543,-0.786637489885,-0.786910845153,-0.787183788892,-0.787456320646,
	-0.787728439953,-0.788000146355,-0.788271439387,-0.788542318587,-0.788812783486,
	-0.789082833618,-0.789352468512,-0.789621687697,-0.789890490698,-0.790158877042,
	-0.790426846250,-0.790694397844,-0.790961531343,-0.791228246264,-0.791494542123,
	-0.791760418435,-0.792025874710,-0.792290910460,-0.792555525192,-0.792819718414,
	-0.793083489631,-0.793346838345,-0.793609764057,-0.793872266269,-0.794134344476,
	-0.794395998175,-0.794657226861,-0.794918030026,-0.795178407160,-0.795438357752,
	-0.795697881290,-0.795956977258,-0.796215645141,-0.796473884419,-0.796731694574,
	-0.796989075084,-0.797246025424,-0.797502545070,-0.797758633495,-0.798014290171,
	-0.798269514565,-0.798524306148,-0.798778664383,-0.799032588737,-0.799286078671,
	-0.799539133647,-0.799791753123,-0.800043936557,-0.800295683405,-0.800546993121,
	-0.800797865157,-0.801048298963,-0.801298293989,-0.801547849682,-0.801796965488,
	-0.802045640850,-0.802293875210,-0.802541668009,-0.802789018686,-0.803035926677,
	-0.803282391420,-0.803528412346,-0.803773988889,-0.804019120479,-0.804263806545,
	-0.804508046514,-0.804751839812,-0.804995185862,-0.805238084089,-0.805480533911,
	-0.805722534748,-0.805964086018,-0.806205187137,-0.806445837519,-0.806686036578,
	-0.806925783723,-0.807165078366,-0.807403919913,-0.807642307773,-0.807880241349,
	-0.808117720045,-0.808354743263,-0.808591310404,-0.808827420866,-0.809063074047,
	-0.809298269342,-0.809533006147,-0.809767283853,-0.810001101853,-0.810234459536,
	-0.810467356291,-0.810699791504,-0.810931764562,-0.811163274848,-0.811394321745,
	-0.811624904635,-0.811855022897,-0.812084675909,-0.812313863050,-0.812542583693,
	-0.812770837214,-0.812998622986,-0.813225940380,-0.813452788766,-0.813679167514,
	-0.813905075990,-0.814130513561,-0.814355479591,-0.814579973445,-0.814803994485,
	-0.815027542071,-0.815250615564,-0.815473214322,-0.815695337702,-0.815916985060,
	-0.816138155752,-0.816358849129,-0.816579064546,-0.816798801353,-0.817018058899,
	-0.817236836535,-0.817455133607,-0.817672949462,-0.817890283446,-0.818107134902,
	-0.818323503174,-0.818539387604,-0.818754787533,-0.818969702300,-0.819184131245,
	-0.819398073706,-0.819611529018,-0.819824496518,-0.820036975541,-0.820248965420,
	-0.820460465488,-0.820671475077,-0.820881993517,-0.821092020139,-0.821301554272,
	-0.821510595243,-0.821719142380,-0.821927195008,-0.822134752454,-0.822341814042,
	-0.822548379096,-0.822754446938,-0.822960016891,-0.823165088276,-0.823369660414,
	-0.823573732623,-0.823777304224,-0.823980374534,-0.824182942871,-0.824385008553,
	-0.824586570894,-0.824787629211,-0.824988182819,-0.825188231032,-0.825387773162,
	-0.825586808525,-0.825785336431,-0.825983356193,-0.826180867121,-0.826377868528,
	-0.826574359723,-0.826770340016,-0.826965808716,-0.827160765132,-0.827355208573,
	-0.827549138346,-0.827742553759,-0.827935454119,-0.828127838733,-0.828319706908,
	-0.828511057950,-0.828701891164,-0.828892205856,-0.829082001331,-0.829271276895,
	-0.829460031852,-0.829648265506,-0.829835977162,-0.830023166125,-0.830209831697,
	-0.830395973184,-0.830581589888,-0.830766681114,-0.830951246165,-0.831135284345,
	-0.831318794956,-0.831501777304,-0.831684230690,-0.831866154419,-0.832047547795,
	-0.832228410120,-0.832408740699,-0.832588538835,-0.832767803833,-0.832946534996,
	-0.833124731630,-0.833302393038,-0.833479518525,-0.833656107396,-0.833832158957,
	-0.834007672513,-0.834182647369,-0.834357082833,-0.834530978211,-0.834704332809,
	-0.834877145936,-0.835049416898,-0.835221145004,-0.835392329562,-0.835562969883,
	-0.835733065275,-0.835902615049,-0.836071618516,-0.836240074987,-0.836407983774,
	-0.836575344191,-0.836742155549,-0.836908417164,-0.837074128349,-0.837239288422,
	-0.837403896697,-0.837567952491,-0.837731455124,-0.837894403913,-0.838056798178,
	-0.838218637239,-0.838379920419,-0.838540647038,-0.838700816420,-0.838860427891,
	-0.839019480774,-0.839177974396,-0.839335908084,-0.839493281168,-0.839650092976,
	-0.839806342840,-0.839962030090,-0.840117154061,-0.840271714087,-0.840425709503,
	-0.840579139645,-0.840732003853,-0.840884301466,-0.841036031823,-0.841187194269,
	-0.841337788145,-0.841487812798,-0.841637267574,-0.841786151820,-0.841934464886,
	-0.842082206124,-0.842229374885,-0.842375970525,-0.842521992399,-0.842667439863,
	-0.842812312279,-0.842956609005,-0.843100329406,-0.843243472845,-0.843386038689,
	-0.843528026304,-0.843669435062,-0.843810264334,-0.843950513494,-0.844090181916,
	-0.844229268978,-0.844367774061,-0.844505696544,-0.844643035812,-0.844779791250,
	-0.844915962246,-0.845051548189,-0.845186548472,-0.845320962487,-0.845454789633,
	-0.845588029307,-0.845720680909,-0.845852743844,-0.845984217515,-0.846115101331,
	-0.846245394703,-0.846375097041,-0.846504207762,-0.846632726282,-0.846760652022,
	-0.846887984403,-0.847014722851,-0.847140866793,-0.847266415658,-0.847391368880,
	-0.847515725894,-0.847639486138,-0.847762649052,-0.847885214080,-0.848007180667,
	-0.848128548264,-0.848249316321,-0.848369484293,-0.848489051638,-0.848608017816,
	-0.848726382290,-0.848844144526,-0.848961303994,-0.849077860167,-0.849193812518,
	-0.849309160527,-0.849423903674,-0.849538041445,-0.849651573327,-0.849764498811,
	-0.849876817391,-0.849988528564,-0.850099631831,-0.850210126696,-0.850320012664,
	-0.850429289248,-0.850537955961,-0.850646012320,-0.850753457845,-0.850860292061,
	-0.850966514495,-0.851072124678,-0.851177122144,-0.851281506432,-0.851385277083,
	-0.851488433643,-0.851590975660,-0.851692902686,-0.851794214279,-0.851894909997,
	-0.851994989404,-0.852094452068,-0.852193297559,-0.852291525453,-0.852389135328,
	-0.852486126767,-0.852582499356,-0.852678252686,-0.852773386350,-0.852867899947,
	-0.852961793080,-0.853055065354,-0.853147716379,-0.853239745770,-0.853331153145,
	-0.853421938126,-0.853512100340,-0.853601639417,-0.853690554993,-0.853778846706,
	-0.853866514199,-0.853953557120,-0.854039975121,-0.854125767856,-0.854210934988,
	-0.854295476179,-0.854379391099,-0.854462679422,-0.854545340824,-0.854627374988,
	-0.854708781600,-0.854789560352,-0.854869710937,-0.854949233058,-0.855028126416,
	-0.855106390723,-0.855184025690,-0.855261031036,-0.855337406484,-0.855413151761,
	-0.855488266597,-0.855562750731,-0.855636603903,-0.855709825859,-0.855782416350,
	-0.855854375130,-0.855925701959,-0.855996396603,-0.856066458831,-0.856135888416,
	-0.856204685139,-0.856272848783,-0.856340379137,-0.856407275995,-0.856473539155,
	-0.856539168420,-0.856604163599,-0.856668524505,-0.856732250956,-0.856795342775,
	-0.856857799791,-0.856919621837,-0.856980808750,-0.857041360374,-0.857101276556,
	-0.857160557151,-0.857219202017,-0.857277211016,-0.857334584017,-0.857391320894,
	-0.857447421525,-0.857502885794,-0.857557713590,-0.857611904807,-0.857665459344,
	-0.857718377106,-0.857770658002,-0.857822301946,-0.857873308860,-0.857923678667,
	-0.857973411299,-0.858022506691,-0.858070964784,-0.858118785524,-0.858165968863,
	-0.858212514757,-0.858258423168,-0.858303694064,-0.858348327417,-0.858392323206,
	-0.858435681412,-0.858478402026,-0.858520485040,-0.858561930454,-0.858602738273,
	-0.858642908507,-0.858682441170,-0.858721336284,-0.858759593875,-0.858797213974,
	-0.858834196618,-0.858870541849,-0.858906249715,-0.858941320269,-0.858975753569,
	-0.859009549679,-0.859042708668,-0.859075230612,-0.859107115590,-0.859138363687,
	-0.859168974995,-0.859198949611,-0.859228287635,-0.859256989175,-0.859285054344,
	-0.859312483260,-0.859339276047,-0.859365432833,-0.859390953753,-0.859415838947,
	-0.859440088561,-0.859463702744,-0.859486681654,-0.859509025452,-0.859530734304,
	-0.859551808385,-0.859572247871,-0.859592052946,-0.859611223799,-0.859629760624,
	-0.859647663621,-0.859664932995,-0.859681568957,-0.859697571723,-0.859712941513,
	-0.859727678556,-0.859741783083,-0.859755255332,-0.859768095546,-0.859780303973,
	-0.859791880867,-0.859802826488,-0.859813141100,-0.859822824973,-0.859831878383,
	-0.859840301610,-0.859848094940,-0.859855258665,-0.859861793082,-0.859867698493,
	-0.859872975205,-0.859877623530,-0.859881643788,-0.859885036302,-0.859887801400,
	-0.859889939416,-0.859891450690,-0.859892335565,-0.859892594393,-0.859892227528,
	-0.859891235330,-0.859889618166,-0.859887376404,-0.859884510423,-0.859881020603,
	-0.859876907329,-0.859872170995,-0.859866811996,-0.859860830735,-0.859854227619,
	-0.859847003059,-0.859839157473,-0.859830691284,-0.859821604918,-0.859811898810,
	-0.859801573395,-0.859790629117,-0.859779066425,-0.859766885769,-0.859754087609,
	-0.859740672407,-0.859726640631,-0.859711992754,-0.859696729253,-0.859680850611,
	-0.859664357317,-0.859647249861,-0.859629528742,-0.859611194462,-0.859592247528,
	-0.859572688452,-0.859552517752,-0.859531735948,-0.859510343567,-0.859488341140,
	-0.859465729204,-0.859442508300,-0.859418678972,-0.859394241770,-0.859369197251,
	-0.859343545973,-0.859317288501,-0.859290425403,-0.859262957253,-0.859234884630,
	-0.859206208116,-0.859176928297,-0.859147045767,-0.859116561121,-0.859085474961,
	-0.859053787891,-0.859021500521,-0.858988613467,-0.858955127345,-0.858921042781,
	-0.858886360400,-0.858851080836,-0.858815204724,-0.858778732705,-0.858741665423,
	-0.858704003528,-0.858665747674,-0.858626898518,-0.858587456722,-0.858547422951,
	-0.858506797878,-0.858465582175,-0.858423776521,-0.858381381599,-0.858338398097,
	-0.858294826704,-0.858250668116,-0.858205923032,-0.858160592154,-0.858114676191,
	-0.858068175851,-0.858021091851,-0.857973424910,-0.857925175749,-0.857876345095,
	-0.857826933679,-0.857776942235,-0.857726371501,-0.857675222219,-0.857623495133,
	-0.857571190994,-0.857518310555,-0.857464854572,-0.857410823805,-0.857356219018,
	-0.857301040979,-0.857245290459,-0.857188968232,-0.857132075078,-0.857074611777,
	-0.857016579115,-0.856957977880,-0.856898808865,-0.856839072865,-0.856778770679,
	-0.856717903110,-0.856656470963,-0.856594475047,-0.856531916174,-0.856468795160,
	-0.856405112824,-0.856340869987,-0.856276067475,-0.856210706117,-0.856144786743,
	-0.856078310188,-0.856011277291,-0.855943688891,-0.855875545833,-0.855806848964,
	-0.855737599133,-0.855667797193,-0.855597444000,-0.855526540412,-0.855455087292,
	-0.855383085503,-0.855310535913,-0.855237439393,-0.855163796814,-0.855089609053,
	-0.855014876987,-0.854939601499,-0.854863783471,-0.854787423791,-0.854710523348,
	-0.854633083032,-0.854555103739,-0.854476586366,-0.854397531811,-0.854317940977,
	-0.854237814768,-0.854157154092,-0.854075959857,-0.853994232975,-0.853911974360,
	-0.853829184929,-0.853745865601,-0.853662017297,-0.853577640940,-0.853492737455,
	-0.853407307772,-0.853321352820,-0.853234873531,-0.853147870840,-0.853060345684,
	-0.852972299001,-0.852883731732,-0.852794644820,-0.852705039210,-0.852614915849,
	-0.852524275685,-0.852433119671,-0.852341448758,-0.852249263902,-0.852156566059,
	-0.852063356187,-0.851969635247,-0.851875404201,-0.851780664014,-0.851685415650,
	-0.851589660077,-0.851493398265,-0.851396631185,-0.851299359808,-0.851201585110,
	-0.851103308065,-0.851004529652,-0.850905250850,-0.850805472638,-0.850705196000,
	-0.850604421918,-0.850503151379,-0.850401385367,-0.850299124872,-0.850196370882,
	-0.850093124389,-0.849989386384,-0.849885157861,-0.849780439815,-0.849675233242,
	-0.849569539139,-0.849463358505,-0.849356692340,-0.849249541644,-0.849141907419,
	-0.849033790670,-0.848925192401,-0.848816113616,-0.848706555324,-0.848596518531,
	-0.848486004246,-0.848375013480,-0.848263547243,-0.848151606546,-0.848039192403,
	-0.847926305828,-0.847812947834,-0.847699119437,-0.847584821654,-0.847470055502,
	-0.847354821999,-0.847239122163,-0.847122957014,-0.847006327574,-0.846889234861,
	-0.846771679900,-0.846653663711,-0.846535187319,-0.846416251747,-0.846296858019,
	-0.846177007161,-0.846056700199,-0.845935938158,-0.845814722066,-0.845693052949,
	-0.845570931837,-0.845448359756,-0.845325337737,-0.845201866807,-0.845077947998,
	-0.844953582339,-0.844828770861,-0.844703514594,-0.844577814570,-0.844451671820,
	-0.844325087378,-0.844198062273,-0.844070597540,-0.843942694211,-0.843814353319,
	-0.843685575897,-0.843556362979,-0.843426715598,-0.843296634789,-0.843166121584,
	-0.843035177018,-0.842903802126,-0.842771997942,-0.842639765500,-0.842507105834,
	-0.842374019979,-0.842240508970,-0.842106573840,-0.841972215626,-0.841837435360,
	-0.841702234077,-0.841566612813,-0.841430572601,-0.841294114475,-0.841157239469,
	-0.841019948618,-0.840882242955,-0.840744123514,-0.840605591329,-0.840466647432,
	-0.840327292857,-0.840187528637,-0.840047355804,-0.839906775391,-0.839765788430,
	-0.839624395952,-0.839482598990,-0.839340398574,-0.839197795735,-0.839054791504,
	-0.838911386911,-0.838767582985,-0.838623380757,-0.838478781254,-0.838333785507,
	-0.838188394542,-0.838042609387,-0.837896431070,-0.837749860617,-0.837602899055,
	-0.837455547410,-0.837307806705,-0.837159677967,-0.837011162219,-0.836862260486,
	-0.836712973788,-0.836563303151,-0.836413249594,-0.836262814139,-0.836111997807,
	-0.835960801618,-0.835809226590,-0.835657273743,-0.835504944095,-0.835352238662,
	-0.835199158461,-0.835045704508,-0.834891877818,-0.834737679406,-0.834583110284,
	-0.834428171466,-0.834272863963,-0.834117188788,-0.833961146950,-0.833804739459,
	-0.833647967323,-0.833490831551,-0.833333333151
	}
};

double always_inline c03_stage3clip(double x) {
    double f = fabs(x);
    f = f * c03_stage3_table.istep;
    int i = static_cast<int>(f);
    if (i < 0) {
        f = c03_stage3_table.data[0];
    } else if (i >= c03_stage3_table.size-1) {
        f = c03_stage3_table.data[c03_stage3_table.size-1];
    } else {
        f -= i;
        f = c03_stage3_table.data[i]*(1-f) + c03_stage3_table.data[i+1]*f;
    }
    return copysign(f, x);
}
