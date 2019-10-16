<?php
$z[0]=Array("field","",431,450);
$z[0][4]['name']="title";
$z[1]=Array("global","",451,477);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",518,547);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",587,645);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",3325,3360);
$z[4][4]['filename']="head.htm";
$z[5]=Array("field","",3930,3952);
$z[5][4]['name']="typename";
$z[6]=Array("field","",4871,4893);
$z[6][4]['name']="position";
$z[7]=Array("field","",5379,5400);
$z[7][4]['name']="content";
$z[8]=Array("field","\$ID = @me; \$sql = \"SELECT * FROM `dede_arctype` WHERE id=\$ID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); \$relID = \"\$row[reid]\"; if(\$relID == 0) {@me = \$row[typename];}else{\$sql = \"SELECT `typename` FROM `dede_arctype` WHERE id=\$relID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); @me = \$row[typename];}",5705,6089);
$z[8][4]['name']="typeid";
$z[8][4]['runphp']="yes";
$z[9]=Array("channel","\r\n                <li><a href=\"[field:typeurl/]\" target=\"\">[field:typename/]</a><i></i></li>\r\n                ",6197,6423);
$z[9][4]['type']="son";
$z[9][4]['currentstyle']="<li class='current'><a href='~typelink~'>~typename~</a></li>";
$z[10]=Array("include","",7266,7301);
$z[10][4]['filename']="foot.htm";

?>