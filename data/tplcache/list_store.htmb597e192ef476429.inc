<?php
$z[0]=Array("global","",96,122);
$z[0][4]=array();
$z[0][4]['name']="cfg_cmspath";
$z[1]=Array("field","",436,455);
$z[1][4]=array();
$z[1][4]['name']="title";
$z[2]=Array("global","",456,482);
$z[2][4]=array();
$z[2][4]['name']="cfg_webname";
$z[3]=Array("field","",523,552);
$z[3][4]=array();
$z[3][4]['name']="keywords";
$z[4]=Array("field","",592,650);
$z[4][4]=array();
$z[4][4]['name']="description";
$z[4][4]['function']="html2text(@me)";
$z[5]=Array("global","",692,718);
$z[5][4]=array();
$z[5][4]['name']="cfg_cmspath";
$z[6]=Array("global","",798,824);
$z[6][4]=array();
$z[6][4]['name']="cfg_cmspath";
$z[7]=Array("global","",898,924);
$z[7][4]=array();
$z[7][4]['name']="cfg_cmspath";
$z[8]=Array("global","",1003,1029);
$z[8][4]=array();
$z[8][4]['name']="cfg_cmspath";
$z[9]=Array("global","",1098,1124);
$z[9][4]=array();
$z[9][4]['name']="cfg_cmspath";
$z[10]=Array("global","",1183,1209);
$z[10][4]=array();
$z[10][4]['name']="cfg_cmspath";
$z[11]=Array("global","",1282,1308);
$z[11][4]=array();
$z[11][4]['name']="cfg_cmspath";
$z[12]=Array("global","",1372,1398);
$z[12][4]=array();
$z[12][4]['name']="cfg_cmspath";
$z[13]=Array("include","",1540,1575);
$z[13][4]=array();
$z[13][4]['filename']="head.htm";
$z[14]=Array("include","",1769,1806);
$z[14][4]=array();
$z[14][4]['filename']="banner.htm";
$z[15]=Array("field","\$ID = @me; \$sql = \"SELECT * FROM `dede_arctype` WHERE id=\$ID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); \$relID = \"\$row[reid]\"; if(\$relID == 0) {@me = \$row[typename];}else{\$sql = \"SELECT `typename` FROM `dede_arctype` WHERE id=\$relID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); @me = \$row[typename];}",1970,2354);
$z[15][4]=array();
$z[15][4]['name']="typeid";
$z[15][4]['runphp']="yes";
$z[16]=Array("list","\r\n            <li>\r\n              <div class=\"img1\"> <a><img src=\"[field:litpic/]\"/></a> </div>\r\n              <div class=\"web\">\r\n                <h4><a>[field:title/]</a></h4>\r\n                <p>电话：[field:dh/]</p>\r\n                <p>地址：[field:dz/]</p>\r\n              </div>\r\n            </li>\r\n            ",2475,2861);
$z[16][4]=array();
$z[16][4]['typeid']="22";
$z[16][4]['pagesize']="8";
$z[16][4]['channelid']="19";
$z[17]=Array("pagelist","",2986,3052);
$z[17][4]=array();
$z[17][4]['listitem']="index,end,pre,next,pageno";
$z[17][4]['listsize']="1";
$z[18]=Array("include","",3321,3358);
$z[18][4]=array();
$z[18][4]['filename']="footer.htm";

?>