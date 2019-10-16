<?php
$z[0]=Array("field","",431,450);
$z[0][4]['name']="title";
$z[1]=Array("global","",451,477);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",518,540);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",580,631);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",3298,3333);
$z[4][4]['filename']="head.htm";
$z[5]=Array("field","",3860,3882);
$z[5][4]['name']="typename";
$z[6]=Array("field","",5058,5080);
$z[6][4]['name']="position";
$z[7]=Array("field","",5624,5643);
$z[7][4]['name']="title";
$z[8]=Array("field","",5924,5942);
$z[8][4]['name']="body";
$z[9]=Array("type","[field:typelink /]",6216,6274);
$z[9][4]['typeid']="0";
$z[9][4]['row']="1";
$z[10]=Array("field","\$ID = @me; \$sql = \"SELECT * FROM `dede_arctype` WHERE id=\$ID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); \$relID = \"\$row[reid]\"; if(\$relID == 0) {@me = \$row[typename];}else{\$sql = \"SELECT `typename` FROM `dede_arctype` WHERE id=\$relID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); @me = \$row[typename];}",7746,8130);
$z[10][4]['name']="typeid";
$z[10][4]['runphp']="yes";
$z[11]=Array("channel","\r\n                <li><a href=\"[field:typeurl/]\" target=\"\">[field:typename/]</a><i></i></li>\r\n                ",8238,8464);
$z[11][4]['type']="son";
$z[11][4]['currentstyle']="<li class='current'><a href='~typelink~'>~typename~</a></li>";
$z[12]=Array("include","",9307,9342);
$z[12][4]['filename']="foot.htm";

?>