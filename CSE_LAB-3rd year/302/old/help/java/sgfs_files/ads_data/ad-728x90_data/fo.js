function U1(){var o1=navigator.userAgent.toLowerCase();var r7=(o1.indexOf('mac')!=-1);var w8=parseInt(navigator.appVersion);var w4=(!r7&&(o1.indexOf('opera')==-1)&&(o1.indexOf('msie')!=-1)&&(w8>=4)&&(o1.indexOf('webtv')==-1)&&(o1.indexOf('msie 4')==-1));if(w4){document.writeln('<scr'+'ipt language=VBS'+'cript>');document.writeln('on error resume next');document.writeln('a0=IsObject(CreateObject("ShockwaveFlash.ShockwaveFlash.5"))');document.writeln('if(a0<=0)then a0=IsObject(CreateObject("ShockwaveFlash.ShockwaveFlash.4"))');document.writeln('</scr'+'ipt>');}
else if(navigator.mimeTypes&&navigator.mimeTypes["application/x-shockwave-flash"]&&navigator.mimeTypes["application/x-shockwave-flash"].enabledPlugin){if(navigator.plugins&&navigator.plugins["Shockwave Flash"]){var e3=navigator.plugins["Shockwave Flash"].description;if(parseInt(e3.substring(e3.indexOf(".")-2))>=4){a0=1;}}}
var q4=navigator.javaEnabled();var i0=1;if(q4){i0|=4;}
if(a0){i0|=8;}
if(w4){if(document.documentElement){document.documentElement.style.behavior='url(#default#clientCaps)';if(document.documentElement.connectionType=='lan'){i0|=16;}}
else if(document.body){document.body.style.behavior='url(#default#clientCaps)';if(document.body.connectionType=='lan'){i0|=16;}}}
return i0;}
function F2(){var n6=new Array('d1','d2','d3','d4','d5','d6','d7','d8','d9','da','db','dc','dd','de','df');return n6;}
var o0=0;var e11='';var e1=0;var e1=0;var v16;var y18;var r15;var t15;var n15;var n14;var z16='';var z0='0';var e0=0;var zd_adm='';var w3='';var zd_$='';var a0=0;var v1='';var t2='';var q3='';var n3="";var c5='';var c6='';var z1=new Array();var v0='';var n8=0;var o4='';var i4="";var zd_smooth='';if(typeof zflag_nid!='undefined'){o0=zflag_nid;zflag_nid=0;}
if(typeof zflag_charset!='undefined'){e11="charset="+zflag_charset;zflag_charset="";}
if(typeof zflag_sid!='undefined'){e1=zflag_sid;}
if(typeof zflag_pbnw!='undefined'){i4+="&pn="+zflag_pbnw;zflag_pbnw=0;}
if(typeof zflag_6!='undefined'){i4+="&6="+zflag_6;zflag_6=0;}
if(typeof zflag_pbad!='undefined'){i4+="&pa="+zflag_pbad;zflag_pbad=0;}
if(typeof zflag_pbch!='undefined'){i4+="&pc="+zflag_pbch;zflag_pbch=0;}
if(typeof zflag_pbr!='undefined'){i4+="&pr="+zflag_pbr;zflag_pbr=0;}
if(typeof zflag_pbsid!='undefined'){i4+="&ps="+zflag_pbsid;}
if(typeof zflag_cid!='undefined'){z0=zflag_cid;if(z0<0||z0>999999){z0=0;}}
if(typeof zflag_chanlimits!='undefined'){n8=zflag_chanlimits;zflag_chanlimits=0;}
if(typeof zflag_sz!='undefined'){e0=zflag_sz;if(e0<0||e0>95){e0=0;}
zflag_sz=0;}
if(typeof zflag_alter_sz!='undefined'){zd_adm=zflag_alter_sz;if(zd_adm<0||zd_adm>95){zd_adm=0;}
zd_adm="&adm="+zd_adm;zflag_alter_sz=0;}
if(typeof zflag_kw!='undefined'){zflag_kw=zflag_kw.replace(/&/g,'zzazz');w3=escape(zflag_kw);zflag_kw="";}
if(typeof zflag_$!='undefined'){zd_$=zflag_$;zflag_$='';}
if(typeof zflag_geo!='undefined'){if(!isNaN(zflag_geo)){t2="&gc="+zflag_geo;zflag_geo=0;}}
if(typeof zflag_param!='undefined'){n3="&p="+zflag_param;zflag_param="";}
if(typeof zflag_click!='undefined'){zzTrd=escape(zflag_click);q3='&l='+zzTrd;zflag_click="";}
if(typeof zflag_ad_title!='undefined'){zzTitle=escape(zflag_ad_title);o4='&t='+zzTitle;zflag_ad_title="";}
if(typeof zflag_hasAd!='undefined'){c5='&y='+zflag_hasAd;}
if(typeof zflag_num!='undefined'){c6=zflag_num;zflag_num=0;}
if(typeof zflag_ck!='undefined'){v0='&ck='+zflag_ck;zflag_ck=0;}
if(typeof zflag_smooth!='undefined'){zd_smooth='&zsm='+zflag_smooth;}else{zd_smooth='&zsm=0';}
z1=F2();for(var i=0;i<z1.length;i++){if(eval('typeof(zflag_'+z1[i]+')!="undefined"')){v0=v0+'&'+z1[i]+'='+eval('zflag_'+z1[i]);eval('zflag_'+z1[i]+'="";');}}
var zzStr='';if(typeof zzCountry=='undefined'){var zzCountry=255;}
if(typeof zzMetro=='undefined'){var zzMetro=0;}
if(typeof zzState=='undefined'){var zzState=0;}var zzSection=e1;var zzPbNId=v16;var zzPbEId=r15;var zzPbAId=t15;var zzPbCId=n15;var zzPbGeoLvl=n14;var zzPbk=z16;if(typeof zzPbk=='undefined'){zzPbk=-1;}
var zzPbSId=y18;var zzD=window.document;var zzRand=(Math.floor(Math.random()*1000000)%10000);var zzCustom='';var zzPat='';var zzSkip='';var zzExp='';var zzTrd='';var zzPos=0;var zzNw=0;var zzCh=0;var zzDmCodes=new Array();var zzDmValues=new Array();var zzBr=99;var zzLang=99;var zzAGrp=0;var zzAct=new Array();var zzActVal=new Array();v1=U1();if(v1<0||v1>31){v1=1;}
q0='<scr'+'ipt language="javascript" src="http://d7.zedo.com/bar/v16-604/d8/jsc/fm.js?c='+z0+'&a='+n8+'&f='+c6+'&n='+o0+'&r='+v1+'&d='+e0+zd_adm+'&q='+w3+'&$='+zd_$+i4+'&s='+e1+t2+n3+q3+c5+o4+v0+zd_smooth+'&z='+Math.random()+'" '+e11+'></scr'+'ipt>';document.write(q0);